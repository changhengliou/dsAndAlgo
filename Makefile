CC=g++
CFLAGS=--std=c++14
INCLUDE=-I ./src
OUTPUT=ds
SRCDIR=./src
OBJDIR=./objs

_OBJS=ds.o sort.o algo.o
OBJS = $(patsubst %,$(OBJDIR)/%,$(_OBJS))
ENTRY = $(SRCDIR)/main.cc

.PHONY: clean

all: dev

$(OBJDIR)/%.o: $(SRCDIR)/%.cc $(SRCDIR)/%.hh
	$(CC) -c $(INCLUDE) $(CFLAGS) -o $@ $<

dev: $(ENTRY) $(OBJS)
	$(CC) $< $(CFLAGS) -Wall -g $(INCLUDE) $(OBJS) -o $(OUTPUT)

build: $(ENTRY) clean
	$(CC) $< $(CFLAGS) $(INCLUDE) -o $(OUTPUT)

#build-clean: build $(OUTPUT)
#	strip -s -R $(OUTPUT) --strip-unneeded -o DS

clean:
	rm -rf $(OBJDIR)/*.o *.dSYM