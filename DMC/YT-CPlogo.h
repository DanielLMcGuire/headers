/*
Header: YouTube Compression Logo (C/C++)

Author: Daniel McGuire

Purpose: Logo void (in C) for various versions of YT-Compression.
*/
#include <cstdio> 
#include <stdio.h>

void logo() {
    const char *VERSION = "0.1.0.7.2430";
    const char *TITLE = "YouTube Compression Tool";
    char LOGO[256]; // Ensure this buffer is large enough to hold the combined string

    // Combine TITLE and VERSION into LOGO
    snprintf(LOGO, sizeof(LOGO), "%s %s", TITLE, VERSION);

    // Print the LOGO in blue text
    printf("\033[34m%s\033[0m\n", LOGO); // Blue text
}