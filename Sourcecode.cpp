#include<iostream>
#include <fstream>
using namespace std;
int n;
long par1(int n, long long &step){
    step += 3;
    int  r=0;
    for (int i =1; i<n; i++){
        step +=4;
        for (int j =i+1; j<=n; j++){
            step +=4;
            for (int k =1; k<=j; k++){
                r++;
                step +=3;
            }
               
        }
    }
    return r;
}
long par2(int n, long long &step){
    int  r=0;
    step += 3;
    for (int i =1; i<=n; i++){
        step += 4;
        for (int j =1; j<=i; j++){
            step += 4;
            for (int k=j; k<=j+i; k++){
                r++;
                step += 3;
            }
        }
    }
    return r;
}
long par3(int n, long long &step){
    int  r=0;
    step += 3;
    for (int i =1; i<=n; i++){
        step += 4;
        for (int j =1; j<=i; j++){
            step += 4;
            for (int k =j; k<=j+i; k++){
                step += 4;
                for (int l=1; l<=i+j-k; l++){
                    step += 3;
                    r++;
                }
            }
        }
    }
    return r;
}
void Sl(){
	int n = 0;
	ofstream OP("OP1.csv");
	while(n < 1000){
		long long step = 0;
		par1(n, step);
		OP << step << endl;
		n++;	
	}
	OP.close();
}
int main(){
    Sl();
    return 0;
}