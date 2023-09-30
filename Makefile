CFLAGS = -Wall
CPPFLAGS = -MMD
GFLAG = -lm
CPOP = -Lthirdparty -lctest

test: bin/opr

obj/src/main/main.o:  src/main/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $< 

obj/src/libtrpo/command.o:  obj/src/libtrpo/command.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $^

obj/src/libtrpo/menu.o:  obj/src/libtrpo/menu.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $^

obj/src/libtrpo/opr.o:  obj/src/libtrpo/opr.c
	gcc -c $(CFLAGS) $(CPPFLAGS) -I src -o $@ $^

bin/opr: obj/src/test/opr.o obj/src/main/main.o
	gcc $(CFLAGS) $(CPPFLAGS) -o $@ $^ $(CPOP) $(GFLAG)

clean:
	rm obj/*/*/*.[oad] bin/*

.PHONY: clean

-include obj/src/libtrpo/command.d obj/src/libtrpo/menu.d obj/src/libtrpo/opr.d
