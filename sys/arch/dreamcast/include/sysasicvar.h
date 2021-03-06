/*	$NetBSD: sysasicvar.h,v 1.7 2008/04/28 20:23:16 martin Exp $	*/

/*-
 * Copyright (c) 2001 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by 
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _DREAMCAST_SYSASICVAR_H_
#define	_DREAMCAST_SYSASICVAR_H_

#define SYSASIC_EVENT_MAPLE_DMADONE	12
#define SYSASIC_EVENT_MAPLE_ERROR	13
#define SYSASIC_EVENT_GDROM		32
#define SYSASIC_EVENT_AICA		33
#define SYSASIC_EVENT_8BIT		34
#define SYSASIC_EVENT_EXT		35
#define SYSASIC_EVENT_MAX		65

#define SYSASIC_IRL9			9
#define SYSASIC_IRL11			11
#define SYSASIC_IRL13			13

const char *__pure sysasic_intr_string(int /*ipl*/) __attribute__((const));
void	*sysasic_intr_establish(int /*event*/, int /*ipl*/, int /*irl*/,
	    int (*ih_fun)(void *), void *);
void	sysasic_intr_disestablish(void *);
void	sysasic_intr_enable(void *, int /*on*/);

#endif /* !_DREAMCAST_SYSASICVAR_H_ */
