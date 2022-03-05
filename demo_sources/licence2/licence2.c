#include <string.h>
#include <stdio.h>

char * decode(char * buf){
	for (int i = 0; i < strlen(buf); i++)
	{
		if(i%2==0)
			buf[i]=buf[i]^13;
		else
			buf[i]=buf[i]^37;
	}
	return buf;
}

char encoded_key[100]={0x4c, 0x70, 0x4e, 0x66, 0x20, 0x14, 0x3e, 0x16, 0x3a, 0x8, 0x4e, 0x7c, 0x4f, 0x60, 0x5f, 0x8, 0x4e, 0x69, 0x58, 0x67};
int main(int argc, char *argv[]) {
	char *decoded =	decode(encoded_key);
    if(argc==2) {
		printf("Checking License: %s\n", argv[1]);
		if(strcmp(argv[1], decoded)==0) {
			printf("Access Granted!\n");
		} else {
			printf("WRONG!\n");
		}
	} else {
		printf("Usage: <key>\n");
	}
	return 0;
}
