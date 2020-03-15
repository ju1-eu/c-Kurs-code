# ju  6-Mrz-20  Makefile - Win10
# *.c
TARGETS=\
	halloWelt.exe\
	main.exe \
	Functions.exe \
	Return.exe \


#-----------------------------------
# c
CC:=gcc
CDEBUG=-g3 -Wextra -Wno-missing-field-initializers -std=c18 # -Wall  
CRELEASE=-std=c18 -O2
# Bibliothek
#CLIBS=-lz FunctionsBib.c FunctionsBib.h MeineBib.c MeineBib.h -lm
CLIBS=-lm FunctionsBib.c FunctionsBib.h
# c++
CXX:=g++
CXXDEBUG=-g3 -Wextra -Wno-missing-field-initializers -std=c++2a   # -Wall 
CXXRELEASE=-std=c++2a -O2

all: $(TARGETS)
# gcc hallo.c -o hallo.exe
%.exe: %.c
	$(CC) $(CDEBUG) $(CLIBS) $< -o $@
	
# g++ hallo.cpp -o hallo.exe
%.exe: %.cpp
	$(CXX) $(CXXDEBUG) $(CLIBS) $< -o $@

# main.c -> Release o. Debug
release: main.o #bib.o
	$(CC) $(CRELEASE) main.c -o mainRelease.exe

debug: main.o #MeineBib.o
	$(CC) $(CDEBUG)   main.c -o mainDebug.exe

main.o: main.c
	$(CC) -c main.c

#bib.o: MeineBib.c
#	$(CC) -c MeineBib.c

clean:
	#rm -r *.exe -Force
	#rm -rf *.exe *~ *.o
	rm halloWelt.exe 
	rm main.exe 
	rm Functions.exe 
	rm Return.exe 

	#rm main.o
	#rm mainRelease.exe 
	#rm mainDebug.exe 
