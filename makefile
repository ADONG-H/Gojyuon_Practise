#implicit 隐式的(暗示的)
SHELL = cmd.exe

CC=gcc
TARGET = Gojyuuon_Practise
BUILD_DIR = build

C_file_Path= \
gojyuuon_map.c \
gojyuuon_practise.c \
main.c

all: $(BUILD_DIR)/$(TARGET).exe

objects = $(addprefix $(BUILD_DIR)/,$(notdir $(C_file_Path:.c=.o)))
vpath %.c $(sort $(dir $(C_file_Path)))

$(BUILD_DIR)/%.o: %.c makefile | $(BUILD_DIR)
	$(CC) -std=c11 -c $< -I./ -o $@

$(BUILD_DIR)/$(TARGET).exe: $(objects)
	$(CC) $^ -o $@

$(BUILD_DIR):
	mkdir $@

.PHONY:clean
clean:
	del $(BUILD_DIR)\*.o $(BUILD_DIR)\*.exe