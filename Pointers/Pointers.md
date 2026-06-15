# Pointers

- Pointer is a Variable that holds address
## example 
```
 You can have a house with certain qualities, yard,
 metal roof, solar, etc. Or you could have the address of that house. The address isn’t the same as the
  house itself. One’s a full-blown house, and the other is just a few lines of text. But the address of the
  house is a pointer to that house. It’s not the house itself, but it tells you where to find it.
```
- Same way we can have an variable holding some data  and that data is in memory at some address and we can have a pointer variable that holds the address of that  variable 

- address of operator i.e ampersand ( & ) used to get address of variable 
- `%p` is format specifier used to print pointer 


## Referencing and Dereferencing Of pointers

- A pointer to a variable is  simply reference to a variable `int *p=&t`
- Dereferencing is like go to that address and get the value `int y=*p`


## Why Pointers ??
* Now one can say if I can use `i` then why `int *p=&i` 
---
- Real power of pointer comes in play when we start passing into the functions.
- So what big deal we can directly pass variable to function as parameter
- We can pass them directly but they will be duplicated into parameter so any changes made in funciton to parameter will never happen to real variable outside the function
- If we pass pointer as argument we can manipulate multiple variable at same time no more problem of copies

 ``` 
 - Here keep in mind  when we pass pointer to function then pointer too get copied into parameters of function 
- but the clever part is that pointer is address to memory location of the variable , So when dereferenced we get back to the original variable instead of copy
  ```

## Null pointer ?
- Any pointer variable can be set to a value `NULL`
- Which means the pointer points to nothing . `int *p=NULL`

### Note on declaring a pointer 
```
int a,*p ; // here it works like simple varible declaration that says p is pointer var like (int *p) same for vice versa int *p,a;

Now some confuse that below line where * this is close to int 
  int* p,a;
-  will make both variable pointer well that is absurd it is same as earlier
```
