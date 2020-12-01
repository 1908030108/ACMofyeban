#include <stdio.h>
#define n 10


//经典排序算法
int main(){
    int a[n];
    int i, j;
    for(i = 0;i<n; i++){
        scanf("%d",&a[i]);
    }
    //冒泡排序（每一列的元素两两进行比较，选出每一列的最大或最小值，知道所有排完）
//    for(i = 0; i < n-1; i++){          //控制轮数
//        for(j = 0; j < n-i; j++){   //控制比较次数
//            if(a[j] > a[j+1]){
//                int t = a[j];
//                a[j] = a[j+1];
//                a[j+1] = t;
//            }
//        }
//    }
    //选择排序（将第一个最大或最小的元素依次与后面的元素进行比较，指导所有的数排完）
//    for(i = 0;i < n-1; i++){
//        int min = i;
//        for(j = i+1; j < n; j++){
//            if(a[j] < a[min]){
//                int t = a[min];
//                a[min] = a[j];
//                a[j] = t;
//            }
//        }
//    }
    //插入排序（将第二个数设置为一个哨兵于当前数进行比较，若哨兵大于这个数则插入大这个数前面
    // 否则插入这个数后面, 从前往后为一个有序序列）
//    for(i = 1; i < n; i++){
//        for(j = i; j > 0; j--){
//            if(a[j] < a[j-1]){
//               int k = a[j];
//                a[j] = a[j-1];
//                a[j-1] = k;
//            }
//            else{
//                break;
//            }
//        }
//    }
//
    //插入排序的优化算法
//    for(i= 1; i < n; i++){
//        int temp = a[i];
//        for(j = i; j > 0; j--){
//            if(temp < a[j-1]) a[j] = a[j-1];
//            else break;
//        }
//        a[j] = temp;
//    }

    //快速排序()
    for(i = 0; i < 10; i++){

    }
        printf("%d ",a[i]);
return 0;
}

