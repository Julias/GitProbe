/***********************************************************************
 ** Fontlab Ltd.
 ** Yuri Yarmola
 ** Copyright (c) 2010 edited9981
 **********************************************************************/

#include <iostream>

int main (int argc, char * const argv[]){
	if (argc < 2)
    printf("{\"error_code\":\"NO_SOURCE_FILENAME\"}\n");
  else
  	printf("{\"error_code\":\"OK\", \"result_name\":\"%s\"}\n", argv[1]);
    
  return 0;
 }
