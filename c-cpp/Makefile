SRC_DIR := src
BIN_DIR := bin
CFLAGS := -Wall -g 
CPPFLAGS := -std=c++11

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(BIN_DIR)/%)

all : prepare $(OBJS)

prepare :
	$(if $(wildcard $(BIN_DIR)),,mkdir -p $(BIN_DIR))

#$(BIN_DIR)/% : $(SRC_DIR)/%.cpp
#	g++ $(CFLAGS) $(CPPFLAGS) -o $@ $>

$(BIN_DIR)/% : $(SRC_DIR)/%.c
	gcc $(CFLAGS) $^ -o $@ 

.PHONY = clean
clean:
	rm -rf $(OBJS)
