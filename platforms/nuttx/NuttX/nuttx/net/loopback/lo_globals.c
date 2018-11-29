/****************************************************************************
 * net/loopback/lo_globals.c
 *
 *   Copyright (C) 2015, 2017 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <nuttx/net/loopback.h>

#include "loopback/loopback.h"

#ifdef CONFIG_NET_LOOPBACK

/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifdef CONFIG_LIBC_NETDB
/* Local loopback hostname */

const char           g_lo_hostname[] = "localhost";
#endif

/* Local loopback addresses */

#ifdef CONFIG_NET_IPv4
const in_addr_t      g_lo_ipv4addr   = HTONL(0x7f000001);
const in_addr_t      g_lo_ipv4mask   = HTONL(0xff000000);
#endif

#ifdef CONFIG_NET_IPv6
const net_ipv6addr_t g_lo_ipv6addr   =
{
  HTONS(0), HTONS(0), HTONS(0), HTONS(0),
  HTONS(0), HTONS(0), HTONS(0), HTONS(1)
};
const net_ipv6addr_t g_lo_ipv6mask   =
{
  HTONS(0xffff), HTONS(0xffff), HTONS(0xffff), HTONS(0xffff),
  HTONS(0xffff), HTONS(0xffff), HTONS(0xffff), HTONS(0xffff)
};
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

#endif /* CONFIG_NET_LOOPBACK */
