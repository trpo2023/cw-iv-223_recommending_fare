CFLAGS = -Wall
CPPFLAGS = -MMD
GFLAG = -lm
CPOP = -Lthirdparty -lctest
obj/src/main/main.o:  src/main/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/command.o:  src/libtrpo/command.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/menu.o:  src/libtrpo/menu.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/opr.o:  src/libtrpo/opr.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

bin/opr: obj/src/libtrpo/opr.o obj/src/main/main.o
	gcc $(CFLAGS) $(CPPFLAGS)  $^ $(CPOP) $(GFLAG) -o $@

test: bin/opr

clean:
	rm obj/*/*/*.[oad] bin/*

.PHONY: clean

-include obj/src/libtrpo/command.d obj/src/libtrpo/menu.d obj/src/libtrpo/opr.d
