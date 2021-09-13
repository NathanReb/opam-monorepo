/* This file is part of Lwt, released under the MIT license. See LICENSE.md for
   details, or visit https://github.com/ocsigen/lwt/blob/master/LICENSE.md. */



#include "lwt_config.h"

#if defined(LWT_ON_WINDOWS)

#include "lwt_unix.h"

LWT_NOT_AVAILABLE1(unix_readable)
LWT_NOT_AVAILABLE1(unix_writable)
LWT_NOT_AVAILABLE6(unix_madvise)
LWT_NOT_AVAILABLE4(unix_mincore)
LWT_NOT_AVAILABLE1(unix_iov_max)
LWT_NOT_AVAILABLE3(unix_writev)
LWT_NOT_AVAILABLE3(unix_writev_job)
LWT_NOT_AVAILABLE3(unix_readv)
LWT_NOT_AVAILABLE3(unix_readv_job)
LWT_NOT_AVAILABLE5(unix_recv)
LWT_NOT_AVAILABLE5(unix_send)
LWT_NOT_AVAILABLE5(unix_bytes_recv)
LWT_NOT_AVAILABLE5(unix_bytes_send)
LWT_NOT_AVAILABLE5(unix_recvfrom)
LWT_NOT_AVAILABLE5(unix_bytes_recvfrom)
LWT_NOT_AVAILABLE6(unix_sendto)
LWT_NOT_AVAILABLE6(unix_sendto_byte)
LWT_NOT_AVAILABLE6(unix_bytes_sendto)
LWT_NOT_AVAILABLE6(unix_bytes_sendto_byte)
LWT_NOT_AVAILABLE3(unix_recv_msg)
LWT_NOT_AVAILABLE3(unix_send_msg)
LWT_NOT_AVAILABLE1(unix_get_credentials)
LWT_NOT_AVAILABLE2(unix_mcast_set_loop)
LWT_NOT_AVAILABLE2(unix_mcast_set_ttl)
LWT_NOT_AVAILABLE4(unix_mcast_modify_membership)
LWT_NOT_AVAILABLE4(unix_wait4)
LWT_NOT_AVAILABLE1(unix_get_cpu)
LWT_NOT_AVAILABLE1(unix_get_affinity)
LWT_NOT_AVAILABLE2(unix_set_affinity)
LWT_NOT_AVAILABLE1(unix_guess_blocking_job)
LWT_NOT_AVAILABLE2(unix_wait_mincore_job)
LWT_NOT_AVAILABLE1(unix_open_job)
LWT_NOT_AVAILABLE1(unix_stat_job)
LWT_NOT_AVAILABLE1(unix_stat_64_job)
LWT_NOT_AVAILABLE1(unix_lstat_job)
LWT_NOT_AVAILABLE1(unix_lstat_64_job)
LWT_NOT_AVAILABLE1(unix_fstat_job)
LWT_NOT_AVAILABLE1(unix_fstat_64_job)
LWT_NOT_AVAILABLE3(unix_utimes_job)
LWT_NOT_AVAILABLE1(unix_isatty_job)
LWT_NOT_AVAILABLE1(unix_opendir_job)
LWT_NOT_AVAILABLE1(unix_closedir_job)
LWT_NOT_AVAILABLE1(unix_valid_dir)
LWT_NOT_AVAILABLE1(unix_invalidate_dir)
LWT_NOT_AVAILABLE1(unix_rewinddir_job)
LWT_NOT_AVAILABLE1(unix_readdir_job)
LWT_NOT_AVAILABLE2(unix_readdir_n_job)
LWT_NOT_AVAILABLE1(unix_readlink_job)
LWT_NOT_AVAILABLE3(unix_lockf_job)
LWT_NOT_AVAILABLE1(unix_getlogin_job)
LWT_NOT_AVAILABLE1(unix_getpwnam_job)
LWT_NOT_AVAILABLE1(unix_getgrnam_job)
LWT_NOT_AVAILABLE1(unix_getpwuid_job)
LWT_NOT_AVAILABLE1(unix_getgrgid_job)
LWT_NOT_AVAILABLE1(unix_gethostname_job)
LWT_NOT_AVAILABLE1(unix_gethostbyname_job)
LWT_NOT_AVAILABLE1(unix_gethostbyaddr_job)
LWT_NOT_AVAILABLE1(unix_getprotobyname_job)
LWT_NOT_AVAILABLE1(unix_getprotobynumber_job)
LWT_NOT_AVAILABLE2(unix_getservbyname_job)
LWT_NOT_AVAILABLE2(unix_getservbyport_job)
LWT_NOT_AVAILABLE3(unix_getaddrinfo_job)
LWT_NOT_AVAILABLE2(unix_getnameinfo_job)
LWT_NOT_AVAILABLE2(unix_bind_job)
LWT_NOT_AVAILABLE1(unix_getcwd_job)
LWT_NOT_AVAILABLE1(unix_tcgetattr_job)
LWT_NOT_AVAILABLE3(unix_tcsetattr_job)
#endif
