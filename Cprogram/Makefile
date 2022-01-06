CC=gcc
CFLAGS=-g -O0

all:mem_leak

%.o:%.c
	$(CC) $(CFLGS) -o $^

clean:
	rm -rf *.o mem_leak mem_leak_sanitizer

valgrind:
	valgrind --tool=memcheck --leak-check=yes ./mem_leak
sanitizer:
	$(CC) $(CFLAGS) -fsanitize=address mem_leak.c -o mem_leak_sanitizer
	./mem_leak_sanitizer
