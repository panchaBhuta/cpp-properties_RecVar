#!/bin/bash

set -euo pipefail

if [ $# -ne 1 ]; then
  echo "'$0' install-script needs one argument for installation directory-path"
  exit 1
fi

INSTALL_DIR="${1}"

# refer build.sh for NAME and BUILD_DIR values
NAME=cpp-properties_RecVar
BUILD_DIR=build

if [ ! -d ${BUILD_DIR} ]; then
  ./build.sh
fi

pushd ${BUILD_DIR}
[ -d ${INSTALL_DIR}/${NAME} ] && rm -rf ${INSTALL_DIR}/${NAME}
make DESTDIR=${INSTALL_DIR} install
popd

