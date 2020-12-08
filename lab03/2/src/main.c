
int main(){
         int ch1 = 123; 
         int ch2;
         ch2 = (((ch1%100)%10)*100)+(ch1%100) - ((ch1%100)%10)+((ch1-(ch1%100))/100);
         return 0;
}
