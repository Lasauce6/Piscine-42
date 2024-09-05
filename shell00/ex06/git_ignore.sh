#!/bin/sh

git status --ignored --short | grep "\!\!" | cut -d' ' -f2
