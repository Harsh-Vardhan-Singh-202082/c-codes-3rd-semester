#include <>

int main(){
  int rows, columns, Element, count=0;

 
  printf("Enter the number of Rows: \n");
  scanf("%d", &rows);
 printf("Enter the number of Columns: \n");
  scanf("%d", &columns);
  int array[rows][columns];

  
  printf("Enter %d elements: \n", (rows*columns));
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      scanf("%d", &array[i][j]);
    }
  }

  
  printf("Enter the element to get the position: \n");
  scanf("%d", &Element);

  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(array[i][j] == Element){
       
        printf("(%d, %d) \n", i, j);
        count++;
      }
    }
  }

 
  if(count==0)
    printf("No such Element exists \n");

  return 0;
}
