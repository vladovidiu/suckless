/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[] = {
    "JetBrains Mono Medium:size=11:antialias=true:autohint=true",
    "Hack Nerd Font:pixelsize=11:antialias=true:autohint=true", // Powerline
    "Symbola:pixelsize=11:antialias=true:autohint=true"         // Unicode
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel] = { "#ebdbb2", "#98971a" },
	[SchemeSelHighlight] = { "#504945", "#98971a" },
	[SchemeNormHighlight] = { "#98971a", "#282828" },
	[SchemeOut] = { "#ebdbb2", "#8ec07c" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
