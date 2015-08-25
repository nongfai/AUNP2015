#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
int ctf(int cel){
return cel+32; 
}
int main(int argc, char **argv){
int cel, fah;

cel =0; fah =ctf(cel);
assert( fah == 32);
cel= 100; fah=ctf(cel);
assert (fah ==0);
return 0;
}

