/*
 * PropertiesParser.h
 *
 * URL:      https://github.com/panchaBhuta/cpp-properties_RecVar
 * Version:  2.0.rv-1.0
 *
 * Copyright (C) 2022 Gautam Dhar
 * Copyright (c) 2014 Fredy Wijaya
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef PROPERTIESPARSER_H_
#define PROPERTIESPARSER_H_

#include <string>
#include <exception>

#include <cpp-properties/Properties.h>

namespace cppproperties {

class PropertiesParser {
public:
    PropertiesParser();
    virtual ~PropertiesParser();

    /**
     * Reads a properties file and returns a Properties object.
     */
    static Properties Read(const std::string& file);

    /**
     * Writes Properties object to a file.
     */
    static void Write(const std::string& file, const Properties& props);
};

} /* namespace cppproperties */

#endif /* PROPERTIESPARSER_H_ */
