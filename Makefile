CFLAGS:=-Wall -Werror -pthread
CC:=$(CC)

all: hi hibye.a

hibye.a: hibye.go
	go build -buildmode=c-archive -o $@ $<

hi: hi.c hibye.a
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -fv *.a hibye.h hi

.PHONY: all clean
