//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {" ",	"$SUCKLESSDIR/dwmblocks/bin/package-updates",	1800,	8},
        {" ",	"$SUCKLESSDIR/dwmblocks/bin/mail",	        180,	12},
        {"",	"$SUCKLESSDIR/dwmblocks/bin/rss",		0,	6},
        {"",	"$SUCKLESSDIR/dwmblocks/bin/date",	        60,	1},
        {"",	"$SUCKLESSDIR/dwmblocks/bin/clock",	        60,	1},
};

static const Block extrabarBlocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {" ",	        "$SUCKLESSDIR/dwmblocks/bin/network-up",	1,	0}, 
        {" ",	        "$SUCKLESSDIR/dwmblocks/bin/network-down",	1,	0}, 
        {"  mem:",	"$SUCKLESSDIR/dwmblocks/bin/memory",	        1,	14}, 
        {" cpu:",      "$SUCKLESSDIR/dwmblocks/bin/cpu",               1,      0},
};

static const Block extrabarBlocksRight[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {"",	"$SUCKLESSDIR/dwmblocks/bin/filesystem / root",	                60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
static char extrabarDelim[] = "; ";
static char extrabarRightDelim[] = " @ ";
