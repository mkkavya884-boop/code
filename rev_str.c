void reverseString(char s[], int length) {
    int left=0;
    int right=length-1;
    char temp;
    while(left<right){
        temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }

int main(){
    char s[]={'h','e','l','l','o'};
     int length = sizeof(s) / sizeof(s[0]);

    reverseString(s, length);


    for (int i = 0; i < length; i++) {
        printf("%c", s[i]);
    }

    return 0;
        
}
    
    
