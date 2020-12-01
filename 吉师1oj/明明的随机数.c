#include <stdio.h>

int main(void){
    int n;
    int a[105], i, j, temp;
     scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);
    for(i = 0; i < n-1;i++){
        for(j = n-2; j >=0; j--){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
/*第一种方法*/
//    int b;
//    int c = n;
//    for(i = 0;i < n-1;i++){
//       b = a[i];
//       for(j = i+1;j < n; j++){
//        if(b==a[j]&&b!=0){
//            a[j] = 0;
//            c--;
//        }
//       }
//    }
//    printf("%d\n",c);
//    for(i = 0;i < n; i++){
//        if(a[i] != 0)
//            printf("%d ",a[i]);
//    }
 /*第二种方法*/
//    int  m = n;
//    for(i = 0;i < n; i++){
//        if(a[i] == a[i+1])
//            m--;
//    }
//    printf("%d\n",m);
//    for(i = 0;i < n; i++){
//        if(a[i] == a[i+1])
//            continue;
//         printf("%d ",a[i]);
//    }

    printf("\n");
}
