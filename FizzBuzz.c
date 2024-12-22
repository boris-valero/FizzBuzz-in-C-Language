#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
int chiffre = 0;
while (chiffre <= 100) {
	chiffre++;
if (chiffre % 15 == 0){
printf("FizzBuzz\n");
}
else if (chiffre % 5 == 0){
printf("Buzz\n");
}
else if (chiffre % 3 == 0){
printf("Fizz\n");
}
else {
	printf("%d\n", chiffre);
}
}
return 0;
}

