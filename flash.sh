#!/usr/bin/env bash

sudo dfu-programmer atmega32u4 erase && sudo dfu-programmer atmega32u4 flash preonic_rev2_jbki.hex && sudo dfu-programmer atmega32u4 reset
