/* $Id: port-linux.h,v 1.2 2008/03/26 20:27:21 dtucker Exp $ */

/*
 * Copyright (c) 2006 Damien Miller <djm@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _PORT_LINUX_H
#define _PORT_LINUX_H

#ifdef WITH_SELINUX
int ssh_selinux_enabled(void);
void ssh_selinux_setup_pty(char *, const char *);
void ssh_selinux_setup_exec_context(char *);
#endif

#ifdef OOM_ADJUST
int oom_adj_get(char *buf, size_t maxlen);
int oom_adj_set(const char *buf);
#endif

#endif /* ! _PORT_LINUX_H */