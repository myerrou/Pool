#!/bin/sh
find . -name '*.sh' -print | xargs basename -s .sh
