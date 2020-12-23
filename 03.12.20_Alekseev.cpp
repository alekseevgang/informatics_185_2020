#include <iostream>
#include <random>
using namespace std;
class Massive{
int **arr;
int row, col;
public:
void ShowArray(){
cout<<"ShowArray"<<endl;
srand(time(0));
arr = new int*[row]; 
for (int i = 0; i < row; i++)
{arr[i] = new int[col];}

for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    arr[i][j]=(rand() % 50) -20;
    cout<<arr[i][j]<<"  ";
  }
  cout<<endl;
}
}
void ChangeMassive(){
cout<<"ChangeMassive"<<endl;
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    if (arr[i][j]<0)
    {
      arr[i][j]=0;
      cout<<arr[i][j]<<"  ";
    }
    else{
      cout<<arr[i][j]<<"  ";
    }
  }
  cout<<endl;
  }
}
void setRow(int row){
this-> row=row;
}
void setCol(int col){
this->col=col;
}
};
int main() {
int col,row;
cout<<"row,col = ";
cin>>row>>col;
Massive mass;
mass.setRow(row);
mass.setCol(col);
mass.ShowArray();
cout<<endl<<endl;
mass.ChangeMassive();
cout<<endl<<endl;
Massive mass2;
cout<<"row,col = ";
cin>>row>>col;
mass2.setRow(row);
mass2.setCol(col);
mass2.ShowArray();
cout<<endl<<endl;
mass2.ChangeMassive();
}