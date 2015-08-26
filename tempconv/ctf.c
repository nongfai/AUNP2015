#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
double ctf(double cel){
return cel*1.8+32; 
}
int main(int argc, char **argv){
double cel, fah;

cel =0; fah =ctf(cel);
assert( fah == 32);
cel= 100; fah=ctf(cel);
assert (fah ==0);
cel= -40; fah=ctf(cel);
assert (fah ==-40);
return 0;
}

