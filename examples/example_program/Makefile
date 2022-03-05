main: main.c
	gcc -o main main.c

main_asm: main.c
	gcc  -O0 -no-pie -fno-asynchronous-unwind-tables -fno-ident -finhibit-size-directive  -S -Wno-unused-result -masm=intel -m64 main.c

main_as: main_asm
	as --64 main.s -o main.o

main_ld: main_as
	ld  -dynamic-linker  /lib64/ld-linux-x86-64.so.2 -lc --entry main main.o -o main

clean:
	rm main main.s main.o