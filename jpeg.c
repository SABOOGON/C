#include <stdio.h>

int main(int argc, char *argv[])
{
    // 사용자가 인자를 두 개 주었는지 argc로 확인
    if (argc != 2)
    {
        return 1;
    }

    // 파일을 염
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        return 1;
    }

    // 파일에서 3바이트를 읽음
    unsigned char bytes[3];
    fread(bytes, 3, 1, file);

    // 바이트가 0xff 0xd8 0xff 로 시작하는지 확인
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Maybe\n");
    }
    else
    {
        printf("No\n");
    }
}
