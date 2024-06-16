    int m=n;
    //  enter the new value 
    printf("Enter the  new values of n= ");
    scanf("%d",&n);
    p=(float *)realloc(p,n*sizeof(float));  // here we use realloc() to extend the memory block 
    printf("\nEnter the next values :: \n");
    for (int i = m; i < n; i++)
    {
        scanf("%f",p+i);
    }