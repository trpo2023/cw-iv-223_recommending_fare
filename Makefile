bin/main: obj/src/main/main.o obj/src/libtrpo/libtrpo.a
	gcc -Wall -o $@ $^ -lm


obj/src/main/main.o: src/main/main.c
	gcc -c -Wall -MMD -I src -o $@ $<

obj/src/libtrpo/libtrpo.a: obj/src/libtrpo/command.o
	ar rcs $@ $^

obj/src/libtrpo/command.o: src/libtrpo/command.c
	gcc -c -Wall -MMD -I src -o $@ $<

clean:
	rm obj/*/*/*.[oad] bin/*

.PHONY: clean

-include obj/src/libtrpo/command.d obj/src/main/main.d
