 #include<stdio.h>
  
  int main(){
  	
   int i,j,rows,col,pos;
   
   printf("Enter number of rows :\n");
   scanf("%d",&rows);
   
   printf("Enter number of columns :\n",pos);
   scanf("%d",&col);
   
   int a[rows][col],b[rows][col],c[rows][col];

   printf("Enter Matrix A\n");
   for(i=0;i<=rows-1;i++){
    	for(j=0;j<=col-1;j++){
     		scanf("%d",(*(a+i)+j));
    	}
   } 

   printf("Enter Matrix B\n");
   for(i=0;i<=rows-1;i++){
    	for(j=0;j<=col-1;j++){
     		scanf("%d",(*(b+i)+j));
    	}
   }

   for(i=0;i<=rows-1;i++){
    	for(j=0;j<=col-1;j++){
     		*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
    	}
   }
   
   printf("Addition of Matrix : \n");
   for(i=0;i<=rows-1;i++){
    	for(j=0;j<=col-1;j++){	
    	 printf("%d\t",*(*(c+i)+j));
    }
    printf("\n");
   }
  return 0;
  } 