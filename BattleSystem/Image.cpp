#include "Image.h"

char SlimeIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"  *****   "},
	{"  * * *   "},
	{"  *****   "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char SlimeBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"  * * *   "},
	{" *  *   * "},
	{"  *****   "},
	{"  * * *   "},
	{"  *****   "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char SlimeMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"* *****   "},
	{" * *  *   "},
	{"* *****   "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};


char PlayerIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{" ¡Ý  "},
	{" ¡ç|¡æ "},
	{" ¢×¢Ù  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char PlayerBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"   ¡Ý "},
	{"¢¸¤Ñ|¢Ì"},
	{"  ¢×¢Ù  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};
char PlayerMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
{
	{"          "},
	{"          "},
	{"          "},
	{"   ¡Ý  "},
	{" ¢×|¢Ö "},
	{" ¢×¤¡  "},
	{"          "},
	{"          "},
	{"          "},
	{"          "},
};