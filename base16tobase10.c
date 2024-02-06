#include <stdio.h>

int main()
{
    int num = 0;
    int multiples[4] = {4096, 256, 16, 1};
    char str[4];
    printf("Enter base 16 (0000-ffff, lowercase only): ");
    scanf("%s", &str);
    for(int i = 0; i < sizeof(str); i++){
        if(str[i]<58){
            num += (str[i]-48)*multiples[i];
        }
        else if(96<str[i]<103){
            num += (str[i]-87)*multiples[i];
        }
    }
    printf("\n%s = %d\n",str,num);
}
