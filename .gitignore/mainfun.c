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
    int aiStuScore[Arraylen];         //�������� 
    for(i=0;i<Arraylen;i++){          //�����ʼ�� 
       aiStuScore[i] = 0;
    }
    iReturnFlag = CreateData(aiStuScore,Arraylen,0,100);
    if( 1 == !iReturnFlag){
        printf("������������ɹ���\n");
        getch(); 
        return 1;
    } 
     printf("***����ǰ�ɼ�***\n");
    for(i=0;i<Arraylen;i++){
              
            printf("%3d\n",aiStuScore[i]);        
        
         }   
    printf("\n\n\n\n");   
    
    
    BubbleSorta(aiStuScore[0],Arraylen);
    
    
      
    printf("***�����ɼ�***\n");     
    for(i=0;i<Arraylen;i++){
              
            printf("%3d\n",aiStuScore[i]);        
        
         }  
    printf("\n\n\n\n");
    
    system("Pause");
    return 0;
}

    
    
    
    
    


