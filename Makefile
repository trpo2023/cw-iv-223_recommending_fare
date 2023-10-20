CFLAGS = -Wall
CPPFLAGS = -MMD
GFLAG = -lm
CPOP = -Lthirdparty

obj/src/main/graphics.o:  src/libtrpo/graphics.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/main/main.o:  src/main/main.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/command.o:  src/libtrpo/command.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/menu.o:  src/libtrpo/menu.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/opr.o:  src/libtrpo/opr.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/test.o:  test/test.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

test: bin/opr

obj/src/libtrpo/maintest.o:  test/maintest.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

bin/opr: obj/src/libtrpo/test.o obj/src/libtrpo/maintest.o
	gcc $(CFLAGS) $(CPPFLAGS)  $^ $(CPOP) $(GFLAG) -o $@


clean:
	rm obj/*/*/*.[oad] bin/*

.PHONY: clean

-include obj/src/libtrpo/command.d obj/src/libtrpo/menu.d obj/src/libtrpo/opr.d
