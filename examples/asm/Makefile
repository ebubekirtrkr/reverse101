hello_world: hello_world.s
	gcc -Wl,-N --static -nostdlib  hello_world.s -o hello_world-elf

get_bytes:hello_world
	objcopy --dump-section .text=hello_world-raw hello_world-elf
	xxd -p hello_world-raw

clean:
	rm hello_world2-raw hello_world2-elf hello_world-raw hello_world-elf
