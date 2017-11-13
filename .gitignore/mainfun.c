#include <stdio.h>
#include <stdlib.h> 

#define Arraylen 10
/*
  ****                       ****
  
       Author:Ryan_songyf
       Date:2017/11/6
       Topic:sort by bubble
  
  ****                       ****
*/
int CreateData(int arr[],int n,int min,int max);
void BubbleSort(int arr[],int n);
int main()
{
    system("color 30");//set background c
    
    int i;
    int iReturnFlag = 0;
    int aiStuScore[Arraylen];         //定义数组 
    for(i=0;i<Arraylen;i++){          //数组初始化 
       aiStuScore[i] = 0;
    }
    iReturnFlag = CreateData(aiStuScore,Arraylen,0,100);
    if( 1 == !iReturnFlag){
        printf("生成随机数不成功！\n");
        getch(); 
        return 1;
    } 
     printf("***排序前成绩***\n");
    for(i=0;i<Arraylen;i++){
              
            printf("%3d\n",aiStuScore[i]);        
        
         }   
    printf("\n\n\n\n");   
    
    
    BubbleSorta(aiStuScore[0],Arraylen);
    
    
      
    printf("***排序后成绩***\n");     
    for(i=0;i<Arraylen;i++){
              
            printf("%3d\n",aiStuScore[i]);        
        
         }  
    printf("\n\n\n\n");
    
    system("Pause");
    return 0;
}

    
    
    
    
    


