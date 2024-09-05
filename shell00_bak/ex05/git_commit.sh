#!/bin/sh

git log -n 5 --format=oneline | cut -d' ' -f1

