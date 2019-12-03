#include <cstdio>


using namespace std;
int main(){
    char str[3];
    int count = 0;
    char c[5];
    while(count < 5){
        scanf("%s", str);
        c[count] = str[0];
        count++;
    }
   
    int max = -1;
    for(int i=0; i<5; i++){
        int match = 0; 
        for(int j=0; j<5; j++){
            if(c[i] == c[j]){
                match++;
                if(max < match) max = match;
            }
        }
    }
    printf("%d",max);
}