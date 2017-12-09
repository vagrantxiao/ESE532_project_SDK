#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define CHUNK_MAXIMUM_LENGTH 8192

#define CHUNK_LENGTH 4096
//#define FILE_LENGTH 200273920
//#define FILE_LENGTH 5184000
#define FILE_LENGTH   3000
//#define FILE_LENGTH (10 * 960 * 540)
//#define FILE_LENGTH 406
//#define FILE_LENGTH 30000
//chunk defining
#define WINDOW_SIZE 17
#define PRIME_NUMBER 3


//SHA
#define CHUNK_LENGTH_SHA 512


//LZW
//#define REPO_MAXIMUM_LENGTH 8192



unsigned int Chunk_Defining(uint32_t * file_loc, unsigned char * input, unsigned char * Output);
void SHA_256(unsigned char Input[CHUNK_MAXIMUM_LENGTH], uint32_t Output[8], unsigned int Chunk_length);
int Chunk_Match(uint32_t * Input, uint32_t Hash_Table_Length);
uint32_t LZW(unsigned char * Input, unsigned char * Output, unsigned int chunk_len);

uint32_t Hard_tran(unsigned char * Data_temp);
