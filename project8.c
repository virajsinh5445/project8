#include <stdio.h>

int main()
{
    
    int choice;
    
    printf("1. Length Finder\n");
    printf("2. Cubes Generator\n");
    printf("3. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
    
    while(choice != 3){
        
        switch(choice){
        
            case 1:
                int len = 0;
                char a[50],*p;
                
                printf("Enter String :- ");
                
                getchar();
                fgets(a,sizeof(a),stdin);
                
                p = a;
                
                while(*p != '\0'){
                    len++;
                    p++;
                }
                
                printf("Length of string :- %d",len - 1);
                break;
            
                
            case 2:
                int arr1[10][10],arr2[10][10],r,c,x;
    
                printf("Enter number of rows :- ");
                scanf("%d",&r);
                printf("Enter number of columns :- ");
                scanf("%d",&c);
                
                for(int i = 0 ; i < r ; i++){
                    for(int j = 0 ; j < c ; j++){
                        printf("Enter element at index a[%d][%d] :- ",i,j);
                        scanf("%d",&x);
                        arr1[i][j] = x;
                    }
                }
                
                for(int i = 0 ; i < r ; i++){
                    for(int j = 0 ; j < c ; j++){
                        arr2[i][j] = arr1[i][j] * arr1[i][j] * arr1[i][j];
                        printf("%d \t",arr2[i][j]);
                    }
                    printf("\n");
                }
                
                break;
            
        }
        
        printf("\n\n");
        printf("1. Length Finder\n");
        printf("2. Cubes Generator\n");
        printf("3. Exit\n");
        printf("Enter your choice :- ");
            
        scanf("%d",&choice);
    
    }

    return 0;
}