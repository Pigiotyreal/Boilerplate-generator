CC=g++
SRCS_PATH=src/
BIN_PATH=bin/
CFLAGS=-Wall -g -std=c++11
SRCS=$(wildcard $(SRCS_PATH)/*.cpp)
OBJS=$(patsubst %.cpp, $(BIN_PATH)/%.o, $(notdir $(SRCS)))
TARGET=$(BIN_PATH)/main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -I$(SRCS_PATH)/inc

$(BIN_PATH)/%.o: $(SRCS_PATH)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -rf $(BIN_PATH)/*.o $(TARGET)