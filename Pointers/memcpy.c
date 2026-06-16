//  Wiritng memcpy from scratch

/** What is memcpy ??
 * so till now we were copying char using memcpy but now we want to copy anything irrespective of the  data type could be int float array of char or int float anything
 * while In string we hunted for \0 as this is null character and tell we reached the end of the string but in memcpy we work with bytes here we copy byte by byte no matter
 * which data type we are copying ins tring we know we reach \0 we are at end what about array of int there is no such thing like that  
 * SO now we know that parameter can't be int char so we use `void *` which means a pointer to some memory - But there is catch as compiler do not know to whom it points 
 * so it also do not know how big element is that is why we can't dereference void * (*p) that is wrong or illegal ,can't increment  . It is like a sealed house or envelope
 * with valid adddress but can't go through what it has 
 * 
 * Trick for memcpy --
 *  We reinterpret that memory  as bytes by assigning void * into char *  . 
 * As char is one byte  let's us walk memory one byte at a time i.e read and write each byte 
 * So here we not change the meory we are just choosing to view  it as a sequence  of bytes  so we can move thorugh it 
 */
 // as memcpy expect three param , one in which we want to copy , second what to copy , third the size of the what we are copying 

 #include<stdio.h>

 void mem_cpy(void* param1,void* param2,int n){
     char *src = param2;
     char *dest = param1;
     for (int i = 0; i < n;i++){
         *dest = *src;  //copying one byte at a time 
         dest++;
         src++;
     }
 }
 int main() {
    int src[] = {10, 20, 30, 40};
    int dst[4];
    mem_cpy(dst, src, sizeof(src));
    for (int i = 0; i < 4; i++) printf("%d ", dst[i]);  // 10 20 30 40
    return 0;
}