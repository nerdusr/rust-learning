#include <stdio.h>


void go_south_east(int* lat, int* lon)
{
        *lat -= 1;
        *lon += 1;
}

void plus_ten(int* list, int len)
{
        for (int i = 0; i < len; i++)
                *(list + i) += 10;
}

void print_list(int* list, int len)
{
        for (int i = 0; i < len; i++)
                printf("%d ", *(list + i));
}

void skip(char* msg)
{
        printf("%c", *(msg + 6));
}

int main()
{
        
        // int latitude = 65;
        // int longitude = -23;

        // go_south_east(&latitude, &longitude);
        
        // printf("player has been in this pos [%d, %d]", latitude, longitude);
        

        // char *msg_from_amy = "Don't call me";
        // skip(msg_from_amy);

        // int list[4] = {1, 2, 3, 4};

        // plus_ten(list, 4);
        // print_list(list, 4);

        return 0;
}