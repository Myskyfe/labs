
int main()
{
     int ch = 123;
     float result1 = ((ch - (ch%100))/100)/(float) ((ch%100)%10);
     int result2 = result1*100;
     float result3 = result2/100.0;
     return 0;
}


