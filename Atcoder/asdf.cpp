#include<studio.h>
    main()
    {
        char s[] = "Mango\0Hi";

        printf("%d %d", strlen(s), sizeof(s));
    }