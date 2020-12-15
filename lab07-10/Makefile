targets = lab51.bin lab52.bin lab53.bin lab54.bin lab55.bin lab61.bin lab62.bin lab63.bin lab64.bin lab65.bin lab66.bin supEx.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Werror -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab51.bin lab52.bin lab53.bin lab54.bin lab55.bin lab61.bin lab62.bin lab63.bin lab64.bin lab65.bin lab66.bin supEx.bin

lab51.bin: src/lab51.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab52.bin: src/lab52.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab53.bin: src/lab53.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab54.bin: src/lab54.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab55.bin: src/lab55.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab61.bin: src/lab61.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab62.bin: src/lab62.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab63.bin: src/lab63.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab64.bin: src/lab64.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab65.bin: src/lab65.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab66.bin: src/lab66.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
supEx.bin: src/supEx.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/lab51.bin lab52.bin lab53.bin lab54.bin lab55.bin lab61.bin lab62.bin lab63.bin lab64.bin lab65.bin lab66.bin supEx.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

