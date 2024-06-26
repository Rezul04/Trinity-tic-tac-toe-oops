#include <iostream>
using namespace std;
int count=0;
int numofturns;
int z;
class trinity{
    int a[3][3];
    int b[3][3];
    int c[3][3];
   
    public:
        trinity(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    a[i][j]=0;
                    b[i][j]=0;
                    c[i][j]=0;
                }
            }
        }
        int conclusion1(){
           
            if(a[0][0]==1&&a[1][1]==1&&a[2][2]==1){
                return 1;
            }
            else if(a[0][0]==1&&a[1][0]==1&&a[2][0]==1 ){
                return 1;
            }
            else if(a[0][1]==1&&a[1][1]==1&&a[2][1]==1 ){
                return 1;
            }
            else if(a[0][2]==1&&a[1][2]==1&&a[2][2]==1 ){
                return 1;
            }
            else if(a[0][0]==1&&a[0][1]==1&&a[0][2]==1 ){
                return 1;
            }
             else if(a[1][0]==1&&a[1][1]==1&&a[1][2]==1 ){
                return 1;
            }
             else if(a[2][0]==1&&a[2][1]==1&&a[2][2]==1 ){
                return 1;
            }
            else if(a[2][0]==1&&a[1][1]==1&&a[0][2]==1 ){
                return 1;
            }
           
            else return 0;
        }
       
        int conclusion2(){
           
            if(b[0][0]==1&&b[1][1]==1&&b[2][2]==1){
                return 1;
            }
            else if(b[0][0]==1&&b[1][0]==1&&b[2][0]==1 ){
                return 1;
            }
            else if(b[0][1]==1&&b[1][1]==1&&b[2][1]==1 ){
                return 1;
            }
            else if(b[0][2]==1&&b[1][2]==1&&b[2][2]==1 ){
                return 1;
            }
            else if(b[0][0]==1&&b[0][1]==1&&b[0][2]==1 ){
                return 1;
            }
             else if(b[1][0]==1&&b[1][1]==1&&b[1][2]==1 ){
                return 1;
            }
             else if(b[2][0]==1&&b[2][1]==1&&b[2][2]==1 ){
                return 1;
            }
             else if(b[2][0]==1&&b[1][1]==1&&b[0][2]==1 ){
                return 1;
            }
           
            else return 0;
        }
       
        int conclusion3(){
           
            if(c[0][0]==1&&c[1][1]==1&&c[2][2]==1){
                return 1;
            }
            else if(c[0][0]==1&&c[1][0]==1&&c[2][0]==1 ){
                return 1;
            }
            else if(c[0][1]==1&&c[1][1]==1&&c[2][1]==1 ){
                return 1;
            }
            else if(c[0][2]==1&&c[1][2]==1&&c[2][2]==1 ){
                return 1;
            }
            else if(c[0][0]==1&&c[0][1]==1&&c[0][2]==1 ){
                return 1;
            }
             else if(c[1][0]==1&&c[1][1]==1&&c[1][2]==1 ){
                return 1;
            }
             else if(c[2][0]==1&&c[2][1]==1&&c[2][2]==1 ){
                return 1;
            }
             else if(c[2][0]==1&&c[1][1]==1&&c[0][2]==1 ){
                return 1;
            }
           
            else return 0;
        }
        void insertin1(int x, int y){
            numofturns++;
            a[x][y]++;
           for(int i=0;i<3;i++){
                  for(int j=0;j<3;j++){
                      cout<<a[i][j]<<" ";
                  }
                  cout<<endl;
            }
            cout<<endl;
                 for(int i=0;i<3;i++){
                  for(int k=0;k<3;k++){
                      cout<<b[i][k]<<" ";
                  }
                  cout<<endl;
                 }
            cout<<endl;
           
                 for(int i=0;i<3;i++){
                  for(int l=0;l<3;l++){
                      cout<<c[i][l]<<" ";
                  }
                  cout<<endl;
                 }  
                 cout<<endl;
             
            z=conclusion1();
            if(z==1){
               count++;
               if(count==3){
                   if(numofturns%2==0){
                       cout<<"Player 1 is Winner"<<endl;
                   }
                   else {
                       cout<<"Player 2 is Winner"<<endl;
                   }
               }
            }
        }
        void insertin2(int x, int y){
            numofturns++;
            b[x][y]++;
            for(int i=0;i<3;i++){
                  for(int j=0;j<3;j++){
                      cout<<a[i][j]<<" ";
                  }
                  cout<<endl;
            }
            cout<<endl;
                 for(int i=0;i<3;i++){
                  for(int k=0;k<3;k++){
                      cout<<b[i][k]<<" ";
                  }
                  cout<<endl;
                 }
            cout<<endl;
           
                 for(int i=0;i<3;i++){
                  for(int l=0;l<3;l++){
                      cout<<c[i][l]<<" ";
                  }
                  cout<<endl;
                 }  
                 cout<<endl;
             
            z=conclusion2();
            if(z==1){
              count++;
              if(count==3){
                    if(numofturns%2==0){
                       cout<<"Player 1 is Winner"<<endl;
                   }
                   else {
                       cout<<"Player 2 is Winner"<<endl;
                   }
               }
            }
        }
        void insertin3(int x, int y){
            numofturns++;
            c[x][y]++;
            for(int i=0;i<3;i++){
                  for(int j=0;j<3;j++){
                      cout<<a[i][j]<<" ";
                  }
                  cout<<endl;
            }
            cout<<endl;
                 for(int i=0;i<3;i++){
                  for(int k=0;k<3;k++){
                      cout<<b[i][k]<<" ";
                  }
                  cout<<endl;
                 }
            cout<<endl;
           
                 for(int i=0;i<3;i++){
                  for(int l=0;l<3;l++){
                      cout<<c[i][l]<<" ";
                  }
                  cout<<endl;
                 }  
                 cout<<endl;
             
            z=conclusion3();
            if(z==1){
               count++;
               if(count==3){
                    if(numofturns%2==0){
                       cout<<"Player 1 is Winner"<<endl;
                   }
                   else {
                       cout<<"Player 2 is Winner"<<endl;
                   }
               }
            }
        }
};
int main(){
trinity t;
int r,c,f;
for(int k=0;k<27;k++){
        if(count>=3&&z>=1) {
            break;
        }
        else{
            if(k%2==0){
                cout<<"player 1"<<endl;
            }
            else{
                cout<<"player 2"<<endl;
            }
            cout<<"enter table "<<endl;
            cin>>f;
            cout<<"enter row "<<endl;
            cin>>r;
            cout<<"enter column "<<endl;
            cin>>c;
            if(f==1){
                t.insertin1(r,c);
            }
            else if(f==2){
                t.insertin2(r,c);
            }
            else{
                t.insertin3(r,c);
            }
           
           
        }
    }

    return 0;
}