/*
 * Copyright 2013  Rinat Ibragimov
 *
 * This file is part of libvdpau-va-gl
 *
 * libvdpau-va-gl distributed under the terms of LGPLv3. See COPYING for details.
 */

#include <X11/Xlib.h>
#include <stdio.h>

__attribute__((constructor))
static
void
library_constructor(void)
{
    XInitThreads();
    printf("XInitThreads()\n");
}
