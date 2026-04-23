#include <stdio.h>

int main() {
    char source[] = "Hello, World! This is a test string for my_strcpy function.\n";
    char destination[101];

	// TODO: 在这里添加你的代码
    // I AM NOT DONE
    for(int i=0;i<strlen(source);i++){
        destination[i]=source[i];
    }
    destination[strlen(source)]=0;
    printf("拷贝后的字符串: %s", destination);

    return 0;
}
