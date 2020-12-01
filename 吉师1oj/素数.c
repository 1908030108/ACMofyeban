#include <stdio.h>

int isPrime(int i){
    for(int j = 2; j < i-1; j++){
        if(i % j ==0) return 0;
    }
    return 1;
}

int main(void){
    int sum=0;
    for(int i = 100; i <= 200; i++){
        if(isPrime(i)){
            sum++;
        }
    }
    printf("%d\n",sum);
    for(int i = 100; i <= 200; i++){
        if(isPrime(i))
         printf("%d ",i);
    }
    printf("\n");
return 0;
}
//#include <stdio.h>

#include <stdio.h>

//int main(void){
//    int sum = 0;
//    int flag = 0;
//    for(int i = 100; i <= 200; i++){
//            flag = 0;
//        for(int j = 2; j < i; j++){
//            if(i %j == 0){
//                flag = 1;     //不是素数
//                break;
//            }
//        }
//        if(flag == 0){
//            sum++;
//        }
//    }
//    printf("%d\n",sum);
//    for(int i = 100; i <= 200; i++){
//            flag = 0;
//        for(int j = 2; j < i; j++){
//            if(i %j == 0){
//                flag = 1;     //不是素数
//                break;
//            }
//        }
//        if(flag == 0){
//           printf("%d ",i);
//        }
//    }
//return 0;
//}

//int main(){
//    printf("21\n\
//101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199\n");
//}
