#include "stdio.h"
#include "stdlib.h"

int bmp_read(unsigned char *image, int, int, char *);
int bmp_write(unsigned char *image, int, int, char *);

int main()
{
    unsigned char *image;
    int xsize = 512;
    int ysize = 512;

    image = (unsigned char *)malloc((size_t)xsize * ysize * 3);
    if (image == NULL)
        return -1;

    for(int y = 0; y != ysize; ++y)
    {
        for(int x = 0; x != xsize; ++x)
        {
            // set (R,G,B) = (255,0,0)
            // R
            *(image + 3 * (y * xsize + x) + 2) = 255;
            // G
            *(image + 3 * (y * xsize + x) + 1) = 0;
            // B
            *(image + 3 * (y * xsize + x) + 0) = 0;
        }
    }

    bmp_write(image, xsize, ysize, "onlyRed");

    free(image);
}

int bmp_read(unsigned char *image, int xsize, int ysize, char *filename)
{
    char fname_bmp[128];
    sprintf(fname_bmp, "%s.bmp", filename);

    FILE *fp;
    if (!(fp = fopen(fname_bmp, "rb")))
        return -1;

    unsigned char header[54];
    fread(header, sizeof(unsigned char), 54, fp);
    fread(image, sizeof(unsigned char), (size_t)(long)xsize * ysize * 3, fp);

    fclose(fp);
    return 0;
}

int bmp_write(unsigned char *image, int xsize, int ysize, char *filename)
{
    unsigned char header[54] =
    {
        0x42, 0x4d, 0, 0, 0, 0, 0, 0, 0, 0,
        54, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 24, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0
    };

    long file_size = (long)xsize * (long)ysize * 3 + 54;
    header[2] = (unsigned char)(file_size &0x000000ff);
    header[3] = (file_size >> 8) & 0x000000ff;
    header[4] = (file_size >> 16) & 0x000000ff;
    header[5] = (file_size >> 24) & 0x000000ff;

    long width = xsize;
    header[18] = width & 0x000000ff;
    header[19] = (width >> 8) &0x000000ff;
    header[20] = (width >> 16) &0x000000ff;
    header[21] = (width >> 24) &0x000000ff;

    long height = ysize;
    header[22] = height &0x000000ff;
    header[23] = (height >> 8) &0x000000ff;
    header[24] = (height >> 16) &0x000000ff;
    header[25] = (height >> 24) &0x000000ff;

    char fname_bmp[128];
    sprintf(fname_bmp, "%s.bmp", filename);

    FILE *fp;
    if (!(fp = fopen(fname_bmp, "wb")))
        return -1;

    fwrite(header, sizeof(unsigned char), 54, fp);
    fwrite(image, sizeof(unsigned char), (size_t)(long)xsize * ysize * 3, fp);

    fclose(fp);
    return 0;
}
