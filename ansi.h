#ifndef ANSI_H
#define ANSI_H

/*
    source:
    https://stackoverflow.com/questions/4842424/list-of-ansi-color-escape-sequences
*/

const char* ansi_blink()    { return "\x1b[5m"; }

const char* ansi_red()      { return "\x1b[31m"; }
const char* ansi_green()    { return "\x1b[32m"; }
const char* ansi_yellow()   { return "\x1b[33m"; }
const char* ansi_blue()     { return "\x1b[34m"; }
const char* ansi_magenta()  { return "\x1b[35m"; }
const char* ansi_cyan()     { return "\x1b[36m"; }

const char* ansi_reset()    { return "\x1b[0m"; }

#endif // ANSI_H