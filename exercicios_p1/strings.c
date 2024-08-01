#include <stdio.h>
#include <stdlib.h>

int tamanhoString (const char *str){
    int i;
for (i=0; str[i]!='\0';i++);
return i;
}

int compararStrings (const char *str1, const char *str2){
for (int i=0; (str1[i] == str2[i]) || (str1[i] == '\0' && str2[i] != '\0') || (str1[i] != '\0' && str2[i] == '\0');i++) if (str1[i] == '\0' && str2[i] == '\0') return 1;
return 0; 
}

int main() {
    char string[100];
    scanf("%[^\n]s", string);
    printf("%s",string);
    char* ptr = "oioioi";
    printf("%d\n",tamanhoString(ptr));
    printf("%d", compararStrings(ptr,string));
}
