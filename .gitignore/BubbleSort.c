/*
  ****                       ****
  
       Author:Ryan_songyf
       Date:2017/11/6
       Topic:sort by bubble
  
  ****                       ****
*/
void BubbleSort(int arr[],int n){
  int i;   
  int j;   
  int temp;
  for(i=0;i<n;i++){
     for(j=n-1;j>i;j--){
        if(arr[j-1]>arr[j]){       
               temp  = arr[j-1];
           arr[j-1] = arr[j];
             arr[j] = temp;
        }
        
     }
     printf("%2d:",i+1); 
     for(j=0;j<n;j++){
       printf("%4d ",arr[j]);
     } 
     printf("\n\n");     
  }     
}
