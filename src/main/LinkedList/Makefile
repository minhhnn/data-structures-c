UNAME_S := $(shell uname -s)

# CC
ifeq ($(UNAME_S),Darwin)
  CC := clang++ -arch x86_64
else
  CC := g++
endif

CFLAGS := -Wall -c
# Platform Specific Compiler Flags
ifeq ($(UNAME_S),Linux)
    CFLAGS += -std=gnu++11 -O2 # -fPIC
else
  CFLAGS += -std=c++11 -stdlib=libc++ -O2
endif

# Folders
BUILDDIR := ../../../build
TARGETDIR := ../../../bin
TARGETEXEC := LinkedList
INSTALLBINDIR := /home/$(shell whoami)/bin

all: LinkedList

LinkedList: main.o
	@echo "Linking LinkedList"
	$(CC) -o $(TARGETDIR)/$(TARGETEXEC) $(BUILDDIR)/main.o

main.o: main.cpp
	@echo "Compiling main.cpp";
	$(CC) $(CFLAGS) -c main.cpp -o $(BUILDDIR)/main.o

clean:
	@echo "Cleaning $(BUILDDIR) ..."; rm -r $(BUILDDIR)/*.o

install:
	@echo "Installing $(TARGETEXEC)..."; cp $(TARGETDIR)/$(TARGETEXEC) $(INSTALLBINDIR)

distclean:
	@echo "Removing $(TARGETDIR)"; rm -r $(TARGETDIR)/*

.PHONY: clean