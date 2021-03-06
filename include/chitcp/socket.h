/*
 *  chiTCP - A simple, testable TCP stack
 *
 *  chisocket functions
 *
 *  chiTCP equivalents of many of the POSIX socket
 *  functions (listen, bind, send, recv, etc.).
 *
 *  See the manpages for the standard UNIX functions for
 *  a complete description of what these functions do.
 *  The documentation in this header file focuses on discussing
 *  the limits of the chisocket version of the functions.
 *
 *  TODO: Wait until these functions are fully implemented before
 *        writing this.
 *
 */

/*
 *  Copyright (c) 2013-2014, The University of Chicago
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  - Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  - Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  - Neither the name of The University of Chicago nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __CHITCP_SOCKET_H__
#define __CHITCP_SOCKET_H__

#include <stddef.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <errno.h>

extern int chisocket_socket(int domain, int type, int protocol);
extern int chisocket_bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int chisocket_listen(int sockfd, int backlog);
extern int chisocket_connect(int sockfd, const struct sockaddr* addr, socklen_t addrlen);
extern int chisocket_accept(int sockfd, struct sockaddr* addr, socklen_t *addrlen);
extern int chisocket_close(int sockfd);
extern ssize_t chisocket_recv(int sockfd, void *buffer, size_t length, int flags);
extern ssize_t chisocket_send(int sockfd, const void *buffer, size_t length, int flags);

#endif  /* __CHITCP_SOCKET_H__ */

