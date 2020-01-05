SRC_DIR := src
BIN_CPP := cpp_bin
BIN_C := c_bin

CFLAGS := -Wall -g 
CPPFLAGS := $(CFLAGS) -std=c++11

SRCS_CPP := $(wildcard $(SRC_DIR)/*cpp)
SRCS_C := $(wildcard $(SRC_DIR)/*.c)
OBJS_CPP := $(SRCS_CPP:$(SRC_DIR)/%.cpp=$(BIN_CPP)/%)
OBJS_C := $(SRCS_C:$(SRC_DIR)/%.c=$(BIN_C)/%)

all : prepare $(OBJS_CPP) $(OBJS_C)

prepare :
	$(if $(wildcard $(BIN_CPP)),,mkdir -p $(BIN_CPP))
	$(if $(wildcard $(BIN_C)),,mkdir -p $(BIN_C))
	@echo prepare

$(BIN_CPP)/% : $(SRC_DIR)/%.cpp
	g++ $(CPPFLAGS) $^ -o  $@

$(BIN_C)/% : $(SRC_DIR)/%.c
	gcc $(CFLAGS) $^ -o  $@


#$(BIN_DIR)/% : $(SRC_DIR)/%.c
#	gcc $(CFLAGS) $^ -o $@ 

.PHONY = clean
clean:
	rm -rf $(OBJS_C) $(OBJS_CPP)
