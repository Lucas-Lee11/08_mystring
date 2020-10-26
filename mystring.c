int mystrlen(char *str){
    int i = 0;
    while(*str){
        i++;
        str++;
    }
    return i;
}

char *mystrncpy(char *dst, char *src, int n){
    int i = 0;
    char *t = dst;
    while(*src && i < n){
        *dst = *src;
        i++;
        dst++; src++;
    }
    *dst = 0;
    return t;
}

char *mystrcat(char *dst, char *src){
    char *t = dst;
    while(*dst) dst++;
    while(*src){
        *dst = *src;
        dst++; src++;
    }
    *dst = 0;
    return t;
}

int mystrcmp(char *str1, char *str2){
    while(*str1 == *str2){
        if(*str1 == 0) return 0;
        str1++; str2++;
    }
    return (*str1) - (*str2);
}

char * mystrchr(char *str, char c){
    char *t = 0;
    while(*str){
        if (*str == c) {
            t = str;
            break;
        }
        str++;
    }
    if(c == 0) t = str;
    return t;
}
