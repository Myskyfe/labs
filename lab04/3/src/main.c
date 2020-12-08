
int main(){
     int k = 2; 
     int m = 5;
     int n = 8;
     int x = 0;
              
              if (k > n){
              x = k;
              k = n;
              n = x; 
              }
             
              if (k > m){
              x = k;
              k = m;
              m = x;
              }
              
              if (m > n){
              x = m;
              m = n;
              n = x;
              }
              else if (k < m && k < n && m < n){
              // нічого не змінюється
              }

return 0;
}
