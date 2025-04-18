#include "Image.h"
#include "Player.h"
extern char SlimeIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
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
extern char SlimeBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
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
extern char SlimeMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
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


extern char PlayerIdle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
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
extern char PlayerBattle[IMAGEHEIGHT][IMAGEWIDTH + 1] =
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
extern char PlayerMove[IMAGEHEIGHT][IMAGEWIDTH + 1] =
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