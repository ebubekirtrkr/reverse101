#include <string.h>
#include <stdio.h>
int check_key(char *key);
int main(int argc, char *argv[])
{

	if (argc == 2)
	{
		printf("Checking License: %s\n", argv[1]);
		if (check_key(argv[1]) == 1)
		{
			printf("Access Granted!\n");
		}
		else
		{
			printf("WRONG!\n");
		}
	}
	else
	{
		printf("Usage: <key>\n");
	}
	return 0;
}
int check_key(char *key){
	if(strlen(key)!=23)
		return 0;
	if (key[5] * key[1]  +  key[8] -  key[19] != 5695)
		return 0;
	if (key[16] + key[4]  *  key[1] *  key[10] != 172201)
		return 0;
	if (key[2] * key[5]  *  key[22] +  key[4] != 309786)
		return 0;
	if (key[17] - key[6]  *  key[20] *  key[1] != -589997)
		return 0;
	if (key[8] + key[18]  +  key[13] *  key[19] != 6001)
		return 0;
	if (key[0] + key[13]  *  key[17] *  key[4] != 279290)
		return 0;
	if (key[15] + key[3]  -  key[1] +  key[2] != 94)
		return 0;
	if (key[14] - key[3]  +  key[10] -  key[19] != -25)
		return 0;
	if (key[18] * key[21]  *  key[5] *  key[14] != 19850358)
		return 0;
	if (key[17] * key[10]  -  key[22] *  key[7] != -1269)
		return 0;
	if (key[19] + key[0]  -  key[8] +  key[10] != 110)
		return 0;
	if (key[21] - key[4]  *  key[14] -  key[22] != -2972)
		return 0;
	if (key[2] - key[4]  +  key[22] -  key[3] != 24)
		return 0;
	if (key[3] + key[12]  *  key[21] *  key[1] != 432887)
		return 0;
	if (key[13] - key[16]  *  key[10] +  key[18] != -3268)
		return 0;
	if (key[2] - key[14]  +  key[18] -  key[16] != -8)
		return 0;
	if (key[11] - key[19]  +  key[16] +  key[15] != 119)
		return 0;
	if (key[9] + key[4]  *  key[7] -  key[21] != 2985)
		return 0;
	if (key[17] + key[5]  -  key[19] *  key[0] != -4345)
		return 0;
	if (key[10] + key[22]  -  key[12] -  key[4] != -7)
		return 0;
	if (key[22] - key[21]  *  key[15] +  key[8] != -2877)
		return 0;
	if (key[12] + key[22]  *  key[8] *  key[19] != 328585)
		return 0;
	if (key[15] * key[3]  -  key[17] -  key[16] != 2866)
		return 0;
	if (key[16] - key[6]  *  key[14] -  key[10] != -5843)
		return 0;
	if (key[18] - key[2]  *  key[22] *  key[0] != -300428)
		return 0;
	if (key[15] * key[22]  +  key[4] *  key[2] != 6120)
		return 0;
	if (key[18] * key[22]  *  key[1] *  key[4] != 17682975)
		return 0;
	if (key[8] - key[6]  *  key[15] +  key[1] != -3851)
		return 0;
	if (key[15] * key[2]  +  key[21] *  key[8] != 7638)
		return 0;
	if (key[19] - key[7]  *  key[10] -  key[5] != -2968)
		return 0;
	return 1;
}
// [4, 7, 7, 5, 9, 5, 3, 3, 7, 1, 8, 1, 3, 3, 5, 7, 6, 5, 6, 8, 1, 6, 10]
