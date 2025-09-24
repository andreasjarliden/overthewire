#!/usr/bin/env bash
if [[ -z $1 ]]; then
  echo connect level
  exit -1
fi
ssh -p 2221 behemoth$1@behemoth.labs.overthewire.org
