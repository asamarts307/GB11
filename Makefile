SRCS += 11.c
APPNAME += DZ_11

all:
	gcc $(SRCS) -o $(APPNAME)

clean:
	rm -f *.o $(APPNAME) 