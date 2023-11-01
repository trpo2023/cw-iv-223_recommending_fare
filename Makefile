CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -MMD
GFLAG = -lm
CPOP = -Lthirdparty

bin/main: obj/src/main/main.o obj/src/libtrpo/lib.a
	gcc $(CFLAGS) $(CPPFLAGS)  $^  -o $@ 

obj/src/main/main.o:  src/main/main.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libtrpo/lib.a: obj/src/libtrpo/opr.o obj/src/libtrpo/menu.o obj/src/libtrpo/command.o obj/src/main/graphics.o
	ar rcs $@ $^

obj/src/main/graphics.o:  src/libtrpo/graphics.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libtrpo/command.o:  src/libtrpo/command.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libtrpo/menu.o:  src/libtrpo/menu.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $< 

obj/src/libtrpo/opr.o:  src/libtrpo/opr.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

test: bin/opr
	./bin/opr

obj/src/libtrpo/test.o:  test/test.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

obj/src/libtrpo/maintest.o:  test/maintest.c
	gcc -c $(CFLAGS) $(CPPFLAGS) $< -o $@ 

bin/opr: obj/src/libtrpo/test.o obj/src/libtrpo/maintest.o obj/src/libtrpo/lib.a
	gcc $(CFLAGS) $(CPPFLAGS)  $^ $(CPOP) $(GFLAG) -o $@


clean:
	rm obj/*/*/*.[oad] bin/*

.PHONY: clean

-include obj/src/libtrpo/command.d obj/src/libtrpo/menu.d obj/src/libtrpo/opr.d obj/src/main/graphics.d