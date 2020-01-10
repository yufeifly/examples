#!/usr/bin/env python

from time import sleep
import os
import subprocess
import sys

import socket

if __name__ == "__main__":
    cntr = sys.argv[1]
    #cntr = 'fucker'
    host = sys.argv[2]
    port = sys.argv[3]

    iter = 10
#    dir = ['../checkpoint']
    cmd_head = ['docker', 'checkpoint', 'create', '--pre-dump', '--checkpoint-dir', '/tmp/dump/', '--remote', cntr, 'checkpoint1']
#    cmd=['docker','checkpoint','create','--pre-dump','--prev-images-dir','../checkpoint2','--checkpoint-dir','/tmp/dump/','--remote',cntr,'checkpoint3']
    cmd_tail=['docker','checkpoint','create','--prev-images-dir','../checkpoint9','--checkpoint-dir','/tmp/dump/','--remote',cntr,'checkpoint10']
#    
    cmd1 = ['docker','checkpoint','create']
    pdump = ['--pre-dump']
    pdir = ['--prev-images-dir']
    cmd4 = ['--checkpoint-dir','/tmp/dump/','--remote']
    
    subprocess.call(cmd_head)
    for i in range(iter-2) :
        #subprocess.call(cmd2)
        command = cmd1 + pdump + pdir + ['../checkpoint' + str(i+1)] + cmd4 + [cntr] + ['checkpoint' + str(i+2)]
        subprocess.call(command)
        sleep(5)
    cmd_tail = cmd1 + pdir + ['../checkpoint' + str(iter-1)] + cmd4 + [cntr] + ['checkpoint' + str(iter)]
    subprocess.call(cmd_tail)
    
    with socket.socket(socket.AF_INET,socket.SOCK_STREAM):
        s.connect(server_addr)
        # for start dockerd
        s.send('dockerd'.encode())
        data = s.recv(1024).decode()
        if data == "received":
        # for start docker
        s.send(cntr.encode())

