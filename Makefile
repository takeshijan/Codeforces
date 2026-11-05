CXX = clang++
CC = clang

CXXFLAGS = -std=c++17
CFLAGS = -std=c11

TARGET = main

COLOR_RESET = \033[0m
COLOR_ERROR = \033[31m
COLOR_SUCCESS = \033[32m
COLOR_INFO = \033[34m
COLOR_YELLOW = \033[33m

ifneq ($(wildcard main.cpp),)
    SOURCE = main.cpp
    COMPILER = $(CXX)
    FLAGS = $(CXXFLAGS)
else ifneq ($(wildcard main.c),)
    SOURCE = main.c
    COMPILER = $(CC)
    FLAGS = $(CFLAGS)
else
    $(error Neither main.c nor main.cpp exists!)
endif

all: $(TARGET) run

$(TARGET): $(SOURCE)
	@echo "$(COLOR_INFO)Compiling $(SOURCE) $(COLOR_RESET)"
	@$(COMPILER) $(FLAGS) $(SOURCE) -o $(TARGET) 2>&1 || { echo "$(COLOR_ERROR)Compilation failed!$(COLOR_RESET)"; exit 1; }

run: $(TARGET)
	@echo "$(COLOR_YELLOW)\nRunning$(COLOR_RESET)"
	@./$(TARGET)
	@echo "$(COLOR_YELLOW)\nFinished$(COLOR_RESET)"
	@rm -f $(TARGET)

clean:
	@echo "$(COLOR_INFO)Cleaning up $(COLOR_RESET)"
	@rm -f $(TARGET)
	@echo "$(COLOR_SUCCESS)Cleanup done.$(COLOR_RESET)"

.PHONY: all run clean
