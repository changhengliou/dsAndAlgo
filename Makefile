CC=g++
CFLAGS=--std=c++14
ENTRY=main.cc
INCLUDE=-I .
OUTPUT=ds

all: dev

dev: $(ENTRY)
	$(CC) $< $(CFLAGS) -Wall -g $(INCLUDE) -o $(OUTPUT)

build: $(ENTRY) clean
	$(CC) $< $(CFLAGS) $(INCLUDE) -o $(OUTPUT)

#build-clean: build $(OUTPUT)
#	strip -s -R $(OUTPUT) --strip-unneeded -o DS

clean:
	rm -rf *.o *.dSYM