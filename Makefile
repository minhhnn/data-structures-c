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
SRCDIR := src/main
BUILDDIR := build
TARGETDIR := bin

all: LinkedList
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(TARGETDIR)

LinkedList: LinkedList.o Node.o
	@echo "Linking LinkedList"
	$(CC) -o LinkedList LinkedList.o Node.o

LinkedList.o: LinkedList.cpp Node.h LinkedList.h
	@echo "Compiling LinkedList.cpp";
	$(CC) $(CFLAGS) -c LinkedList.cpp

Node.o: Node.h
	@echo "Compiling Node.cpp";
	$(CC) $(CFLAGS) -c Node.cpp

clean:
	@echo "Cleaning TARGET ..."; rm -r $(BUILDDIR)

install:
	@echo "Installing EXECUTABLE..."; cp $(TARGETDIR) $(INSTALLBINDIR)

distclean:
	@echo "Removing EXECUTABLE"; rm -r $(TARGETDIR)

.PHONY: clean