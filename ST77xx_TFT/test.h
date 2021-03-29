//------------------------------------------------------------------------------
// This is Open source software. You can place this code on your site, but don't
// forget a link to my YouTube-channel: https://www.youtube.com/channel/UChButpZaL5kUUl_zTyIDFkQ
// Это программное обеспечение распространяется свободно. Вы можете размещать
// его на вашем сайте, но не забудьте указать ссылку на мой YouTube-канал 
// "Электроника в объектике" https://www.youtube.com/channel/UChButpZaL5kUUl_zTyIDFkQ
// Автор: Надыршин Руслан / Nadyrshin Ruslan
//------------------------------------------------------------------------------
#ifndef TEST
#define TEST

typedef struct
{
   unsigned short int Type;
   unsigned int Size;
   unsigned short int Reserved1, Reserved2;
   unsigned int Offset;
} sHeader;
 
typedef struct
{
   unsigned int Size;
   int Width, Height;
   unsigned short int Planes;
   unsigned short int Bits;
   unsigned int Compression;
   unsigned int ImageSize;
   int xRe, yRes;
   unsigned int Colors;
   unsigned int ImpColors;
} sInfoHeader;
 
typedef struct
{
   unsigned char Blue,Green,Red;
}sPixels;


// Тест выводит текст  по указанным координатам и плавно гасит подсветку
void Test_TextFading(char *pStr, int16_t X, int16_t Y);
// Тест заливает дисплей разными цветами
void Test_Colors(void);
// Тест поочерёдно выводит на дисплей картинки с SD-флешки
void Test_displayImage(const char* fname);


#endif