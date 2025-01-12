BIN = engine

CC     = g++
CFLAGS = -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network -lsfml-system

C_OBJS    = $(wildcard src/*.cpp)
C_HEADERS = $(wildcard src/*.h)

all: build

build: $(C_OBJS) $(C_HEADERS)
	$(CC) -o $(BIN) $(C_OBJS) $(CFLAGS)
