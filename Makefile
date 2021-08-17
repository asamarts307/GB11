SRCS += my_ls.c
LIBNAME += libmy_ls.so

all:
	gcc $(SRCS) -o $(LIBNAME) -shared -fPIC

install:
	cp $(LIBNAME) /usr/lib
	cp myls.h /usr/include


uninstall:
	rm -f /usr/lib/$(LIBNAME) /usr/include/my_ls.h

clean:
	rm -f $(LIBNAME) *.o 