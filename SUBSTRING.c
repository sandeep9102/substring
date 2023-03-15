#include<string.h>
#include<stdio.h>

int main(){

    char str[100], substr[10];
    int len1, len2,i, flag = 1;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the substring: ");
    gets(substr);
    len1 = strlen(str);
    len2 = strlen(substr);
    for(i=0; i<len1; i++){
        if(str[i]==substr[0]){
            break;
        }
    }
    for(int j=i, l=0; j<(i+len2), l<len2; j++, l++){
        if(str[j]==substr[l]){
            continue;
        }
        else
            flag = 0;
            break;

    }

    if(flag == 0){
        printf("Substring not found in the string");
    }
    else{
        printf("Substring found in the string");
    }

    return 0;
}
