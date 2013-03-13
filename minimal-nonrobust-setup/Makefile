CC = g++
CPPFLAGS += -Wall -O3
CXXFLAGS += --std=gnu++0x

all: nonrobust-template-setup

nonrobust-template-setup: main.o A-foo-int.o bar.o
	$(CC)  $(CPPFLAGS) main.o A-foo-int.o bar.o  -o nonrobust-template-setup

clean: 
	rm -rf *.o nonrobust-template-setup

