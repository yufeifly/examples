#!/usr/bin/env python

import os
import subprocess

li = ["ls","-l"]
li2 = ['ls','-a','-l']

retcode = subprocess.call(li)
print('return : ',retcode)

print('----------')

retcode = subprocess.call(li2)
print('return : ',retcode)

