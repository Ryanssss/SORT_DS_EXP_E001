#include <stdio.h>
#include <stdlib.h> 

/*
  ****                       ****
  
       Author:Ryan_songyf
       Date:2017/11/6
       Topic:sort by bubble
  
  ****                       ****
*/
int CreateData(int arr[],int n,int min,int max){
    int i=0;
    int j=0;
    int flag=0;
    int valid_len = 0;
    valid_len = max - min + 1;
    srand(time(NULL));
    if(valid_len < n){
        return 0;
      }
    for(i=0;i<n;i++){
      do{
           arr[i]=min+valid_len * rand()/(RAND_MAX+1); 
           flag=0;
           for(j=0;j<i;j++){
              if(arr[j] == arr[i])
              flag = 1;  
           }        
        }while(flag);
        
          }
           return 1; 
}
