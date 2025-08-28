#include<stdio.h>

 main() {
    float kb,mb,gb,value;


    printf("Enter the bytes of value= \n" );
    scanf("%f",&value);
    
    kb=value*1024;
    mb=kb/1024;
    gb=mb/1024;

    

  
    printf("KB=%f\n",kb);
    printf("MB= %f\n",mb);
    printf("GB=%.5f\n",gb);
    return 0;
}

