# Standard Libdragon application Makefile
ROM = build/sotn64.z64
src = $(wildcard src/*.c)

include $(N64_INST)/include/n64.mk

all: $(ROM)

clean:
	rm -rf build

.PHONY: all clean
