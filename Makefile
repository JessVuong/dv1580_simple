CC=gcc
CCFLAGS=-Wall -I. 
LDFLAGS=-I. 
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:.c=.o)

TARGET=helloworld
TARGET1=add
TARGET2=sub
TARGET3=mult
TARGET4=div

all: $(TARGET) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4)

$(TARGET): helloworld.o
	$(CC) $(LDFLAGS) $^ -o $@

$(TARGET1): add.o
	$(CC) $(LDFLAGS) $^ -o $@

$(TARGET2): sub.o
	$(CC) $(LDFLAGS) $^ -o $@

$(TARGET3): mult.o
	$(CC) $(LDFLAGS) $^ -o $@

$(TARGET4): div.o
	$(CC) $(LDFLAGS) $^ -o $@



%.o: %.c %.h
	$(CC) $(CCFLAGS) -c $<

%.o: %.c
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -f *.o $(TARGET) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4)

