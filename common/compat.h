/*
 * Copyright (c) 2004, Stefan Walter
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *     * Redistributions of source code must retain the above
 *       copyright notice, this list of conditions and the
 *       following disclaimer.
 *     * Redistributions in binary form must reproduce the
 *       above copyright notice, this list of conditions and
 *       the following disclaimer in the documentation and/or
 *       other materials provided with the distribution.
 *     * The names of contributors to this software may not be
 *       used to endorse or promote products derived from this
 *       software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 *
 * CONTRIBUTORS
 *  Stef Walter <stef@memberwebs.com>
 *
 */

#ifndef __COMPAT_H__
#define __COMPAT_H__

#include "config.h"

#ifndef HAVE_STRLCPY
size_t strlcpy(char *dst, const char *src, size_t len);
#endif

#ifndef HAVE_STRLCAT
size_t strlcat(char* dst, const char* src, size_t siz);
#endif

#ifndef HAVE_STRCLN
void strcln(char* data, char ch);
#endif

#ifndef HAVE_STRBTRIM
char* strbtrim(const char* data);
#endif

#ifndef HAVE_STRETRIM
void stretrim(char* data);
#endif

#ifndef HAVE_STRTRIM
char* strtrim(char* data);
#endif

#ifndef HAVE_STRTOB
int strtob(const char* str);
#endif

#ifndef HAVE_ATEXITV
void atexitv(void (*func)(void*), void* data);
#endif

#ifndef HAVE_XREALLOC
void* xrealloc(void *p, size_t size);
#endif

#ifndef HAVE_XCALLOC
void* xcalloc(size_t size);
#endif

#ifndef HAVE_STRLWR
void strlwr(char* data);
#endif

#ifndef HAVE_STRUPR
void strupr(char* data);
#endif

/*
 * strcasestr is a GNU specific extension to the C standard, gcc -Wall will
 * misleadingly warn "implicit declaration of function" unless we provide a
 * function prototype ourselves.
 * http://cboard.cprogramming.com/c-programming/116834-question-linux-gcc-c-standards.html
 */
char * strcasestr(const char *s, const char *find);

#ifndef HAVE_STRNCASECMP
int strncasecmp(const char *s1, const char *s2, size_t n);
#endif

#ifndef HAVE_DAEMON
int daemon(int nochdir, int noclose);
#endif

#endif /* __COMPAT_H__ */
