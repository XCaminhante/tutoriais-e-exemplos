;===================================================================;
; Linux x86 2.6+ symbols.inc for FASM
;
; The LSCR Project.
;===================================================================;


sys_restart_syscall     equ  0
sys_exit                equ  1
sys_fork                equ  2
sys_read                equ  3
sys_write               equ  4
sys_open                equ  5
sys_close               equ  6
sys_waitpid             equ  7
sys_creat               equ  8
sys_link                equ  9
sys_unlink              equ 10
sys_execve              equ 11
sys_chdir               equ 12
sys_time                equ 13
sys_mknod               equ 14
sys_chmod               equ 15
sys_lchown              equ 16
sys_break               equ 17
sys_oldstat             equ 18
sys_lseek               equ 19
sys_getpid              equ 20
sys_mount               equ 21
sys_umount              equ 22
sys_setuid              equ 23
sys_getuid              equ 24
sys_stime               equ 25
sys_ptrace              equ 26
sys_alarm               equ 27
sys_oldfstat            equ 28
sys_pause               equ 29
sys_utime               equ 30
sys_stty                equ 31
sys_gtty                equ 32
sys_access              equ 33
sys_nice                equ 34
sys_ftime               equ 35
sys_sync                equ 36
sys_kill                equ 37
sys_rename              equ 38
sys_mkdir               equ 39
sys_rmdir               equ 40
sys_dup                 equ 41
sys_pipe                equ 42
sys_times               equ 43
sys_prof                equ 44
sys_brk                 equ 45
sys_setgid              equ 46
sys_getgid              equ 47
sys_signal              equ 48
sys_geteuid             equ 49
sys_getegid             equ 50
sys_acct                equ 51
sys_umount2             equ 52
sys_lock                equ 53
sys_ioctl               equ 54
sys_fcntl               equ 55
sys_mpx                 equ 56
sys_setpgid             equ 57
sys_ulimit              equ 58
sys_oldolduname         equ 59
sys_umask               equ 60
sys_chroot              equ 61
sys_ustat               equ 62
sys_dup2                equ 63
sys_getppid             equ 64
sys_getpgrp             equ 65
sys_setsid              equ 66
sys_sigaction           equ 67
sys_sgetmask            equ 68
sys_ssetmask            equ 69
sys_setreuid            equ 70
sys_setregid            equ 71
sys_sigsuspend          equ 72
sys_sigpending          equ 73
sys_sethostname         equ 74
sys_setrlimit           equ 75
sys_getrlimit           equ 76
sys_getrusage           equ 77
sys_gettimeofday        equ 78
sys_settimeofday        equ 79
sys_getgroups           equ 80
sys_setgroups           equ 81
sys_select              equ 82
sys_symlink             equ 83
sys_oldlstat            equ 84
sys_readlink            equ 85
sys_uselib              equ 86
sys_swapon              equ 87
sys_reboot              equ 88
sys_readdir             equ 89
sys_mmap                equ 90
sys_munmap              equ 91
sys_truncate            equ 92
sys_ftruncate           equ 93
sys_fchmod              equ 94
sys_fchown              equ 95
sys_getpriority         equ 96
sys_setpriority         equ 97
sys_profil              equ 98
sys_statfs              equ 99
sys_fstatfs             equ 100
sys_ioperm              equ 101
sys_socketcall          equ 102
sys_syslog              equ 103
sys_setitimer           equ 104
sys_getitimer           equ 105
sys_stat                equ 106
sys_lstat               equ 107
sys_fstat               equ 108
sys_olduname            equ 109
sys_iopl                equ 110
sys_vhangup             equ 111
sys_idle                equ 112
sys_vm86old             equ 113
sys_wait4               equ 114
sys_swapoff             equ 115
sys_sysinfo             equ 116
sys_ipc                 equ 117
sys_fsync               equ 118
sys_sigreturn           equ 119
sys_clone               equ 120
sys_setdomainname       equ 121
sys_uname               equ 122
sys_modify_ldt          equ 123
sys_adjtimex            equ 124
sys_mprotect            equ 125
sys_sigprocmask         equ 126
sys_create_module       equ 127
sys_init_module         equ 128
sys_delete_module       equ 129
sys_get_kernel_syms     equ 130
sys_quotactl            equ 131
sys_getpgid             equ 132
sys_fchdir              equ 133
sys_bdflush             equ 134
sys_sysfs               equ 135
sys_personality         equ 136
sys_afs_syscall         equ 137
sys_setfsuid            equ 138
sys_setfsgid            equ 139
sys__llseek             equ 140
sys_getdents            equ 141
sys__newselect          equ 142
sys_flock               equ 143
sys_msync               equ 144
sys_readv               equ 145
sys_writev              equ 146
sys_getsid              equ 147
sys_fdatasync           equ 148
sys_sysctl              equ 149
sys_mlock               equ 150
sys_munlock             equ 151
sys_mlockall            equ 152
sys_munlockall          equ 153
sys_sched_setparam              equ 154
sys_sched_getparam              equ 155
sys_sched_setscheduler          equ 156
sys_sched_getscheduler          equ 157
sys_sched_yield                 equ 158
sys_sched_get_priority_max      equ 159
sys_sched_get_priority_min      equ 160
sys_sched_rr_get_interval       equ 161
sys_nanosleep           equ 162
sys_mremap              equ 163
sys_setresuid           equ 164
sys_getresuid           equ 165
sys_vm86                equ 166
sys_query_module        equ 167
sys_poll                equ 168
sys_nfsservctl          equ 169
sys_setresgid           equ 170
sys_getresgid           equ 171
sys_prctl               equ 172
sys_rt_sigreturn        equ 173
sys_rt_sigaction        equ 174
sys_rt_sigprocmask      equ 175
sys_rt_sigpending       equ 176
sys_rt_sigtimedwait     equ 177
sys_rt_sigqueueinfo     equ 178
sys_rt_sigsuspend       equ 179
sys_pread64             equ 180
sys_pwrite64            equ 181
sys_chown               equ 182
sys_getcwd              equ 183
sys_capget              equ 184
sys_capset              equ 185
sys_sigaltstack         equ 186
sys_sendfile            equ 187
sys_getpmsg             equ 188
sys_putpmsg             equ 189
sys_vfork               equ 190
sys_ugetrlimit          equ 191
sys_mmap2               equ 192
sys_truncate64          equ 193
sys_ftruncate64         equ 194
sys_stat64              equ 195
sys_lstat64             equ 196
sys_fstat64             equ 197
sys_lchown32            equ 198
sys_getuid32            equ 199
sys_getgid32            equ 200
sys_geteuid32           equ 201
sys_getegid32           equ 202
sys_setreuid32          equ 203
sys_setregid32          equ 204
sys_getgroups32         equ 205
sys_setgroups32         equ 206
sys_fchown32            equ 207
sys_setresuid32         equ 208
sys_getresuid32         equ 209
sys_setresgid32         equ 210
sys_getresgid32         equ 211
sys_chown32             equ 212
sys_setuid32            equ 213
sys_setgid32            equ 214
sys_setfsuid32          equ 215
sys_setfsgid32          equ 216
sys_pivot_root          equ 217
sys_mincore             equ 218
sys_madvise             equ 219
sys_madvise1            equ 219
sys_getdents64          equ 220
sys_fcntl64             equ 221
sys_gettid              equ 224
sys_readahead           equ 225
sys_setxattr            equ 226
sys_lsetxattr           equ 227
sys_fsetxattr           equ 228
sys_getxattr            equ 229
sys_lgetxattr           equ 230
sys_fgetxattr           equ 231
sys_listxattr           equ 232
sys_llistxattr          equ 233
sys_flistxattr          equ 234
sys_removexattr         equ 235
sys_lremovexattr        equ 236
sys_fremovexattr        equ 237
sys_tkill               equ 238
sys_sendfile64          equ 239
sys_futex               equ 240
sys_sched_setaffinity   equ 241
sys_sched_getaffinity   equ 242
sys_set_thread_area     equ 243
sys_get_thread_area     equ 244
sys_io_setup            equ 245
sys_io_destroy          equ 246
sys_io_getevents        equ 247
sys_io_submit           equ 248
sys_io_cancel           equ 249
sys_fadvise64           equ 250
sys_exit_group          equ 252
sys_lookup_dcookie      equ 253
sys_epoll_create        equ 254
sys_epoll_ctl           equ 255
sys_epoll_wait          equ 256
sys_remap_file_pages    equ 257
sys_set_tid_address     equ 258
sys_timer_create        equ 259
sys_timer_settime       equ (sys_timer_create+1)
sys_timer_gettime       equ (sys_timer_create+2)
sys_timer_getoverrun    equ (sys_timer_create+3)
sys_timer_delete        equ (sys_timer_create+4)
sys_clock_settime       equ (sys_timer_create+5)
sys_clock_gettime       equ (sys_timer_create+6)
sys_clock_getres        equ (sys_timer_create+7)
sys_clock_nanosleep     equ (sys_timer_create+8)
sys_statfs64            equ 268
sys_fstatfs64           equ 269
sys_tgkill              equ 270
sys_utimes              equ 271
sys_fadvise64_64        equ 272
sys_vserver             equ 273
sys_mbind               equ 274
sys_get_mempolicy       equ 275
sys_set_mempolicy       equ 276
sys_mq_open             equ 277
sys_mq_unlink           equ (sys_mq_open+1)
sys_mq_timedsend        equ (sys_mq_open+2)
sys_mq_timedreceive     equ (sys_mq_open+3)
sys_mq_notify           equ (sys_mq_open+4)
sys_mq_getsetattr       equ (sys_mq_open+5)
sys_kexec_load          equ 283
sys_waitid              equ 284
sys_sys_setaltroot      equ 285
sys_add_key             equ 286
sys_request_key         equ 287
sys_keyctl              equ 288
sys_ioprio_set          equ 289
sys_ioprio_get          equ 290
sys_inotify_init        equ 291
sys_inotify_add_watch   equ 292
sys_inotify_rm_watch    equ 293
sys_migrate_pages       equ 294
sys_openat              equ 295
sys_mkdirat             equ 296
sys_mknodat             equ 297
sys_fchownat            equ 298
sys_futimesat           equ 299
sys_fstatat64           equ 300
sys_unlinkat            equ 301
sys_renameat            equ 302
sys_linkat              equ 303
sys_symlinkat           equ 304
sys_readlinkat          equ 305
sys_fchmodat            equ 306
sys_faccessat           equ 307
sys_pselect6            equ 308
sys_ppoll               equ 309
sys_unshare             equ 310
sys_set_robust_list     equ 311
sys_get_robust_list     equ 312
sys_splice              equ 313
sys_sync_file_range     equ 314
sys_tee                 equ 315
sys_vmsplice            equ 316

SYS_RESTART_SYSCALL     equ  0
SYS_EXIT                equ  1
SYS_FORK                equ  2
SYS_READ                equ  3
SYS_WRITE               equ  4
SYS_OPEN                equ  5
SYS_CLOSE               equ  6
SYS_WAITPID             equ  7
SYS_CREAT               equ  8
SYS_LINK                equ  9
SYS_UNLINK              equ 10
SYS_EXECVE              equ 11
SYS_CHDIR               equ 12
SYS_TIME                equ 13
SYS_MKNOD               equ 14
SYS_CHMOD               equ 15
SYS_LCHOWN              equ 16
SYS_BREAK               equ 17
SYS_OLDSTAT             equ 18
SYS_LSEEK               equ 19
SYS_GETPID              equ 20
SYS_MOUNT               equ 21
SYS_UMOUNT              equ 22
SYS_SETUID              equ 23
SYS_GETUID              equ 24
SYS_STIME               equ 25
SYS_PTRACE              equ 26
SYS_ALARM               equ 27
SYS_OLDFSTAT            equ 28
SYS_PAUSE               equ 29
SYS_UTIME               equ 30
SYS_STTY                equ 31
SYS_GTTY                equ 32
SYS_ACCESS              equ 33
SYS_NICE                equ 34
SYS_FTIME               equ 35
SYS_SYNC                equ 36
SYS_KILL                equ 37
SYS_RENAME              equ 38
SYS_MKDIR               equ 39
SYS_RMDIR               equ 40
SYS_DUP                 equ 41
SYS_PIPE                equ 42
SYS_TIMES               equ 43
SYS_PROF                equ 44
SYS_BRK                 equ 45
SYS_SETGID              equ 46
SYS_GETGID              equ 47
SYS_SIGNAL              equ 48
SYS_GETEUID             equ 49
SYS_GETEGID             equ 50
SYS_ACCT                equ 51
SYS_UMOUNT2             equ 52
SYS_LOCK                equ 53
SYS_IOCTL               equ 54
SYS_FCNTL               equ 55
SYS_MPX                 equ 56
SYS_SETPGID             equ 57
SYS_ULIMIT              equ 58
SYS_OLDOLDUNAME         equ 59
SYS_UMASK               equ 60
SYS_CHROOT              equ 61
SYS_USTAT               equ 62
SYS_DUP2                equ 63
SYS_GETPPID             equ 64
SYS_GETPGRP             equ 65
SYS_SETSID              equ 66
SYS_SIGACTION           equ 67
SYS_SGETMASK            equ 68
SYS_SSETMASK            equ 69
SYS_SETREUID            equ 70
SYS_SETREGID            equ 71
SYS_SIGSUSPEND          equ 72
SYS_SIGPENDING          equ 73
SYS_SETHOSTNAME         equ 74
SYS_SETRLIMIT           equ 75
SYS_GETRLIMIT           equ 76
SYS_GETRUSAGE           equ 77
SYS_GETTIMEOFDAY        equ 78
SYS_SETTIMEOFDAY        equ 79
SYS_GETGROUPS           equ 80
SYS_SETGROUPS           equ 81
SYS_SELECT              equ 82
SYS_SYMLINK             equ 83
SYS_OLDLSTAT            equ 84
SYS_READLINK            equ 85
SYS_USELIB              equ 86
SYS_SWAPON              equ 87
SYS_REBOOT              equ 88
SYS_READDIR             equ 89
SYS_MMAP                equ 90
SYS_MUNMAP              equ 91
SYS_TRUNCATE            equ 92
SYS_FTRUNCATE           equ 93
SYS_FCHMOD              equ 94
SYS_FCHOWN              equ 95
SYS_GETPRIORITY         equ 96
SYS_SETPRIORITY         equ 97
SYS_PROFIL              equ 98
SYS_STATFS              equ 99
SYS_FSTATFS             equ 100
SYS_IOPERM              equ 101
SYS_SOCKETCALL          equ 102
SYS_SYSLOG              equ 103
SYS_SETITIMER           equ 104
SYS_GETITIMER           equ 105
SYS_STAT                equ 106
SYS_LSTAT               equ 107
SYS_FSTAT               equ 108
SYS_OLDUNAME            equ 109
SYS_IOPL                equ 110
SYS_VHANGUP             equ 111
SYS_IDLE                equ 112
SYS_VM86OLD             equ 113
SYS_WAIT4               equ 114
SYS_SWAPOFF             equ 115
SYS_SYSINFO             equ 116
SYS_IPC                 equ 117
SYS_FSYNC               equ 118
SYS_SIGRETURN           equ 119
SYS_CLONE               equ 120
SYS_SETDOMAINNAME       equ 121
SYS_UNAME               equ 122
SYS_MODIFY_LDT          equ 123
SYS_ADJTIMEX            equ 124
SYS_MPROTECT            equ 125
SYS_SIGPROCMASK         equ 126
SYS_CREATE_MODULE       equ 127
SYS_INIT_MODULE         equ 128
SYS_DELETE_MODULE       equ 129
SYS_GET_KERNEL_SYMS     equ 130
SYS_QUOTACTL            equ 131
SYS_GETPGID             equ 132
SYS_FCHDIR              equ 133
SYS_BDFLUSH             equ 134
SYS_SYSFS               equ 135
SYS_PERSONALITY         equ 136
SYS_AFS_SYSCALL         equ 137
SYS_SETFSUID            equ 138
SYS_SETFSGID            equ 139
SYS__LLSEEK             equ 140
SYS_GETDENTS            equ 141
SYS__NEWSELECT          equ 142
SYS_FLOCK               equ 143
SYS_MSYNC               equ 144
SYS_READV               equ 145
SYS_WRITEV              equ 146
SYS_GETSID              equ 147
SYS_FDATASYNC           equ 148
SYS_SYSCTL              equ 149
SYS_MLOCK               equ 150
SYS_MUNLOCK             equ 151
SYS_MLOCKALL            equ 152
SYS_MUNLOCKALL          equ 153
SYS_SCHED_SETPARAM              equ 154
SYS_SCHED_GETPARAM              equ 155
SYS_SCHED_SETSCHEDULER          equ 156
SYS_SCHED_GETSCHEDULER          equ 157
SYS_SCHED_YIELD                 equ 158
SYS_SCHED_GET_PRIORITY_MAX      equ 159
SYS_SCHED_GET_PRIORITY_MIN      equ 160
SYS_SCHED_RR_GET_INTERVAL       equ 161
SYS_NANOSLEEP           equ 162
SYS_MREMAP              equ 163
SYS_SETRESUID           equ 164
SYS_GETRESUID           equ 165
SYS_VM86                equ 166
SYS_QUERY_MODULE        equ 167
SYS_POLL                equ 168
SYS_NFSSERVCTL          equ 169
SYS_SETRESGID           equ 170
SYS_GETRESGID           equ 171
SYS_PRCTL               equ 172
SYS_RT_SIGRETURN        equ 173
SYS_RT_SIGACTION        equ 174
SYS_RT_SIGPROCMASK      equ 175
SYS_RT_SIGPENDING       equ 176
SYS_RT_SIGTIMEDWAIT     equ 177
SYS_RT_SIGQUEUEINFO     equ 178
SYS_RT_SIGSUSPEND       equ 179
SYS_PREAD64             equ 180
SYS_PWRITE64            equ 181
SYS_CHOWN               equ 182
SYS_GETCWD              equ 183
SYS_CAPGET              equ 184
SYS_CAPSET              equ 185
SYS_SIGALTSTACK         equ 186
SYS_SENDFILE            equ 187
SYS_GETPMSG             equ 188
SYS_PUTPMSG             equ 189
SYS_VFORK               equ 190
SYS_UGETRLIMIT          equ 191
SYS_MMAP2               equ 192
SYS_TRUNCATE64          equ 193
SYS_FTRUNCATE64         equ 194
SYS_STAT64              equ 195
SYS_LSTAT64             equ 196
SYS_FSTAT64             equ 197
SYS_LCHOWN32            equ 198
SYS_GETUID32            equ 199
SYS_GETGID32            equ 200
SYS_GETEUID32           equ 201
SYS_GETEGID32           equ 202
SYS_SETREUID32          equ 203
SYS_SETREGID32          equ 204
SYS_GETGROUPS32         equ 205
SYS_SETGROUPS32         equ 206
SYS_FCHOWN32            equ 207
SYS_SETRESUID32         equ 208
SYS_GETRESUID32         equ 209
SYS_SETRESGID32         equ 210
SYS_GETRESGID32         equ 211
SYS_CHOWN32             equ 212
SYS_SETUID32            equ 213
SYS_SETGID32            equ 214
SYS_SETFSUID32          equ 215
SYS_SETFSGID32          equ 216
SYS_PIVOT_ROOT          equ 217
SYS_MINCORE             equ 218
SYS_MADVISE             equ 219
SYS_MADVISE1            equ 219
SYS_GETDENTS64          equ 220
SYS_FCNTL64             equ 221
SYS_GETTID              equ 224
SYS_READAHEAD           equ 225
SYS_SETXATTR            equ 226
SYS_LSETXATTR           equ 227
SYS_FSETXATTR           equ 228
SYS_GETXATTR            equ 229
SYS_LGETXATTR           equ 230
SYS_FGETXATTR           equ 231
SYS_LISTXATTR           equ 232
SYS_LLISTXATTR          equ 233
SYS_FLISTXATTR          equ 234
SYS_REMOVEXATTR         equ 235
SYS_LREMOVEXATTR        equ 236
SYS_FREMOVEXATTR        equ 237
SYS_TKILL               equ 238
SYS_SENDFILE64          equ 239
SYS_FUTEX               equ 240
SYS_SCHED_SETAFFINITY   equ 241
SYS_SCHED_GETAFFINITY   equ 242
SYS_SET_THREAD_AREA     equ 243
SYS_GET_THREAD_AREA     equ 244
SYS_IO_SETUP            equ 245
SYS_IO_DESTROY          equ 246
SYS_IO_GETEVENTS        equ 247
SYS_IO_SUBMIT           equ 248
SYS_IO_CANCEL           equ 249
SYS_FADVISE64           equ 250
SYS_EXIT_GROUP          equ 252
SYS_LOOKUP_DCOOKIE      equ 253
SYS_EPOLL_CREATE        equ 254
SYS_EPOLL_CTL           equ 255
SYS_EPOLL_WAIT          equ 256
SYS_REMAP_FILE_PAGES    equ 257
SYS_SET_TID_ADDRESS     equ 258
SYS_TIMER_CREATE        equ 259
SYS_TIMER_SETTIME       equ (SYS_TIMER_CREATE+1)
SYS_TIMER_GETTIME       equ (SYS_TIMER_CREATE+2)
SYS_TIMER_GETOVERRUN    equ (SYS_TIMER_CREATE+3)
SYS_TIMER_DELETE        equ (SYS_TIMER_CREATE+4)
SYS_CLOCK_SETTIME       equ (SYS_TIMER_CREATE+5)
SYS_CLOCK_GETTIME       equ (SYS_TIMER_CREATE+6)
SYS_CLOCK_GETRES        equ (SYS_TIMER_CREATE+7)
SYS_CLOCK_NANOSLEEP     equ (SYS_TIMER_CREATE+8)
SYS_STATFS64            equ 268
SYS_FSTATFS64           equ 269
SYS_TGKILL              equ 270
SYS_UTIMES              equ 271
SYS_FADVISE64_64        equ 272
SYS_VSERVER             equ 273
SYS_MBIND               equ 274
SYS_GET_MEMPOLICY       equ 275
SYS_SET_MEMPOLICY       equ 276
SYS_MQ_OPEN             equ 277
SYS_MQ_UNLINK           equ (SYS_MQ_OPEN+1)
SYS_MQ_TIMEDSEND        equ (SYS_MQ_OPEN+2)
SYS_MQ_TIMEDRECEIVE     equ (SYS_MQ_OPEN+3)
SYS_MQ_NOTIFY           equ (SYS_MQ_OPEN+4)
SYS_MQ_GETSETATTR       equ (SYS_MQ_OPEN+5)
SYS_KEXEC_LOAD          equ 283
SYS_WAITID              equ 284
SYS_SYS_SETALTROOT      equ 285
SYS_ADD_KEY             equ 286
SYS_RequEST_KEY         equ 287
SYS_KEYCTL              equ 288
SYS_IOPRIO_SET          equ 289
SYS_IOPRIO_GET          equ 290
SYS_INOTIFY_INIT        equ 291
SYS_INOTIFY_ADD_WATCH   equ 292
SYS_INOTIFY_RM_WATCH    equ 293
SYS_MIGRATE_PAGES       equ 294
SYS_OPENAT              equ 295
SYS_MKDIRAT             equ 296
SYS_MKNODAT             equ 297
SYS_FCHOWNAT            equ 298
SYS_FUTIMESAT           equ 299
SYS_FSTATAT64           equ 300
SYS_UNLINKAT            equ 301
SYS_RENAMEAT            equ 302
SYS_LINKAT              equ 303
SYS_SYMLINKAT           equ 304
SYS_READLINKAT          equ 305
SYS_FCHMODAT            equ 306
SYS_FACCESSAT           equ 307
SYS_PSELECT6            equ 308
SYS_PPOLL               equ 309
SYS_UNSHARE             equ 310
SYS_SET_ROBUST_LIST     equ 311
SYS_GET_ROBUST_LIST     equ 312
SYS_SPLICE              equ 313
SYS_SYNC_FILE_RANGE     equ 314
SYS_TEE                 equ 315
SYS_VMSPLICE            equ 316

SIGHUP          equ  1
SIGINT          equ  2
SIGQUIT         equ  3
SIGILL          equ  4
SIGTRAP         equ  5
SIGABRT         equ  6
SIGIOT          equ  6
SIGBUS          equ  7
SIGFPE          equ  8
SIGKILL         equ  9
SIGUSR1         equ 10
SIGSEGV         equ 11
SIGUSR2         equ 12
SIGPIPE         equ 13
SIGALRM         equ 14
SIGTERM         equ 15
SIGSTKFLT       equ 16
SIGCHLD         equ 17
SIGCONT         equ 18
SIGSTOP         equ 19
SIGTSTP         equ 20
SIGTTIN         equ 21
SIGTTOU         equ 22
SIGURG          equ 23
SIGXCPU         equ 24
SIGXFSZ         equ 25
SIGVTALRM       equ 26
SIGPROF         equ 27
SIGWINCH        equ 28
SIGIO           equ 29
SIGPOLL         equ SIGIO
SIGLOST         equ 29
SIGPWR          equ 30
SIGSYS          equ 31
SIGUNUSED       equ 31

EPERM           equ  1
ENOENT          equ  2
ESRCH           equ  3
EINTR           equ  4
EIO             equ  5
ENXIO           equ  6
E2BIG           equ  7
ENOEXEC         equ  8
EBADF           equ  9
ECHILD          equ 10
EAGAIN          equ 11
ENOMEM          equ 12
EACCES          equ 13
EFAULT          equ 14
ENOTBLK         equ 15
EBUSY           equ 16
EEXIST          equ 17
EXDEV           equ 18
ENODEV          equ 19
ENOTDIR         equ 20
EISDIR          equ 21
EINVAL          equ 22
ENFILE          equ 23
EMFILE          equ 24
ENOTTY          equ 25
ETXTBSY         equ 26
EFBIG           equ 27
ENOSPC          equ 28
ESPIPE          equ 29
EROFS           equ 30
EMLINK          equ 31
EPIPE           equ 32
EDOM            equ 33
ERANGE          equ 34

EDEADLK         equ 35
ENAMETOOLONG    equ 36
ENOLCK          equ 37
ENOSYS          equ 38
ENOTEMPTY       equ 39
ELOOP           equ 40
EWOULDBLOCK     equ EAGAIN
ENOMSG          equ 42
EIDRM           equ 43
ECHRNG          equ 44
EL2NSYNC        equ 45
EL3HLT          equ 46
EL3RST          equ 47
ELNRNG          equ 48
EUNATCH         equ 49
ENOCSI          equ 50
EL2HLT          equ 51
EBADE           equ 52
EBADR           equ 53
EXFULL          equ 54
ENOANO          equ 55
EBADRQC         equ 56
EBADSLT         equ 57
EDEADLOCK       equ EDEADLK
EBFONT          equ 59
ENOSTR          equ 60
ENODATA         equ 61
ETIME           equ 62
ENOSR           equ 63
ENONET          equ 64
ENOPKG          equ 65
EREMOTE         equ 66
ENOLINK         equ 67
EADV            equ 68
ESRMNT          equ 69
ECOMM           equ 70
EPROTO          equ 71
EMULTIHOP       equ 72
EDOTDOT         equ 73
EBADMSG         equ 74
EOVERFLOW       equ 75
ENOTUNIQ        equ 76
EBADFD          equ 77
EREMCHG         equ 78
ELIBACC         equ 79
ELIBBAD         equ 80
ELIBSCN         equ 81
ELIBMAX         equ 82
ELIBEXEC        equ 83
EILSEQ          equ 84
ERESTART        equ 85
ESTRPIPE        equ 86
EUSERS          equ 87
ENOTSOCK        equ 88
EDESTADDRREQ    equ 89
EMSGSIZE        equ 90
EPROTOTYPE      equ 91
ENOPROTOOPT     equ 92
EPROTONOSUPPORT equ 93
ESOCKTNOSUPPORT equ 94
EOPNOTSUPP      equ 95
EPFNOSUPPORT    equ 96
EAFNOSUPPORT    equ 97
EADDRINUSE      equ 98
EADDRNOTAVAIL   equ 99
ENETDOWN        equ 100
ENETUNREACH     equ 101
ENETRESET       equ 102
ECONNABORTED    equ 103
ECONNRESET      equ 104
ENOBUFS         equ 105
EISCONN         equ 106
ENOTCONN        equ 107
ESHUTDOWN       equ 108
ETOOMANYREFS    equ 109
ETIMEDOUT       equ 110
ECONNREFUSED    equ 111
EHOSTDOWN       equ 112
EHOSTUNREACH    equ 113
EALREADY        equ 114
EINPROGRESS     equ 115
ESTALE          equ 116
EUCLEAN         equ 117
ENOTNAM         equ 118
ENAVAIL         equ 119
EISNAM          equ 120
EREMOTEIO       equ 121
EDQUOT          equ 122
ENOMEDIUM       equ 123
EMEDIUMTYPE     equ 124
ECANCELED       equ 125
ENOKEY          equ 126
EKEYEXPIRED     equ 127
EKEYREVOKED     equ 128
EKEYREJECTED    equ 129
EOWNERDEAD      equ 130
ENOTRECOVERABLE equ 131

S_IFMT          equ 00170000o
S_IFSOCK        equ 0140000o
S_IFLNK         equ 0120000o
S_IFREG         equ 0100000o
S_IFBLK         equ 0060000o
S_IFDIR         equ 0040000o
S_IFCHR         equ 0020000o
S_IFIFO         equ 0010000o
S_ISUID         equ 0004000o
S_ISGID         equ 0002000o
S_ISVTX         equ 0001000o
S_IRWXU         equ 00700o
S_IRUSR         equ 00400o
S_IWUSR         equ 00200o
S_IXUSR         equ 00100o
S_IRWXG         equ 00070o
S_IRGRP         equ 00040o
S_IWGRP         equ 00020o
S_IXGRP         equ 00010o
S_IRWXO         equ 00007o
S_IROTH         equ 00004o
S_IWOTH         equ 00002o
S_IXOTH         equ 00001o

CAP_CHOWN            equ 0
CAP_DAC_OVERRIDE     equ 1
CAP_DAC_READ_SEARCH  equ 2
CAP_FOWNER           equ 3
CAP_FSETID           equ 4
CAP_FS_MASK          equ 0x1f
CAP_KILL             equ 5
CAP_SETGID           equ 6
CAP_SETUID           equ 7
CAP_SETPCAP          equ 8
CAP_LINUX_IMMUTABLE  equ 9
CAP_NET_BIND_SERVICE equ 10
CAP_NET_BROADCAST    equ 11
CAP_NET_ADMIN        equ 12
CAP_NET_RAW          equ 13
CAP_IPC_LOCK         equ 14
CAP_IPC_OWNER        equ 15
CAP_SYS_MODULE       equ 16
CAP_SYS_RAWIO        equ 17
CAP_SYS_CHROOT       equ 18
CAP_SYS_PTRACE       equ 19
CAP_SYS_PACCT        equ 20

F_OK            equ 0
X_OK            equ 1
W_OK            equ 2
R_OK            equ 4

FD_CLOEXEC      equ 1

F_DUPFD         equ 0
F_GETFD         equ 1
F_SETFD         equ 2
F_GETFL         equ 3
F_SETFL         equ 4
F_GETLK         equ 5
F_SETLK         equ 6
F_SETLKW        equ 7
F_SETOWN        equ 8
F_GETOWN        equ 9
F_SETSIG        equ 10
F_GETSIG        equ 11

F_LINUX_SPECIFIC_BASE equ 1024

F_SETLEASE      equ (F_LINUX_SPECIFIC_BASE+0)
F_GETLEASE      equ (F_LINUX_SPECIFIC_BASE+1)
F_NOTIFY        equ (F_LINUX_SPECIFIC_BASE+2)

O_ACCMODE       equ 00000003o
O_RDONLY        equ 00000000o
O_WRONLY        equ 00000001o
O_RDWR          equ 00000002o
O_CREAT         equ 00000100o
O_EXCL          equ 00000200o
O_NOCTTY        equ 00000400o
O_TRUNC         equ 00001000o
O_APPEND        equ 00002000o
O_NONBLOCK      equ 00004000o
O_SYNC          equ 00010000o
FASYNC          equ 00020000o
O_DIRECT        equ 00040000o
O_LARGEFILE     equ 00100000o
O_DIRECTORY     equ 00200000o
O_NOFOLLOW      equ 00400000o
O_NOATIME       equ 01000000o
O_NDELAY        equ O_NONBLOCK

DN_ACCESS       equ 0x00000001
DN_MODIFY       equ 0x00000002
DN_CREATE       equ 0x00000004
DN_DELETE       equ 0x00000008
DN_RENAME       equ 0x00000010
DN_ATTRIB       equ 0x00000020
DN_MULTISHOT    equ 0x80000000

RLIMIT_CPU      equ 0
RLIMIT_FSIZE    equ 1
RLIMIT_DATA     equ 2
RLIMIT_STACK    equ 3
RLIMIT_CORE     equ 4
RLIMIT_RSS      equ 5
RLIMIT_NPROC    equ 6
RLIMIT_NOFILE   equ 7
RLIMIT_MEMLOCK  equ 8
RLIMIT_AS       equ 9
RLIMIT_LOCKS    equ 10
RLIMIT_SIGPENDING equ 11
RLIMIT_MSGQUEUE equ 12
RLIMIT_NICE     equ 13
RLIMIT_RTPRIO   equ 14
RLIM_NLIMITS    equ 15

RUSAGE_SELF     equ 0
RUSAGE_CHILDREN equ (-1)
RUSAGE_BOTH     equ (-2)

PRIO_MIN        equ (-20)
PRIO_MAX        equ 20
PRIO_PROCESS    equ 0
PRIO_PGRP       equ 1
PRIO_USER       equ 2

ADFS_SUPER_MAGIC        equ 0xadf5
AFFS_SUPER_MAGIC        equ 0xADFF
BEFS_SUPER_MAGIC        equ 0x42465331
BFS_MAGIC               equ 0x1BADFACE
CIFS_MAGIC_NUMBER       equ 0xFF534D42
CODA_SUPER_MAGIC        equ 0x73757245
COH_SUPER_MAGIC         equ 0x012FF7B7
CRAMFS_MAGIC            equ 0x28cd3d45
DEVFS_SUPER_MAGIC       equ 0x1373
EFS_SUPER_MAGIC         equ 0x00414A53
EXT_SUPER_MAGIC         equ 0x137D
EXT2_OLD_SUPER_MAGIC    equ 0xEF51
EXT2_SUPER_MAGIC        equ 0xEF53
EXT3_SUPER_MAGIC        equ 0xEF53
HFS_SUPER_MAGIC         equ 0x4244
HPFS_SUPER_MAGIC        equ 0xF995E849
HUGETLBFS_MAGIC         equ 0x958458f6
ISOFS_SUPER_MAGIC       equ 0x9660
JFFS2_SUPER_MAGIC       equ 0x72b6
JFS_SUPER_MAGIC         equ 0x3153464a
MINIX_SUPER_MAGIC       equ 0x137F
MINIX_SUPER_MAGIC2      equ 0x138F
MINIX2_SUPER_MAGIC      equ 0x2468
MINIX2_SUPER_MAGIC2     equ 0x2478
MSDOS_SUPER_MAGIC       equ 0x4d44
NCP_SUPER_MAGIC         equ 0x564c
NFS_SUPER_MAGIC         equ 0x6969
NTFS_SB_MAGIC           equ 0x5346544e
OPENPROM_SUPER_MAGIC    equ 0x9fa1
PROC_SUPER_MAGIC        equ 0x9fa0
QNX4_SUPER_MAGIC        equ 0x002f
REISERFS_SUPER_MAGIC    equ 0x52654973
ROMFS_MAGIC             equ 0x7275
SMB_SUPER_MAGIC         equ 0x517B
SYSV2_SUPER_MAGIC       equ 0x012FF7B6
SYSV4_SUPER_MAGIC       equ 0x012FF7B5
TMPFS_MAGIC             equ 0x01021994
UDF_SUPER_MAGIC         equ 0x15013346
UFS_MAGIC               equ 0x00011954
USBDEVICE_SUPER_MAGIC   equ 0x9fa2
VXFS_SUPER_MAGIC        equ 0xa501FCF5
XENIX_SUPER_MAGIC       equ 0x012FF7B4
XFS_SUPER_MAGIC         equ 0x58465342
_XIAFS_SUPER_MAGIC      equ 0x012FD16D

ITIMER_REAL     equ 0
ITIMER_VIRTUAL  equ 1
ITIMER_PROF     equ 2

TIME_OK         equ 0
TIME_INS        equ 1
TIME_DEL        equ 2
TIME_OOP        equ 3
TIME_WAIT       equ 4
TIME_ERROR      equ 5
TIME_BAD        equ TIME_ERROR

ADJ_OFFSET      equ 0x0001
ADJ_FREQUENCY   equ 0x0002
ADJ_MAXERROR    equ 0x0004
ADJ_ESTERROR    equ 0x0008
ADJ_STATUS      equ 0x0010
ADJ_TIMECONST   equ 0x0020
ADJ_TICK        equ 0x4000
ADJ_OFFSET_SINGLESHOT equ 0x8001

LOCK_SH         equ 1
LOCK_EX         equ 2
LOCK_NB         equ 4
LOCK_UN         equ 8
LOCK_MAND       equ 32
LOCK_READ       equ 64
LOCK_WRITE      equ 128
LOCK_RW         equ 192

POSIX_FADV_NORMAL       equ 0
POSIX_FADV_RANDOM       equ 1
POSIX_FADV_SEQUENTIAL   equ 2
POSIX_FADV_WILLNEED     equ 3
POSIX_FADV_DONTNEED     equ 4
POSIX_FADV_NOREUSE      equ 5

CLOCK_REALTIME                  equ 0
CLOCK_MONOTONIC                 equ 1
CLOCK_PROCESS_CPUTIME_ID        equ 2
CLOCK_THREAD_CPUTIME_ID         equ 3

KEY_SPEC_THREAD_KEYRING         equ -1
KEY_SPEC_PROCESS_KEYRING        equ -2
KEY_SPEC_SESSION_KEYRING        equ -3
KEY_SPEC_USER_KEYRING           equ -4
KEY_SPEC_USER_SESSION_KEYRING   equ -5
KEY_SPEC_GROUP_KEYRING          equ -6
KEY_SPEC_REQKEY_AUTH_KEY        equ -7

KEY_REQKEY_DEFL_NO_CHANGE               equ -1
KEY_REQKEY_DEFL_DEFAULT                 equ 0
KEY_REQKEY_DEFL_THREAD_KEYRING          equ 1
KEY_REQKEY_DEFL_PROCESS_KEYRING         equ 2
KEY_REQKEY_DEFL_SESSION_KEYRING         equ 3
KEY_REQKEY_DEFL_USER_KEYRING            equ 4
KEY_REQKEY_DEFL_USER_SESSION_KEYRING    equ 5
KEY_REQKEY_DEFL_GROUP_KEYRING           equ 6

FIOSETOWN       equ 0x8901
SIOCSPGRP       equ 0x8902
FIOGETOWN       equ 0x8903
SIOCGPGRP       equ 0x8904
SIOCATMARK      equ 0x8905
SIOCGSTAMP      equ 0x8906

_IOC_NONE       equ 0
_IOC_WRITE      equ 1
_IOC_READ       equ 2
_IOC_NRBITS     equ 8
_IOC_TYPEBITS   equ 8
_IOC_SIZEBITS   equ 14
_IOC_DIRBITS    equ 2
_IOC_NRSHIFT    equ 0
_IOC_TYPESHIFT  equ (_IOC_NRSHIFT+_IOC_NRBITS)
_IOC_SIZESHIFT  equ (_IOC_TYPESHIFT+_IOC_TYPEBITS)
_IOC_DIRSHIFT   equ (_IOC_SIZESHIFT+_IOC_SIZEBITS)

TCGETS          equ 0x5401
TCSETS          equ 0x5402
TCSETSW         equ 0x5403
TCSETSF         equ 0x5404
TCGETA          equ 0x5405
TCSETA          equ 0x5406
TCSETAW         equ 0x5407
TCSETAF         equ 0x5408
TCSBRK          equ 0x5409
TCXONC          equ 0x540A
TCFLSH          equ 0x540B
TIOCEXCL        equ 0x540C
TIOCNXCL        equ 0x540D
TIOCSCTTY       equ 0x540E
TIOCGPGRP       equ 0x540F
TIOCSPGRP       equ 0x5410
TIOCOUTQ        equ 0x5411
TIOCSTI         equ 0x5412
TIOCGWINSZ      equ 0x5413
TIOCSWINSZ      equ 0x5414
TIOCMGET        equ 0x5415
TIOCMBIS        equ 0x5416
TIOCMBIC        equ 0x5417
TIOCMSET        equ 0x5418
TIOCGSOFTCAR    equ 0x5419
TIOCSSOFTCAR    equ 0x541A
FIONREAD        equ 0x541B
TIOCINQ         equ FIONREAD
TIOCLINUX       equ 0x541C
TIOCCONS        equ 0x541D
TIOCGSERIAL     equ 0x541E
TIOCSSERIAL     equ 0x541F
TIOCPKT         equ 0x5420
FIONBIO         equ 0x5421
TIOCNOTTY       equ 0x5422
TIOCSETD        equ 0x5423
TIOCGETD        equ 0x5424
TCSBRKP         equ 0x542
TIOCSBRK        equ 0x5427
TIOCCBRK        equ 0x5428
TIOCGSID        equ 0x5429
TIOCGPTN        equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("T" shl _IOC_TYPESHIFT) or (0x30 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
TIOCSPTLCK      equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("T" shl _IOC_TYPESHIFT) or (0x31 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FIONCLEX        equ 0x5450
FIOCLEX         equ 0x5451
FIOASYNC        equ 0x5452
TIOCSERCONFIG   equ 0x5453
TIOCSERGWILD    equ 0x5454
TIOCSERSWILD    equ 0x5455
TIOCGLCKTRMIOS  equ 0x5456
TIOCSLCKTRMIOS  equ 0x5457
TIOCSERGSTRUCT  equ 0x5458
TIOCSERGETLSR   equ 0x5459
TIOCSERGETMULTI equ 0x545A
TIOCSERSETMULTI equ 0x545B
TIOCMIWAIT      equ 0x545C
TIOCGICOUNT     equ 0x545D
TIOCGHAYESESP   equ 0x545E
TIOCSHAYESESP   equ 0x545F
FIOQSIZE        equ 0x5460


;termios entries.

; c_cc characters
VINTR   equ 0
VQUIT   equ 1
VERASE  equ 2
VKILL   equ 3
VEOF    equ 4
VTIME   equ 5
VMIN    equ 6
VSWTC   equ 7
VSTART  equ 8
VSTOP   equ 9
VSUSP   equ 10
VEOL    equ 11
VREPRINT equ 12
VDISCARD equ 13
VWERASE equ 14
VLNEXT  equ 15
VEOL2   equ 16

; c_iflag bits
IGNBRK  equ 0000001o
BRKINT  equ 0000002o
IGNPAR  equ 0000004o
PARMRK  equ 0000010o
INPCK   equ 0000020o
ISTRIP  equ 0000040o
INLCR   equ 0000100o
IGNCR   equ 0000200o
ICRNL   equ 0000400o
IUCLC   equ 0001000o
IXON    equ 0002000o
IXANY   equ 0004000o
IXOFF   equ 0010000o
IMAXBEL equ 0020000o
IUTF8   equ 0040000o

; c_oflag bits
OPOST   equ 0000001o
OLCUC   equ 0000002o
ONLCR   equ 0000004o
OCRNL   equ 0000010o
ONOCR   equ 0000020o
ONLRET  equ 0000040o
OFILL   equ 0000100o
OFDEL   equ 0000200o
NLDLY   equ 0000400o
NL0     equ 0000000o
NL1     equ 0000400o
CRDLY   equ 0003000o
CR0     equ 0000000o
CR1     equ 0001000o
CR2     equ 0002000o
CR3     equ 0003000o
TABDLY  equ 0014000o
TAB0    equ 0000000o
TAB1    equ 0004000o
TAB2    equ 0010000o
TAB3    equ 0014000o
XTABS   equ 0014000o
BSDLY   equ 0020000o
BS0     equ 0000000o
BS1     equ 0020000o
VTDLY   equ 0040000o
VT0     equ 0000000o
VT1     equ 0040000o
FFDLY   equ 0100000o
FF0     equ 0000000o
FF1     equ 0100000o

; c_cflag bit meaning
CBAUD   equ 0010017o
B0      equ 0000000o
B50     equ 0000001o
B75     equ 0000002o
B110    equ 0000003o
B134    equ 0000004o
B150    equ 0000005o
B200    equ 0000006o
B300    equ 0000007o
B600    equ 0000010o
B1200   equ 0000011o
B1800   equ 0000012o
B2400   equ 0000013o
B4800   equ 0000014o
B9600   equ 0000015o
B19200  equ 0000016o
B38400  equ 0000017o
EXTA    equ B19200
EXTB    equ B38400
CSIZE    equ 0000060o
CS5      equ 0000000o
CS6      equ 0000020o
CS7      equ 0000040o
CS8      equ 0000060o
CSTOPB   equ 0000100o
CREAD    equ 0000200o
PARENB   equ 0000400o
PARODD   equ 0001000o
HUPCL    equ 0002000o
CLOCAL   equ 0004000o
CBAUDEX  equ 0010000o
B57600   equ 0010001o
B115200  equ 0010002o
B230400  equ 0010003o
B460800  equ 0010004o
B500000  equ 0010005o
B576000  equ 0010006o
B921600  equ 0010007o
B1000000 equ 0010010o
B1152000 equ 0010011o
B1500000 equ 0010012o
B2000000 equ 0010013o
B2500000 equ 0010014o
B3000000 equ 0010015o
B3500000 equ 0010016o
B4000000 equ 0010017o
CIBAUD   equ 002003600000o
CMSPAR   equ 010000000000o
CRTSCTS  equ 020000000000o

; c_lflag bits
ISIG    equ 0000001o
ICANON  equ 0000002o
XCASE   equ 0000004o
ECHO    equ 0000010o
ECHOE   equ 0000020o
ECHOK   equ 0000040o
ECHONL  equ 0000100o
NOFLSH  equ 0000200o
TOSTOP  equ 0000400o
ECHOCTL equ 0001000o
ECHOPRT equ 0002000o
ECHOKE  equ 0004000o
FLUSHO  equ 0010000o
PENDIN  equ 0040000o
IEXTEN  equ 0100000o

;end of termios entries.

TCOOFF  equ 0
TCOON   equ 1
TCIOFF  equ 2
TCION   equ 3

TCIFLUSH  equ 0
TCOFLUSH  equ 1
TCIOFLUSH equ 2

TCSANOW   equ 0
TCSADRAIN equ 1
TCSAFLUSH equ 2

TIOCM_LE   equ 0x001
TIOCM_DTR  equ 0x002
TIOCM_RTS  equ 0x004
TIOCM_ST   equ 0x008
TIOCM_SR   equ 0x010
TIOCM_CTS  equ 0x020
TIOCM_CAR  equ 0x040
TIOCM_RNG  equ 0x080
TIOCM_DSR  equ 0x100
TIOCM_CD   equ TIOCM_CAR
TIOCM_RI   equ TIOCM_RNG
TIOCM_OUT1 equ 0x2000
TIOCM_OUT2 equ 0x4000
TIOCM_LOOP equ 0x8000

TIOCPKT_DATA            equ 0
TIOCPKT_FLUSHREAD       equ 1
TIOCPKT_FLUSHWRITE      equ 2
TIOCPKT_STOP            equ 4
TIOCPKT_START           equ 8
TIOCPKT_NOSTOP          equ 16
TIOCPKT_DOSTOP          equ 32

SIOCDEVPRIVATE          equ 0x89F0
SIOCPROTOPRIVATE        equ 0x89E0

SIOCAX25GETUID          equ (SIOCPROTOPRIVATE+0)
SIOCAX25ADDUID          equ (SIOCPROTOPRIVATE+1)
SIOCAX25DELUID          equ (SIOCPROTOPRIVATE+2)
SIOCAX25NOUID           equ (SIOCPROTOPRIVATE+3)
SIOCAX25OPTRT           equ (SIOCPROTOPRIVATE+7)
SIOCAX25CTLCON          equ (SIOCPROTOPRIVATE+8)
SIOCAX25GETINFOOLD      equ (SIOCPROTOPRIVATE+9)
SIOCAX25ADDFWD          equ (SIOCPROTOPRIVATE+10)
SIOCAX25DELFWD          equ (SIOCPROTOPRIVATE+11)
SIOCAX25DEVCTL          equ (SIOCPROTOPRIVATE+12)
SIOCAX25GETINFO         equ (SIOCPROTOPRIVATE+13)

STL_BINTR       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("s" shl _IOC_TYPESHIFT) or (20 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
STL_BSTART      equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("s" shl _IOC_TYPESHIFT) or (21 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
STL_BSTOP       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("s" shl _IOC_TYPESHIFT) or (22 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
STL_BRESET      equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("s" shl _IOC_TYPESHIFT) or (23 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
STL_GETPFLAG    equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("s" shl _IOC_TYPESHIFT) or (80 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
STL_SETPFLAG    equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("s" shl _IOC_TYPESHIFT) or (81 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))

CDROMPAUSE              equ 0x5301
CDROMRESUME             equ 0x5302
CDROMPLAYMSF            equ 0x5303
CDROMPLAYTRKIND         equ 0x5304
CDROMREADTOCHDR         equ 0x5305
CDROMREADTOCENTRY       equ 0x5306
CDROMSTOP               equ 0x5307
CDROMSTART              equ 0x5308
CDROMEJECT              equ 0x5309
CDROMVOLCTRL            equ 0x530a
CDROMSUBCHNL            equ 0x530b
CDROMREADMODE2          equ 0x530c
CDROMREADMODE1          equ 0x530d
CDROMREADAUDIO          equ 0x530e
CDROMEJECT_SW           equ 0x530f
CDROMMULTISESSION       equ 0x5310
CDROM_GET_MCN           equ 0x5311
CDROM_GET_UPC           equ CDROM_GET_MCN
CDROMRESET              equ 0x5312
CDROMVOLREAD            equ 0x5313
CDROMREADRAW            equ 0x5314
CDROMREADCOOKED         equ 0x5315
CDROMSEEK               equ 0x5316
CDROMPLAYBLK            equ 0x5317
CDROMREADALL            equ 0x5318
CDROMGETSPINDOWN        equ 0x531d
CDROMSETSPINDOWN        equ 0x531e
CDROMCLOSETRAY          equ 0x5319
CDROM_SET_OPTIONS       equ 0x5320
CDROM_CLEAR_OPTIONS     equ 0x5321
CDROM_SELECT_SPEED      equ 0x5322
CDROM_SELECT_DISC       equ 0x5323
CDROM_MEDIA_CHANGED     equ 0x5325
CDROM_DRIVE_STATUS      equ 0x5326
CDROM_DISC_STATUS       equ 0x5327
CDROM_CHANGER_NSLOTS    equ 0x5328
CDROM_LOCKDOOR          equ 0x5329
CDROM_DEBUG             equ 0x5330
CDROM_GET_CAPABILITY    equ 0x5331
CDROMAUDIOBUFSIZ        equ 0x5382
DVD_READ_STRUCT         equ 0x5390
DVD_WRITE_STRUCT        equ 0x5391
DVD_AUTH                equ 0x5392
CDROM_SEND_PACKET       equ 0x5393
CDROM_NEXT_WRITABLE     equ 0x5394
CDROM_LAST_WRITTEN      equ 0x5395

CD_MINS                 equ 74
CD_SECS                 equ 60
CD_FRAMES               equ 75
CD_SYNC_SIZE            equ 12
CD_MSF_OFFSET           equ 150
CD_CHUNK_SIZE           equ 24
CD_NUM_OF_CHUNKS        equ 98
CD_FRAMESIZE_SUB        equ 96
CD_HEAD_SIZE            equ 4
CD_SUBHEAD_SIZE         equ 8
CD_EDC_SIZE             equ 4
CD_ZERO_SIZE            equ 8
CD_ECC_SIZE             equ 276
CD_FRAMESIZE            equ 2048
CD_FRAMESIZE_RAW        equ 2352
CD_FRAMESIZE_RAWER      equ 2646
CD_FRAMESIZE_RAW1       equ (CD_FRAMESIZE_RAW-CD_SYNC_SIZE)
CD_FRAMESIZE_RAW0       equ (CD_FRAMESIZE_RAW-CD_SYNC_SIZE-CD_HEAD_SIZE)
CD_XA_HEAD              equ (CD_HEAD_SIZE+CD_SUBHEAD_SIZE)
CD_XA_TAIL              equ (CD_EDC_SIZE+CD_ECC_SIZE)
CD_XA_SYNC_HEAD         equ (CD_SYNC_SIZE+CD_XA_HEAD)
CDROM_LBA               equ 0x01
CDROM_MSF               equ 0x02
CDROM_DATA_TRACK        equ 0x04
CDROM_LEADOUT           equ 0xAA
CDROM_AUDIO_INVALID     equ 0x00
CDROM_AUDIO_PLAY        equ 0x11
CDROM_AUDIO_PAUSED      equ 0x12
CDROM_AUDIO_COMPLETED   equ 0x13
CDROM_AUDIO_ERROR       equ 0x14
CDROM_AUDIO_NO_STATUS   equ 0x15
CDC_CLOSE_TRAY          equ 0x1
CDC_OPEN_TRAY           equ 0x2
CDC_LOCK                equ 0x4
CDC_SELECT_SPEED        equ 0x8
CDC_SELECT_DISC         equ 0x10
CDC_MULTI_SESSION       equ 0x20
CDC_MCN                 equ 0x40
CDC_MEDIA_CHANGED       equ 0x80
CDC_PLAY_AUDIO          equ 0x100
CDC_RESET               equ 0x200
CDC_DRIVE_STATUS        equ 0x800
CDC_GENERIC_PACKET      equ 0x1000
CDC_CD_R                equ 0x2000
CDC_CD_RW               equ 0x4000
CDC_DVD                 equ 0x8000
CDC_DVD_R               equ 0x10000
CDC_DVD_RAM             equ 0x20000
CDC_MO_DRIVE            equ 0x40000
CDC_MRW                 equ 0x80000
CDC_MRW_W               equ 0x100000
CDC_RAM                 equ 0x200000
CDS_NO_INFO             equ 0
CDS_NO_DISC             equ 1
CDS_TRAY_OPEN           equ 2
CDS_DRIVE_NOT_READY     equ 3
CDS_DISC_OK             equ 4
CDS_AUDIO               equ 100
CDS_DATA_1              equ 101
CDS_DATA_2              equ 102
CDS_XA_2_1              equ 103
CDS_XA_2_2              equ 104
CDS_MIXED               equ 105
CDO_AUTO_CLOSE          equ 0x1
CDO_AUTO_EJECT          equ 0x2
CDO_USE_FFLAGS          equ 0x4
CDO_LOCK                equ 0x8
CDO_CHECK_TYPE          equ 0x10

DVD_STRUCT_PHYSICAL     equ 0x00
DVD_STRUCT_COPYRIGHT    equ 0x01
DVD_STRUCT_DISCKEY      equ 0x02
DVD_STRUCT_BCA          equ 0x03
DVD_STRUCT_MANUFACT     equ 0x04

DVD_LU_SEND_AGID        equ 0
DVD_HOST_SEND_CHALLENGE equ 1
DVD_LU_SEND_KEY1        equ 2
DVD_LU_SEND_CHALLENGE   equ 3
DVD_HOST_SEND_KEY2      equ 4
DVD_AUTH_ESTABLISHED    equ 5
DVD_AUTH_FAILURE        equ 6
DVD_LU_SEND_TITLE_KEY   equ 7
DVD_LU_SEND_ASF         equ 8
DVD_INVALIDATE_AGID     equ 9
DVD_LU_SEND_RPC_STATE   equ 10
DVD_HOST_SEND_RPC_STATE equ 11

DVD_LAYERS              equ 4

CGC_DATA_UNKNOWN        equ 0
CGC_DATA_WRITE          equ 1
CGC_DATA_READ           equ 2
CGC_DATA_NONE           equ 3

CM206CTL_GET_STAT       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x20 shl _IOC_TYPESHIFT) or (0 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
CM206CTL_GET_LAST_STAT  equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x20 shl _IOC_TYPESHIFT) or (1 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))

CYGETMON                equ 0x435901
CYGETTHRESH             equ 0x435902
CYSETTHRESH             equ 0x435903
CYGETDEFTHRESH          equ 0x435904
CYSETDEFTHRESH          equ 0x435905
CYGETTIMEOUT            equ 0x435906
CYSETTIMEOUT            equ 0x435907
CYGETDEFTIMEOUT         equ 0x435908
CYSETDEFTIMEOUT         equ 0x435909
CYSETRFLOW              equ 0x43590a
CYGETRFLOW              equ 0x43590b
CYSETRTSDTR_INV         equ 0x43590c
CYGETRTSDTR_INV         equ 0x43590d
CYZSETPOLLCYCLE         equ 0x43590e
CYZGETPOLLCYCLE         equ 0x43590f
CYGETCD1400VER          equ 0x435910
CYGETCARDINFO           equ 0x435911
CYSETWAIT               equ 0x435912
CYGETWAIT               equ 0x435913

SIOCINQ         equ FIONREAD
SIOCOUTQ        equ TIOCOUTQ
SIOCADDRT       equ 0x890B
SIOCDELRT       equ 0x890C
SIOCRTMSG       equ 0x890D
SIOCGIFNAME     equ 0x8910
SIOCSIFLINK     equ 0x8911
SIOCGIFCONF     equ 0x8912
SIOCGIFFLAGS    equ 0x8913
SIOCSIFFLAGS    equ 0x8914
SIOCGIFADDR     equ 0x8915
SIOCSIFADDR     equ 0x8916
SIOCGIFDSTADDR  equ 0x8917
SIOCSIFDSTADDR  equ 0x8918
SIOCGIFBRDADDR  equ 0x8919
SIOCSIFBRDADDR  equ 0x891a
SIOCGIFNETMASK  equ 0x891b
SIOCSIFNETMASK  equ 0x891c
SIOCGIFMETRIC   equ 0x891d
SIOCSIFMETRIC   equ 0x891e
SIOCGIFMEM      equ 0x891f
SIOCSIFMEM      equ 0x8920
SIOCGIFMTU      equ 0x8921
SIOCSIFMTU      equ 0x8922
SIOCSIFNAME     equ 0x8923
SIOCSIFHWADDR   equ 0x8924
SIOCGIFENCAP    equ 0x8925
SIOCSIFENCAP    equ 0x8926
SIOCGIFHWADDR   equ 0x8927
SIOCGIFSLAVE    equ 0x8929
SIOCSIFSLAVE    equ 0x8930
SIOCADDMULTI    equ 0x8931
SIOCDELMULTI    equ 0x8932
SIOCGIFINDEX    equ 0x8933
SIOGIFINDEX     equ SIOCGIFINDEX
SIOCSIFPFLAGS   equ 0x8934
SIOCGIFPFLAGS   equ 0x8935
SIOCDIFADDR     equ 0x8936
SIOCSIFHWBROADCAST      equ 0x8937
SIOCGIFCOUNT    equ 0x8938
SIOCGIFBR       equ 0x8940
SIOCSIFBR       equ 0x8941
SIOCGIFTXQLEN   equ 0x8942
SIOCSIFTXQLEN   equ 0x8943
SIOCGIFDIVERT   equ 0x8944
SIOCSIFDIVERT   equ 0x8945
SIOCETHTOOL     equ 0x8946
SIOCGMIIPHY     equ 0x8947
SIOCGMIIREG     equ 0x8948
SIOCSMIIREG     equ 0x8949
SIOCWANDEV      equ 0x894A
SIOCDARP        equ 0x8953
SIOCGARP        equ 0x8954
SIOCSARP        equ 0x8955
SIOCDRARP       equ 0x8960
SIOCGRARP       equ 0x8961
SIOCSRARP       equ 0x8962
SIOCGIFMAP      equ 0x8970
SIOCSIFMAP      equ 0x8971
SIOCADDDLCI     equ 0x8980
SIOCDELDLCI     equ 0x8981
SIOCGIFVLAN     equ 0x8982
SIOCSIFVLAN     equ 0x8983
SIOCBONDENSLAVE equ 0x8990
SIOCBONDRELEASE equ 0x8991
SIOCBONDSETHWADDR      equ 0x8992
SIOCBONDSLAVEINFOQUERY equ 0x8993
SIOCBONDINFOQUERY      equ 0x8994
SIOCBONDCHANGEACTIVE   equ 0x8995
SIOCBRADDBR     equ 0x89a0
SIOCBRDELBR     equ 0x89a1
SIOCBRADDIF     equ 0x89a2
SIOCBRDELIF     equ 0x89a3

CLONE_VM        equ 0x00000100
CLONE_FS        equ 0x00000200
CLONE_FILES     equ 0x00000400
CLONE_SIGHAND   equ 0x00000800
CLONE_PTRACE    equ 0x00002000
CLONE_VFORK     equ 0x00004000
CLONE_PARENT    equ 0x00008000
CLONE_THREAD    equ 0x00010000
CLONE_NEWNS     equ 0x00020000
CLONE_SYSVSEM   equ 0x00040000
CLONE_SETTLS    equ 0x00080000
CLONE_PARENT_SETTID     equ 0x00100000
CLONE_CHILD_CLEARTID    equ 0x00200000
CLONE_DETACHED          equ 0x00400000
CLONE_UNTRACED          equ 0x00800000
CLONE_CHILD_SETTID      equ 0x01000000
CLONE_STOPPED           equ 0x02000000

PPPIOCGFLAGS    equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (90 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCSFLAGS    equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (89 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCGASYNCMAP equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (88 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCSASYNCMAP equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (87 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCGUNIT     equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (86 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCGRASYNCMAP equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (85 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCSRASYNCMAP equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (84 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCGMRU      equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (83 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCSMRU      equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (82 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCSMAXCID   equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (81 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCGXASYNCMAP equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (80 shl _IOC_NRSHIFT) or (32 shl _IOC_SIZESHIFT))
PPPIOCSXASYNCMAP equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (79 shl _IOC_NRSHIFT) or (32 shl _IOC_SIZESHIFT))
PPPIOCXFERUNIT  equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (78 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
PPPIOCSCOMPRESS equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (77 shl _IOC_NRSHIFT) or (12 shl _IOC_SIZESHIFT))
PPPIOCGNPMODE   equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (76 shl _IOC_NRSHIFT) or (8 shl _IOC_SIZESHIFT))
PPPIOCSNPMODE   equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (75 shl _IOC_NRSHIFT) or (8 shl _IOC_SIZESHIFT))
PPPIOCSPASS     equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (64 shl _IOC_NRSHIFT) or (6 shl _IOC_SIZESHIFT))
PPPIOCSACTIVE   equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (70 shl _IOC_NRSHIFT) or (6 shl _IOC_SIZESHIFT))
PPPIOCGDEBUG    equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (65 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCSDEBUG    equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (64 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCGIDLE     equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (63 shl _IOC_NRSHIFT) or (8 shl _IOC_SIZESHIFT))
PPPIOCNEWUNIT   equ (((_IOC_WRITE or _IOC_READ) shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (62 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCATTACH    equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (61 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCDETACH    equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (60 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCSMRRU     equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (59 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCCONNECT   equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (58 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCDISCONN   equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (57 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
PPPIOCATTCHAN   equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (56 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
PPPIOCGCHAN     equ ((_IOC_READ shl _IOC_DIRSHIFT) or ("t" shl _IOC_TYPESHIFT) or (55 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))

SIOCAIPXITFCRT  equ (SIOCPROTOPRIVATE)
SIOCAIPXPRISLT  equ (SIOCPROTOPRIVATE + 1)
SIOCIPXCFGDATA  equ (SIOCPROTOPRIVATE + 2)
SIOCIPXNCPCONN  equ (SIOCPROTOPRIVATE + 3)

ATMIOC_PHYCOM     equ 0x00
ATMIOC_PHYCOM_END equ 0x0f
ATMIOC_PHYTYP     equ 0x10
ATMIOC_PHYTYP_END equ 0x2f
ATMIOC_PHYPRV     equ 0x30
ATMIOC_PHYPRV_END equ 0x4f
ATMIOC_SARCOM     equ 0x50
ATMIOC_SARCOM_END equ 0x50
ATMIOC_SARPRV     equ 0x60
ATMIOC_SARPRV_END equ 0x7f
ATMIOC_ITF        equ 0x80
ATMIOC_ITF_END    equ 0x8f
ATMIOC_BACKEND    equ 0x90
ATMIOC_BACKEND_END equ 0xaf
ATMIOC_AREQUIPA   equ 0xc0
ATMIOC_LANE       equ 0xd0
ATMIOC_MPOA       equ 0xd8
ATMIOC_CLIP       equ 0xe0
ATMIOC_CLIP_END   equ 0xef
ATMIOC_SPECIAL    equ 0xf0
ATMIOC_SPECIAL_END equ 0xff

ATMSIGD_CTRL    equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_SPECIAL shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMARPD_CTRL    equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_CLIP+1 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMARP_MKIP     equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_CLIP+2 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMARP_SETENTRY equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_CLIP+3 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMARP_ENCAP    equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_CLIP+5 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMLEC_CTRL equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_LANE shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMLEC_DATA equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_LANE+1 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMLEC_MCAST equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_LANE+2 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
SIOCSIFATMTCP   equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_ITF shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMTCP_CREATE   equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_ITF+14 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMTCP_REMOVE   equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_ITF+15 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
SIOCMKCLIP      equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_CLIP shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMMPC_CTRL     equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_MPOA shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
ATMMPC_DATA     equ ((_IOC_NONE shl _IOC_DIRSHIFT) or ("a" shl _IOC_TYPESHIFT) or (ATMIOC_MPOA+1 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))

IO_BITMAP_BITS                  equ 65536
IO_BITMAP_BYTES                 equ (IO_BITMAP_BITS/8)
IO_BITMAP_LONGS                 equ (IO_BITMAP_BYTES/4)
IO_BITMAP_OFFSET                equ 104
INVALID_IO_BITMAP_OFFSET        equ 0x8000
INVALID_IO_BITMAP_OFFSET_LAZY   equ 0x9000

IOPRIO_WHO_PROCESS      equ 1
IOPRIO_WHO_PGRP         equ 2
IOPRIO_WHO_USER         equ 3

IOPRIO_CLASS_NONE       equ 0
IOPRIO_CLASS_RT         equ 1
IOPRIO_CLASS_BE         equ 2
IOPRIO_CLASS_IDLE       equ 3

SEMOP           equ 1
SEMGET          equ 2
SEMCTL          equ 3
SEMTIMEDOP      equ 4
MSGSND          equ 11
MSGRCV          equ 12
MSGGET          equ 13
MSGCTL          equ 14
SHMAT           equ 21
SHMDT           equ 22
SHMGET          equ 23
SHMCTL          equ 24

IPC_CREAT       equ 00001000o
IPC_EXCL        equ 00002000o
IPC_NOWAIT      equ 00004000o

SEM_UNDO        equ 0x1000

SEMMNI          equ 128
SEMMSL          equ 250
SEMMNS          equ (SEMMNI*SEMMSL)
SEMOPM          equ 32
SEMVMX          equ 32767
SEMAEM          equ SEMVMX

SA_NOCLDSTOP    equ 0x00000001
SA_NOCLDWAIT    equ 0x00000002
SA_SIGINFO      equ 0x00000004
SA_ONSTACK      equ 0x08000000
SA_RESTART      equ 0x10000000
SA_NODEFER      equ 0x40000000
SA_RESETHAND    equ 0x80000000
SA_NOMASK       equ SA_NODEFER
SA_ONESHOT      equ SA_RESETHAND
SA_INTERRUPT    equ 0x20000000
SA_RESTORER     equ 0x04000000

IPC_PRIVATE     equ 0

IPC_RMID        equ 0
IPC_SET         equ 1
IPC_STAT        equ 2
IPC_INFO        equ 3

SEM_STAT        equ 18
SEM_INFO        equ 19

GETPID          equ 11
GETVAL          equ 12
GETALL          equ 13
GETNCNT         equ 14
GETZCNT         equ 15
SETVAL          equ 16
SETALL          equ 17

MSGMNI          equ 16
MSGMAX          equ 8192
MSGMNB          equ 16384

MSGPOOL         equ (MSGMNI*MSGMNB/1024)
MSGTQL          equ MSGMNB
MSGMAP          equ MSGMNB
MSGSSZ          equ 16
__MSGSEG        equ ((MSGPOOL*1024)/ MSGSSZ)
        if              __MSGSEG <= 0xffff
        MSGSEG          = __MSGSEG
        else
        MSGSEG          = 0xffff
        end if

MSG_STAT        equ 11
MSG_INFO        equ 12

MSG_NOERROR     equ 010000o
MSG_EXCEPT      equ 020000o

SHM_RDONLY      equ 010000o
SHM_RND         equ 020000o
SHM_REMAP       equ 040000o
SHM_EXEC        equ 0100000o

SHM_LOCK        equ 11
SHM_UNLOCK      equ 12

SHM_STAT        equ 13
SHM_INFO        equ 14

KEYCTL_GET_KEYRING_ID           equ 0
KEYCTL_JOIN_SESSION_KEYRING     equ 1
KEYCTL_UPDATE                   equ 2
KEYCTL_REVOKE                   equ 3
KEYCTL_CHOWN                    equ 4
KEYCTL_SETPERM                  equ 5
KEYCTL_DESCRIBE                 equ 6
KEYCTL_CLEAR                    equ 7
KEYCTL_LINK                     equ 8
KEYCTL_UNLINK                   equ 9
KEYCTL_SEARCH                   equ 10
KEYCTL_READ                     equ 11
KEYCTL_INSTANTIATE              equ 12
KEYCTL_NEGATE                   equ 13
KEYCTL_SET_REQKEY_KEYRING       equ 14
KEYCTL_SET_TIMEOUT              equ 15
KEYCTL_ASSUME_AUTHORITY         equ 16

KEY_POS_VIEW    equ 0x01000000
KEY_POS_READ    equ 0x02000000
KEY_POS_WRITE   equ 0x04000000
KEY_POS_SEARCH  equ 0x08000000
KEY_POS_LINK    equ 0x10000000
KEY_POS_SETATTR equ 0x20000000
KEY_POS_ALL     equ 0x3f000000

KEY_USR_VIEW    equ 0x00010000
KEY_USR_READ    equ 0x00020000
KEY_USR_WRITE   equ 0x00040000
KEY_USR_SEARCH  equ 0x00080000
KEY_USR_LINK    equ 0x00100000
KEY_USR_SETATTR equ 0x00200000
KEY_USR_ALL     equ 0x003f0000

KEY_GRP_VIEW    equ 0x00000100
KEY_GRP_READ    equ 0x00000200
KEY_GRP_WRITE   equ 0x00000400
KEY_GRP_SEARCH  equ 0x00000800
KEY_GRP_LINK    equ 0x00001000
KEY_GRP_SETATTR equ 0x00002000
KEY_GRP_ALL     equ 0x00003f00

KEY_OTH_VIEW    equ 0x00000001
KEY_OTH_READ    equ 0x00000002
KEY_OTH_WRITE   equ 0x00000004
KEY_OTH_SEARCH  equ 0x00000008
KEY_OTH_LINK    equ 0x00000010
KEY_OTH_SETATTR equ 0x00000020
KEY_OTH_ALL     equ 0x0000003f

AT_FDCWD        equ -100

EPOLL_CTL_ADD   equ 1
EPOLL_CTL_DEL   equ 2
EPOLL_CTL_MOD   equ 3

EPOLLONESHOT    equ (1 shl 30)

EPOLLET         equ (1 shl 31)

FUTEX_WAIT              equ 0
FUTEX_WAKE              equ 1
FUTEX_FD                equ 2
FUTEX_REQUEUE           equ 3
FUTEX_CMP_REQUEUE       equ 4
FUTEX_WAKE_OP           equ 5

IN_ACCESS               equ 0x00000001
IN_MODIFY               equ 0x00000002
IN_ATTRIB               equ 0x00000004
IN_CLOSE_WRITE          equ 0x00000008
IN_CLOSE_NOWRITE        equ 0x00000010
IN_OPEN                 equ 0x00000020
IN_MOVED_FROM           equ 0x00000040
IN_MOVED_TO             equ 0x00000080
IN_CREATE               equ 0x00000100
IN_DELETE               equ 0x00000200
IN_DELETE_SELF          equ 0x00000400
IN_MOVE_SELF            equ 0x00000800

IN_UNMOUNT              equ 0x00002000
IN_Q_OVERFLOW           equ 0x00004000
IN_IGNORED              equ 0x00008000

IN_CLOSE                equ (IN_CLOSE_WRITE or IN_CLOSE_NOWRITE)
IN_MOVE                 equ (IN_MOVED_FROM or IN_MOVED_TO)

IN_ONLYDIR              equ 0x01000000
IN_DONT_FOLLOW          equ 0x02000000
IN_MASK_ADD             equ 0x20000000
IN_ISDIR                equ 0x40000000
IN_ONESHOT              equ 0x80000000

XATTR_CREATE    equ 0x1
XATTR_REPLACE   equ 0x2

SEEK_SET        equ 0
SEEK_CUR        equ 1
SEEK_END        equ 2

PROT_READ       equ 0x1
PROT_WRITE      equ 0x2
PROT_EXEC       equ 0x4
PROT_SEM        equ 0x8
PROT_NONE       equ 0x0
PROT_GROWSDOWN  equ 0x01000000
PROT_GROWSUP    equ 0x02000000

MAP_SHARED      equ 0x01
MAP_PRIVATE     equ 0x02
MAP_TYPE        equ 0x0f
MAP_FIXED       equ 0x10
MAP_ANONYMOUS   equ 0x20

MS_ASYNC        equ 1
MS_INVALIDATE   equ 2
MS_SYNC         equ 4

MADV_NORMAL     equ 0
MADV_RANDOM     equ 1
MADV_SEQUENTIAL equ 2
MADV_WILLNEED   equ 3
MADV_DONTNEED   equ 4

MADV_REMOVE     equ 9
MADV_DONTFORK   equ 10
MADV_DOFORK     equ 11

MAP_ANON        equ MAP_ANONYMOUS
MAP_FILE        equ 0

MPOL_DEFAULT    equ 0
MPOL_PREFERRED  equ 1
MPOL_BIND       equ 2
MPOL_INTERLEAVE equ 3

MPOL_MAX        equ MPOL_INTERLEAVE

MPOL_F_NODE     equ (1 shl 0)
MPOL_F_ADDR     equ (1 shl 1)

MPOL_MF_STRICT  equ (1 shl 0)
MPOL_MF_MOVE    equ (1 shl 1)
MPOL_MF_MOVE_ALL        equ (1 shl 2)
MPOL_MF_INTERNAL        equ (1 shl 3)

MCL_CURRENT     equ 1
MCL_FUTURE      equ 2

MS_MGC_VAL      equ 0xC0ED0000
MS_MGC_MSK      equ 0xffff0000

MS_RDONLY       equ 1
MS_NOSUID       equ 2
MS_NODEV        equ 4
MS_NOEXEC       equ 8
MS_SYNCHRONOUS  equ 16
MS_REMOUNT      equ 32
MS_MANDLOCK     equ 64
MS_DIRSYNC      equ 128
MS_NOATIME      equ 1024
MS_NODIRATIME   equ 2048
MS_BIND         equ 4096
MS_MOVE         equ 8192
MS_REC          equ 16384
MS_VERBOSE      equ 32768

MS_SILENT       equ 32768
MS_POSIXACL     equ (1 shl 16)
MS_UNBINDABLE   equ (1 shl 17)
MS_PRIVATE      equ (1 shl 18)
MS_SLAVE        equ (1 shl 19)
MS_SHARED       equ (1 shl 20)
MS_ACTIVE       equ (1 shl 30)
MS_NOUSER       equ (1 shl 31)

MREMAP_MAYMOVE  equ 1
MREMAP_FIXED    equ 2

NFSCTL_SVC              equ 0
NFSCTL_ADDCLIENT        equ 1
NFSCTL_DELCLIENT        equ 2
NFSCTL_EXPORT           equ 3
NFSCTL_UNEXPORT         equ 4
NFSCTL_GETFD            equ 7
NFSCTL_GETFS            equ 8

NFSCTL_VERSION          equ 0x0201

POLLIN          equ 0x0001
POLLPRI         equ 0x0002
POLLOUT         equ 0x0004
POLLERR         equ 0x0008
POLLHUP         equ 0x0010
POLLNVAL        equ 0x0020

POLLRDNORM      equ 0x0040
POLLRDBAND      equ 0x0080
POLLWRNORM      equ 0x0100
POLLWRBAND      equ 0x0200
POLLMSG         equ 0x0400
POLLREMOVE      equ 0x1000
POLLRDHUP       equ 0x2000

PR_SET_PDEATHSIG        equ 1
PR_GET_PDEATHSIG        equ 2

PR_GET_DUMPABLE         equ 3
PR_SET_DUMPABLE         equ 4

PR_GET_UNALIGN          equ 5
PR_SET_UNALIGN          equ 6
PR_UNALIGN_NOPRINT      equ 1
PR_UNALIGN_SIGBUS       equ 2

PR_GET_KEEPCAPS         equ 7
PR_SET_KEEPCAPS         equ 8

PR_GET_FPEMU            equ 9
PR_SET_FPEMU            equ 10
PR_FPEMU_NOPRINT        equ 1
PR_FPEMU_SIGFPE         equ 2

PR_GET_FPEXC            equ 11
PR_SET_FPEXC            equ 12
PR_FP_EXC_SW_ENABLE     equ 0x80
PR_FP_EXC_DIV           equ 0x010000
PR_FP_EXC_OVF           equ 0x020000
PR_FP_EXC_UND           equ 0x040000
PR_FP_EXC_RES           equ 0x080000
PR_FP_EXC_INV           equ 0x100000
PR_FP_EXC_DISABLED      equ 0
PR_FP_EXC_NONRECOV      equ 1
PR_FP_EXC_ASYNC         equ 2
PR_FP_EXC_PRECISE       equ 3

PR_GET_TIMING           equ 13
PR_SET_TIMING           equ 14
PR_TIMING_STATISTICAL   equ 0
PR_TIMING_TIMESTAMP     equ 1

PR_SET_NAME             equ 15
PR_GET_NAME             equ 16

PR_GET_ENDIAN           equ 19
PR_SET_ENDIAN           equ 20
PR_ENDIAN_BIG           equ 0
PR_ENDIAN_LITTLE        equ 1
PR_ENDIAN_PPC_LITTLE    equ 2

PTRACE_TRACEME          equ 0
PTRACE_PEEKTEXT         equ 1
PTRACE_PEEKDATA         equ 2
PTRACE_PEEKUSR          equ 3
PTRACE_POKETEXT         equ 4
PTRACE_POKEDATA         equ 5
PTRACE_POKEUSR          equ 6
PTRACE_CONT             equ 7
PTRACE_KILL             equ 8
PTRACE_SINGLESTEP       equ 9

PTRACE_ATTACH           equ 0x10
PTRACE_DETACH           equ 0x11

PTRACE_SYSCALL          equ 24

PTRACE_SETOPTIONS       equ 0x4200
PTRACE_GETEVENTMSG      equ 0x4201
PTRACE_GETSIGINFO       equ 0x4202
PTRACE_SETSIGINFO       equ 0x4203

PTRACE_O_TRACESYSGOOD   equ 0x00000001
PTRACE_O_TRACEFORK      equ 0x00000002
PTRACE_O_TRACEVFORK     equ 0x00000004
PTRACE_O_TRACECLONE     equ 0x00000008
PTRACE_O_TRACEEXEC      equ 0x00000010
PTRACE_O_TRACEVFORKDONE equ 0x00000020
PTRACE_O_TRACEEXIT      equ 0x00000040

PTRACE_O_MASK           equ 0x0000007f

PTRACE_EVENT_FORK       equ 1
PTRACE_EVENT_VFORK      equ 2
PTRACE_EVENT_CLONE      equ 3
PTRACE_EVENT_EXEC       equ 4
PTRACE_EVENT_VFORK_DONE equ 5
PTRACE_EVENT_EXIT       equ 6

PTRACE_GETREGS            equ 12
PTRACE_SETREGS            equ 13
PTRACE_GETFPREGS          equ 14
PTRACE_SETFPREGS          equ 15
PTRACE_GETFPXREGS         equ 18
PTRACE_SETFPXREGS         equ 19

PTRACE_OLDSETOPTIONS      equ 21

PTRACE_GET_THREAD_AREA    equ 25
PTRACE_SET_THREAD_AREA    equ 26

PTRACE_SYSEMU             equ 31
PTRACE_SYSEMU_SINGLESTEP  equ 32

SUBCMDMASK              equ 0x00ff
SUBCMDSHIFT             equ 8

Q_SYNC          equ 0x800001
Q_QUOTAON       equ 0x800002
Q_QUOTAOFF      equ 0x800003
Q_GETFMT        equ 0x800004
Q_GETINFO       equ 0x800005
Q_SETINFO       equ 0x800006
Q_GETQUOTA      equ 0x800007
Q_SETQUOTA      equ 0x800008

MAXQUOTAS       equ 2
USRQUOTA        equ 0
GRPQUOTA        equ 1

LINUX_REBOOT_MAGIC1     equ 0xfee1dead
LINUX_REBOOT_MAGIC2     equ 672274793
LINUX_REBOOT_MAGIC2A    equ 85072278
LINUX_REBOOT_MAGIC2B    equ 369367448
LINUX_REBOOT_MAGIC2C    equ 537993216

LINUX_REBOOT_CMD_RESTART        equ 0x01234567
LINUX_REBOOT_CMD_HALT           equ 0xCDEF0123
LINUX_REBOOT_CMD_CAD_ON         equ 0x89ABCDEF
LINUX_REBOOT_CMD_CAD_OFF        equ 0x00000000
LINUX_REBOOT_CMD_POWER_OFF      equ 0x4321FEDC
LINUX_REBOOT_CMD_RESTART2       equ 0xA1B2C3D4
LINUX_REBOOT_CMD_SW_SUSPEND     equ 0xD000FCE2
LINUX_REBOOT_CMD_KEXEC          equ 0x45584543

SS_ONSTACK      equ 1
SS_DISABLE      equ 2

SIG_BLOCK       equ 0
SIG_UNBLOCK     equ 1
SIG_SETMASK     equ 2

NPROTO          equ 32

SYS_SOCKET      equ 1
SYS_BIND        equ 2
SYS_CONNECT     equ 3
SYS_LISTEN      equ 4
SYS_ACCEPT      equ 5
SYS_GETSOCKNAME equ 6
SYS_GETPEERNAME equ 7
SYS_SOCKETPAIR  equ 8
SYS_SEND        equ 9
SYS_RECV        equ 10
SYS_SENDTO      equ 11
SYS_RECVFROM    equ 12
SYS_SHUTDOWN    equ 13
SYS_SETSOCKOPT  equ 14
SYS_GETSOCKOPT  equ 15
SYS_SENDMSG     equ 16
SYS_RECVMSG     equ 17

AF_UNSPEC       equ 0
AF_UNIX         equ 1
AF_LOCAL        equ 1
AF_INET         equ 2
AF_AX25         equ 3
AF_IPX          equ 4
AF_APPLETALK    equ 5
AF_NETROM       equ 6
AF_BRIDGE       equ 7
AF_ATMPVC       equ 8
AF_X25          equ 9
AF_INET6        equ 10
AF_ROSE         equ 11
AF_DECnet       equ 12
AF_NETBEUI      equ 13
AF_SECURITY     equ 14
AF_KEY          equ 15
AF_NETLINK      equ 16
AF_ROUTE        equ AF_NETLINK
AF_PACKET       equ 17
AF_ASH          equ 18
AF_ECONET       equ 19
AF_ATMSVC       equ 20
AF_SNA          equ 22
AF_IRDA         equ 23
AF_PPPOX        equ 24
AF_WANPIPE      equ 25
AF_LLC          equ 26
AF_TIPC         equ 30
AF_BLUETOOTH    equ 31
AF_MAX          equ 32

PF_UNSPEC       equ AF_UNSPEC
PF_UNIX         equ AF_UNIX
PF_LOCAL        equ AF_LOCAL
PF_INET         equ AF_INET
PF_AX25         equ AF_AX25
PF_IPX          equ AF_IPX
PF_APPLETALK    equ AF_APPLETALK
PF_NETROM       equ AF_NETROM
PF_BRIDGE       equ AF_BRIDGE
PF_ATMPVC       equ AF_ATMPVC
PF_X25          equ AF_X25
PF_INET6        equ AF_INET6
PF_ROSE         equ AF_ROSE
PF_DECnet       equ AF_DECnet
PF_NETBEUI      equ AF_NETBEUI
PF_SECURITY     equ AF_SECURITY
PF_KEY          equ AF_KEY
PF_NETLINK      equ AF_NETLINK
PF_ROUTE        equ AF_ROUTE
PF_PACKET       equ AF_PACKET
PF_ASH          equ AF_ASH
PF_ECONET       equ AF_ECONET
PF_ATMSVC       equ AF_ATMSVC
PF_SNA          equ AF_SNA
PF_IRDA         equ AF_IRDA
PF_PPPOX        equ AF_PPPOX
PF_WANPIPE      equ AF_WANPIPE
PF_LLC          equ AF_LLC
PF_TIPC         equ AF_TIPC
PF_BLUETOOTH    equ AF_BLUETOOTH
PF_MAX          equ AF_MAX

SWAP_FLAG_PREFER        equ 0x8000
SWAP_FLAG_PRIO_MASK     equ 0x7fff
SWAP_FLAG_PRIO_SHIFT    equ 0

SYNC_FILE_RANGE_WAIT_BEFORE     equ 1
SYNC_FILE_RANGE_WRITE           equ 2
SYNC_FILE_RANGE_WAIT_AFTER      equ 4

MINIMUM_CONSOLE_LOGLEVEL equ 1
DEFAULT_CONSOLE_LOGLEVEL equ 7

MNT_FORCE       equ 0x00000001
MNT_DETACH      equ 0x00000002
MNT_EXPIRE      equ 0x00000004

AT_SYMLINK_NOFOLLOW     equ 0x100
AT_REMOVEDIR            equ 0x200
AT_SYMLINK_FOLLOW       equ 0x400

VM86_PLUS_INSTALL_CHECK equ 0
VM86_ENTER              equ 1
VM86_ENTER_NO_BYPASS    equ 2
VM86_REQUEST_IRQ        equ 3
VM86_FREE_IRQ           equ 4
VM86_GET_IRQ_BITS       equ 5
VM86_GET_AND_RESET_IRQ  equ 6

WNOHANG         equ 0x00000001
WUNTRACED       equ 0x00000002
WSTOPPED        equ WUNTRACED
WEXITED         equ 0x00000004
WCONTINUED      equ 0x00000008
WNOWAIT         equ 0x01000000

__WNOTHREAD     equ 0x20000000
__WALL          equ 0x40000000
__WCLONE        equ 0x80000000

TIMER_ABSTIME   equ 0x01

SOL_SOCKET      equ 1

SO_DEBUG        equ 1
SO_REUSEADDR    equ 2
SO_TYPE         equ 3
SO_ERROR        equ 4
SO_DONTROUTE    equ 5
SO_BROADCAST    equ 6
SO_SNDBUF       equ 7
SO_RCVBUF       equ 8
SO_SNDBUFFORCE  equ 32
SO_RCVBUFFORCE  equ 33
SO_KEEPALIVE    equ 9
SO_OOBINLINE    equ 10
SO_NO_CHECK     equ 11
SO_PRIORITY     equ 12
SO_LINGER       equ 13
SO_BSDCOMPAT    equ 14
SO_PASSCRED     equ 16
SO_PEERCRED     equ 17
SO_RCVLOWAT     equ 18
SO_SNDLOWAT     equ 19
SO_RCVTIMEO     equ 20
SO_SNDTIMEO     equ 21

MSG_OOB         equ 1
MSG_PEEK        equ 2
MSG_DONTROUTE   equ 4
MSG_TRYHARD     equ 4
MSG_CTRUNC      equ 8
MSG_PROBE       equ 0x10
MSG_TRUNC       equ 0x20
MSG_DONTWAIT    equ 0x40
MSG_EOR         equ 0x80
MSG_WAITALL     equ 0x100
MSG_FIN         equ 0x200
MSG_SYN         equ 0x400
MSG_CONFIRM     equ 0x800
MSG_RST         equ 0x1000
MSG_ERRQUEUE    equ 0x2000
MSG_NOSIGNAL    equ 0x4000
MSG_MORE        equ 0x8000

MSG_EOF         equ MSG_FIN

SOCK_STREAM     equ 1
SOCK_DGRAM      equ 2
SOCK_RAW        equ 3
SOCK_RDM        equ 4
SOCK_SEQPACKET  equ 5
SOCK_DCCP       equ 6
SOCK_PACKET     equ 10

STDIN           equ 0
STDOUT          equ 1
STDERR          equ 2

SIG_DFL         equ 0
SIG_IGN         equ 1

RLIM_INFINITY   equ 0xFFFFFFFF

NR_OPEN         equ 1024

NGROUPS_MAX     equ 65536
ARG_MAX         equ 131072
CHILD_MAX       equ 999
OPEN_MAX        equ 256
LINK_MAX        equ 127
MAX_CANON       equ 255
MAX_INPUT       equ 255
NAME_MAX        equ 255
PATH_MAX        equ 4096
PIPE_BUF        equ 4096
XATTR_NAME_MAX  equ 255
XATTR_SIZE_MAX  equ 65536
XATTR_LIST_MAX  equ 65536

RTSIG_MAX       equ 32

SOMAXCONN       equ 128

PAGE_SHIFT      equ 12
PAGE_SIZE       equ (1 shl PAGE_SHIFT)
PAGE_MASK       equ (not (PAGE_SIZE-1))

SHM_DEST        equ 01000o
SHM_LOCKED      equ 02000o
SHM_HUGETLB     equ 04000o
SHM_NORESERVE   equ 010000o

SHM_R           equ 0400o
SHM_W           equ 0200o

CTL_KERN        equ 1
CTL_VM          equ 2
CTL_NET         equ 3
CTL_FS          equ 5
CTL_DEBUG       equ 6
CTL_DEV         equ 7
CTL_BUS         equ 8
CTL_ABI         equ 9
CTL_CPU         equ 10

INOTIFY_MAX_USER_INSTANCES      equ 1
INOTIFY_MAX_USER_WATCHES        equ 2
INOTIFY_MAX_QUEUED_EVENTS       equ 3

KERN_OSTYPE             equ 1
KERN_OSRELEASE          equ 2
KERN_OSREV              equ 3
KERN_VERSION            equ 4
KERN_SECUREMASK         equ 5
KERN_PROF               equ 6
KERN_NODENAME           equ 7
KERN_DOMAINNAME         equ 8

KERN_CAP_BSET           equ 14
KERN_PANIC              equ 15
KERN_REALROOTDEV        equ 16

KERN_SPARC_REBOOT       equ 21
KERN_CTLALTDEL          equ 22
KERN_PRINTK             equ 23
KERN_NAMETRANS          equ 24
KERN_PPC_HTABRECLAIM    equ 25
KERN_PPC_ZEROPAGED      equ 26
KERN_PPC_POWERSAVE_NAP  equ 27
KERN_MODPROBE           equ 28
KERN_SG_BIG_BUFF        equ 29
KERN_ACCT               equ 30
KERN_PPC_L2CR           equ 31

KERN_RTSIGNR            equ 32
KERN_RTSIGMAX           equ 33

KERN_SHMMAX             equ 34
KERN_MSGMAX             equ 35
KERN_MSGMNB             equ 36
KERN_MSGPOOL            equ 37
KERN_SYSRQ              equ 38
KERN_MAX_THREADS        equ 39
 KERN_RANDOM            equ 40
 KERN_SHMALL            equ 41
 KERN_MSGMNI            equ 42
 KERN_SEM               equ 43
 KERN_SPARC_STOP_A              equ 44
 KERN_SHMMNI            equ 45
KERN_OVERFLOWUID                equ 46
KERN_OVERFLOWGID                equ 47
KERN_SHMPATH            equ 48
KERN_HOTPLUG            equ 49
KERN_IEEE_EMULATION_WARNINGS            equ 50
KERN_S390_USER_DEBUG_LOGGING            equ 51
KERN_CORE_USES_PID              equ 52
KERN_TAINTED            equ 53
KERN_CADPID             equ 54
KERN_PIDMAX             equ 55
  KERN_CORE_PATTERN             equ 56
KERN_PANIC_ON_OOPS              equ 57
KERN_HPPA_PWRSW         equ 58
KERN_HPPA_UNALIGNED             equ 59
KERN_PRINTK_RATELIMIT           equ 60
KERN_PRINTK_RATELIMIT_BURST             equ 61
KERN_PTY                equ 62
KERN_NGROUPS_MAX                equ 63
KERN_SPARC_SCONS_PWROFF         equ 64
KERN_HZ_TIMER           equ 65
KERN_UNKNOWN_NMI_PANIC          equ 66
KERN_BOOTLOADER_TYPE            equ 67
KERN_RANDOMIZE          equ 68
KERN_SETUID_DUMPABLE            equ 69
KERN_SPIN_RETRY         equ 70
KERN_ACPI_VIDEO_FLAGS           equ 71
KERN_IA64_UNALIGNED             equ 72
KERN_COMPAT_LOG         equ 73
KERN_MAX_LOCK_DEPTH             equ 74

VM_UNUSED1              equ 1
VM_UNUSED2              equ 2
VM_UNUSED3              equ 3
VM_UNUSED4              equ 4
VM_OVERCOMMIT_MEMORY            equ 5
VM_UNUSED5              equ 6
VM_UNUSED7              equ 7
VM_UNUSED8              equ 8
VM_UNUSED9              equ 9
VM_PAGE_CLUSTER         equ 10
VM_DIRTY_BACKGROUND             equ 11
VM_DIRTY_RATIO          equ 12
VM_DIRTY_WB_CS          equ 13
VM_DIRTY_EXPIRE_CS              equ 14
VM_NR_PDFLUSH_THREADS           equ 15
VM_OVERCOMMIT_RATIO             equ 16
VM_PAGEBUF              equ 17
VM_HUGETLB_PAGES                equ 18
VM_SWAPPINESS           equ 19
VM_LOWMEM_RESERVE_RATIO         equ 20
VM_MIN_FREE_KBYTES              equ 21
VM_MAX_MAP_COUNT                equ 22
VM_LAPTOP_MODE          equ 23
VM_BLOCK_DUMP           equ 24
VM_HUGETLB_GROUP                equ 25
VM_VFS_CACHE_PRESSURE           equ 26
VM_LEGACY_VA_LAYOUT             equ 27
VM_SWAP_TOKEN_TIMEOUT           equ 28
VM_DROP_PAGECACHE               equ 29
VM_PERCPU_PAGELIST_FRACTION             equ 30
VM_ZONE_RECLAIM_MODE            equ 31
VM_MIN_UNMAPPED         equ 32
VM_PANIC_ON_OOM         equ 33
VM_VDSO_ENABLED         equ 34

NET_CORE                equ 1
NET_ETHER               equ 2
NET_802         equ 3
NET_UNIX                equ 4
NET_IPV4                equ 5
NET_IPX         equ 6
NET_ATALK               equ 7
NET_NETROM              equ 8
NET_AX25                equ 9
NET_BRIDGE              equ 10
NET_ROSE                equ 11
NET_IPV6                equ 12
NET_X25         equ 13
NET_TR          equ 14
NET_DECNET              equ 15
NET_ECONET              equ 16
NET_SCTP                equ 17
NET_LLC         equ 18
NET_NETFILTER           equ 19
NET_DCCP                equ 20

RANDOM_POOLSIZE         equ 1
RANDOM_ENTROPY_COUNT            equ 2
RANDOM_READ_THRESH              equ 3
RANDOM_WRITE_THRESH             equ 4
RANDOM_BOOT_ID          equ 5
RANDOM_UUID             equ 6

PTY_MAX         equ 1
PTY_NR          equ 2

BUS_ISA_MEM_BASE                equ 1
BUS_ISA_PORT_BASE               equ 2
BUS_ISA_PORT_SHIFT              equ 3

NET_CORE_WMEM_MAX               equ 1
NET_CORE_RMEM_MAX               equ 2
NET_CORE_WMEM_DEFAULT           equ 3
NET_CORE_RMEM_DEFAULT           equ 4
NET_CORE_MAX_BACKLOG            equ 6
NET_CORE_FASTROUTE              equ 7
NET_CORE_MSG_COST               equ 8
NET_CORE_MSG_BURST              equ 9
NET_CORE_OPTMEM_MAX             equ 10
NET_CORE_HOT_LIST_LENGTH                equ 11
NET_CORE_DIVERT_VERSION         equ 12
NET_CORE_NO_CONG_THRESH         equ 13
NET_CORE_NO_CONG                equ 14
NET_CORE_LO_CONG                equ 15
NET_CORE_MOD_CONG               equ 16
NET_CORE_DEV_WEIGHT             equ 17
NET_CORE_SOMAXCONN              equ 18
NET_CORE_BUDGET         equ 19
NET_CORE_AEVENT_ETIME           equ 20
NET_CORE_AEVENT_RSEQTH          equ 21

NET_UNIX_DESTROY_DELAY          equ 1
NET_UNIX_DELETE_DELAY           equ 2
NET_UNIX_MAX_DGRAM_QLEN         equ 3

NET_NF_CONNTRACK_MAX            equ 1
NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT           equ 2
NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV           equ 3
NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED                equ 4
NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT           equ 5
NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT         equ 6
NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK           equ 7
NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT          equ 8
NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE              equ 9
NET_NF_CONNTRACK_UDP_TIMEOUT            equ 10
NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM             equ 11
NET_NF_CONNTRACK_ICMP_TIMEOUT           equ 12
NET_NF_CONNTRACK_GENERIC_TIMEOUT                equ 13
NET_NF_CONNTRACK_BUCKETS                equ 14
NET_NF_CONNTRACK_LOG_INVALID            equ 15
NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS                equ 16
NET_NF_CONNTRACK_TCP_LOOSE              equ 17
NET_NF_CONNTRACK_TCP_BE_LIBERAL         equ 18
NET_NF_CONNTRACK_TCP_MAX_RETRANS                equ 19
NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED            equ 20
NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT               equ 21
NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED             equ 22
NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED               equ 23
NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT             equ 24
NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD             equ 25
NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT         equ 26
NET_NF_CONNTRACK_COUNT          equ 27
NET_NF_CONNTRACK_ICMPV6_TIMEOUT         equ 28
NET_NF_CONNTRACK_FRAG6_TIMEOUT          equ 29
NET_NF_CONNTRACK_FRAG6_LOW_THRESH               equ 30
NET_NF_CONNTRACK_FRAG6_HIGH_THRESH              equ 31
NET_NF_CONNTRACK_CHECKSUM               equ 32

NET_IPV4_FORWARD                equ 8
NET_IPV4_DYNADDR                equ 9

NET_IPV4_CONF           equ 16
NET_IPV4_NEIGH          equ 17
NET_IPV4_ROUTE          equ 18
NET_IPV4_FIB_HASH               equ 19
NET_IPV4_NETFILTER              equ 20

NET_IPV4_TCP_TIMESTAMPS         equ 33
NET_IPV4_TCP_WINDOW_SCALING             equ 34
NET_IPV4_TCP_SACK               equ 35
NET_IPV4_TCP_RETRANS_COLLAPSE           equ 36
NET_IPV4_DEFAULT_TTL            equ 37
NET_IPV4_AUTOCONFIG             equ 38
NET_IPV4_NO_PMTU_DISC           equ 39
NET_IPV4_TCP_SYN_RETRIES                equ 40
NET_IPV4_IPFRAG_HIGH_THRESH             equ 41
NET_IPV4_IPFRAG_LOW_THRESH              equ 42
NET_IPV4_IPFRAG_TIME            equ 43
NET_IPV4_TCP_MAX_KA_PROBES              equ 44
NET_IPV4_TCP_KEEPALIVE_TIME             equ 45
NET_IPV4_TCP_KEEPALIVE_PROBES           equ 46
NET_IPV4_TCP_RETRIES1           equ 47
NET_IPV4_TCP_RETRIES2           equ 48
NET_IPV4_TCP_FIN_TIMEOUT                equ 49
NET_IPV4_IP_MASQ_DEBUG          equ 50
NET_TCP_SYNCOOKIES              equ 51
NET_TCP_STDURG          equ 52
NET_TCP_RFC1337         equ 53
NET_TCP_SYN_TAILDROP            equ 54
NET_TCP_MAX_SYN_BACKLOG         equ 55
NET_IPV4_LOCAL_PORT_RANGE               equ 56
NET_IPV4_ICMP_ECHO_IGNORE_ALL           equ 57
NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS            equ 58
NET_IPV4_ICMP_SOURCEQUENCH_RATE         equ 59
NET_IPV4_ICMP_DESTUNREACH_RATE          equ 60
NET_IPV4_ICMP_TIMEEXCEED_RATE           equ 61
NET_IPV4_ICMP_PARAMPROB_RATE            equ 62
NET_IPV4_ICMP_ECHOREPLY_RATE            equ 63
NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES              equ 64
NET_IPV4_IGMP_MAX_MEMBERSHIPS           equ 65
NET_TCP_TW_RECYCLE              equ 66
NET_IPV4_ALWAYS_DEFRAG          equ 67
NET_IPV4_TCP_KEEPALIVE_INTVL            equ 68
NET_IPV4_INET_PEER_THRESHOLD            equ 69
NET_IPV4_INET_PEER_MINTTL               equ 70
NET_IPV4_INET_PEER_MAXTTL               equ 71
NET_IPV4_INET_PEER_GC_MINTIME           equ 72
NET_IPV4_INET_PEER_GC_MAXTIME           equ 73
NET_TCP_ORPHAN_RETRIES          equ 74
NET_TCP_ABORT_ON_OVERFLOW               equ 75
NET_TCP_SYNACK_RETRIES          equ 76
NET_TCP_MAX_ORPHANS             equ 77
NET_TCP_MAX_TW_BUCKETS          equ 78
NET_TCP_FACK            equ 79
NET_TCP_REORDERING              equ 80
NET_TCP_ECN             equ 81
NET_TCP_DSACK           equ 82
NET_TCP_MEM             equ 83
NET_TCP_WMEM            equ 84
NET_TCP_RMEM            equ 85
NET_TCP_APP_WIN         equ 86
NET_TCP_ADV_WIN_SCALE           equ 87
NET_IPV4_NONLOCAL_BIND          equ 88
NET_IPV4_ICMP_RATELIMIT         equ 89
NET_IPV4_ICMP_RATEMASK          equ 90
NET_TCP_TW_REUSE                equ 91
NET_TCP_FRTO            equ 92
NET_TCP_LOW_LATENCY             equ 93
NET_IPV4_IPFRAG_SECRET_INTERVAL         equ 94
NET_IPV4_IGMP_MAX_MSF           equ 96
NET_TCP_NO_METRICS_SAVE         equ 97
NET_TCP_DEFAULT_WIN_SCALE               equ 105
NET_TCP_MODERATE_RCVBUF         equ 106
NET_TCP_TSO_WIN_DIVISOR         equ 107
NET_TCP_BIC_BETA                equ 108
NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR         equ 109
NET_TCP_CONG_CONTROL            equ 110
NET_TCP_ABC             equ 111
NET_IPV4_IPFRAG_MAX_DIST                equ 112
 NET_TCP_MTU_PROBING            equ 113
NET_TCP_BASE_MSS                equ 114
NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS          equ 115
NET_TCP_DMA_COPYBREAK           equ 116
NET_TCP_SLOW_START_AFTER_IDLE           equ 117

NET_IPV4_ROUTE_FLUSH            equ 1
NET_IPV4_ROUTE_MIN_DELAY                equ 2
NET_IPV4_ROUTE_MAX_DELAY                equ 3
NET_IPV4_ROUTE_GC_THRESH                equ 4
NET_IPV4_ROUTE_MAX_SIZE         equ 5
NET_IPV4_ROUTE_GC_MIN_INTERVAL          equ 6
NET_IPV4_ROUTE_GC_TIMEOUT               equ 7
NET_IPV4_ROUTE_GC_INTERVAL              equ 8
NET_IPV4_ROUTE_REDIRECT_LOAD            equ 9
NET_IPV4_ROUTE_REDIRECT_NUMBER          equ 10
NET_IPV4_ROUTE_REDIRECT_SILENCE         equ 11
NET_IPV4_ROUTE_ERROR_COST               equ 12
NET_IPV4_ROUTE_ERROR_BURST              equ 13
NET_IPV4_ROUTE_GC_ELASTICITY            equ 14
NET_IPV4_ROUTE_MTU_EXPIRES              equ 15
NET_IPV4_ROUTE_MIN_PMTU         equ 16
NET_IPV4_ROUTE_MIN_ADVMSS               equ 17
NET_IPV4_ROUTE_SECRET_INTERVAL          equ 18
NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS               equ 19

NET_PROTO_CONF_ALL              equ -2
NET_PROTO_CONF_DEFAULT          equ -3

NET_IPV4_CONF_FORWARDING                equ 1
NET_IPV4_CONF_MC_FORWARDING             equ 2
NET_IPV4_CONF_PROXY_ARP         equ 3
NET_IPV4_CONF_ACCEPT_REDIRECTS          equ 4
NET_IPV4_CONF_SECURE_REDIRECTS          equ 5
NET_IPV4_CONF_SEND_REDIRECTS            equ 6
NET_IPV4_CONF_SHARED_MEDIA              equ 7
NET_IPV4_CONF_RP_FILTER         equ 8
NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE               equ 9
NET_IPV4_CONF_BOOTP_RELAY               equ 10
NET_IPV4_CONF_LOG_MARTIANS              equ 11
NET_IPV4_CONF_TAG               equ 12
NET_IPV4_CONF_ARPFILTER         equ 13
NET_IPV4_CONF_MEDIUM_ID         equ 14
NET_IPV4_CONF_NOXFRM            equ 15
NET_IPV4_CONF_NOPOLICY          equ 16
NET_IPV4_CONF_FORCE_IGMP_VERSION                equ 17
NET_IPV4_CONF_ARP_ANNOUNCE              equ 18
NET_IPV4_CONF_ARP_IGNORE                equ 19
NET_IPV4_CONF_PROMOTE_SECONDARIES               equ 20
NET_IPV4_CONF_ARP_ACCEPT                equ 21

NET_IPV4_NF_CONNTRACK_MAX               equ 1
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT              equ 2
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV              equ 3
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED           equ 4
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT              equ 5
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT            equ 6
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK              equ 7
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT             equ 8
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE         equ 9
NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT               equ 10
NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM                equ 11
NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT              equ 12
NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT           equ 13
NET_IPV4_NF_CONNTRACK_BUCKETS           equ 14
NET_IPV4_NF_CONNTRACK_LOG_INVALID               equ 15
NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS           equ 16
NET_IPV4_NF_CONNTRACK_TCP_LOOSE         equ 17
NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL            equ 18
NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS           equ 19
 NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED              equ 20
 NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT         equ 21
 NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED               equ 22
 NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED         equ 23
 NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT               equ 24
 NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD               equ 25
 NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT           equ 26
NET_IPV4_NF_CONNTRACK_COUNT             equ 27
NET_IPV4_NF_CONNTRACK_CHECKSUM          equ 28

NET_IPV6_CONF           equ 16
NET_IPV6_NEIGH          equ 17
NET_IPV6_ROUTE          equ 18
NET_IPV6_ICMP           equ 19
NET_IPV6_BINDV6ONLY             equ 20
NET_IPV6_IP6FRAG_HIGH_THRESH            equ 21
NET_IPV6_IP6FRAG_LOW_THRESH             equ 22
NET_IPV6_IP6FRAG_TIME           equ 23
NET_IPV6_IP6FRAG_SECRET_INTERVAL                equ 24
NET_IPV6_MLD_MAX_MSF            equ 25

NET_IPV6_ROUTE_FLUSH            equ 1
NET_IPV6_ROUTE_GC_THRESH                equ 2
NET_IPV6_ROUTE_MAX_SIZE         equ 3
NET_IPV6_ROUTE_GC_MIN_INTERVAL          equ 4
NET_IPV6_ROUTE_GC_TIMEOUT               equ 5
NET_IPV6_ROUTE_GC_INTERVAL              equ 6
NET_IPV6_ROUTE_GC_ELASTICITY            equ 7
NET_IPV6_ROUTE_MTU_EXPIRES              equ 8
NET_IPV6_ROUTE_MIN_ADVMSS               equ 9
NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS               equ 10

NET_IPV6_FORWARDING             equ 1
NET_IPV6_HOP_LIMIT              equ 2
NET_IPV6_MTU            equ 3
NET_IPV6_ACCEPT_RA              equ 4
NET_IPV6_ACCEPT_REDIRECTS               equ 5
NET_IPV6_AUTOCONF               equ 6
NET_IPV6_DAD_TRANSMITS          equ 7
NET_IPV6_RTR_SOLICITS           equ 8
NET_IPV6_RTR_SOLICIT_INTERVAL           equ 9
NET_IPV6_RTR_SOLICIT_DELAY              equ 10
NET_IPV6_USE_TEMPADDR           equ 11
NET_IPV6_TEMP_VALID_LFT         equ 12
NET_IPV6_TEMP_PREFERED_LFT              equ 13
NET_IPV6_REGEN_MAX_RETRY                equ 14
NET_IPV6_MAX_DESYNC_FACTOR              equ 15
NET_IPV6_MAX_ADDRESSES          equ 16
NET_IPV6_FORCE_MLD_VERSION              equ 17
NET_IPV6_ACCEPT_RA_DEFRTR               equ 18
NET_IPV6_ACCEPT_RA_PINFO                equ 19
NET_IPV6_ACCEPT_RA_RTR_PREF             equ 20
NET_IPV6_RTR_PROBE_INTERVAL             equ 21
NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN             equ 22

NET_IPV6_ICMP_RATELIMIT         equ 1

NET_NEIGH_MCAST_SOLICIT         equ 1
NET_NEIGH_UCAST_SOLICIT         equ 2
NET_NEIGH_APP_SOLICIT           equ 3
NET_NEIGH_RETRANS_TIME          equ 4
NET_NEIGH_REACHABLE_TIME                equ 5
NET_NEIGH_DELAY_PROBE_TIME              equ 6
NET_NEIGH_GC_STALE_TIME         equ 7
NET_NEIGH_UNRES_QLEN            equ 8
NET_NEIGH_PROXY_QLEN            equ 9
NET_NEIGH_ANYCAST_DELAY         equ 10
NET_NEIGH_PROXY_DELAY           equ 11
NET_NEIGH_LOCKTIME              equ 12
NET_NEIGH_GC_INTERVAL           equ 13
NET_NEIGH_GC_THRESH1            equ 14
NET_NEIGH_GC_THRESH2            equ 15
NET_NEIGH_GC_THRESH3            equ 16
NET_NEIGH_RETRANS_TIME_MS               equ 17
NET_NEIGH_REACHABLE_TIME_MS             equ 18

NET_DCCP_DEFAULT                equ 1

NET_DCCP_DEFAULT_SEQ_WINDOW             equ  1
NET_DCCP_DEFAULT_RX_CCID                equ  2
NET_DCCP_DEFAULT_TX_CCID                equ  3
NET_DCCP_DEFAULT_ACK_RATIO              equ  4
NET_DCCP_DEFAULT_SEND_ACKVEC            equ  5
NET_DCCP_DEFAULT_SEND_NDP               equ  6

NET_IPX_PPROP_BROADCASTING              equ 1
NET_IPX_FORWARDING              equ 2

NET_LLC2                equ 1
NET_LLC_STATION         equ 2

NET_LLC2_TIMEOUT                equ 1

NET_LLC_STATION_ACK_TIMEOUT             equ 1

NET_LLC2_ACK_TIMEOUT            equ 1
NET_LLC2_P_TIMEOUT              equ 2
NET_LLC2_REJ_TIMEOUT            equ 3
NET_LLC2_BUSY_TIMEOUT           equ 4

NET_ATALK_AARP_EXPIRY_TIME              equ 1
NET_ATALK_AARP_TICK_TIME                equ 2
NET_ATALK_AARP_RETRANSMIT_LIMIT         equ 3
NET_ATALK_AARP_RESOLVE_TIME             equ 4

NET_NETROM_DEFAULT_PATH_QUALITY         equ 1
NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER equ 2
NET_NETROM_NETWORK_TTL_INITIALISER      equ 3
NET_NETROM_TRANSPORT_TIMEOUT            equ 4
NET_NETROM_TRANSPORT_MAXIMUM_TRIES      equ 5
NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY  equ 6
NET_NETROM_TRANSPORT_BUSY_DELAY         equ 7
NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE              equ 8
NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT                equ 9
NET_NETROM_ROUTING_CONTROL              equ 10
NET_NETROM_LINK_FAILS_COUNT             equ 11
NET_NETROM_RESET                equ 12

NET_AX25_IP_DEFAULT_MODE        equ 1
NET_AX25_DEFAULT_MODE           equ 2
NET_AX25_BACKOFF_TYPE           equ 3
NET_AX25_CONNECT_MODE           equ 4
NET_AX25_STANDARD_WINDOW        equ 5
NET_AX25_EXTENDED_WINDOW        equ 6
NET_AX25_T1_TIMEOUT             equ 7
NET_AX25_T2_TIMEOUT             equ 8
NET_AX25_T3_TIMEOUT             equ 9
NET_AX25_IDLE_TIMEOUT           equ 10
NET_AX25_N2             equ 11
NET_AX25_PACLEN         equ 12
NET_AX25_PROTOCOL               equ 13
NET_AX25_DAMA_SLAVE_TIMEOUT             equ 14

NET_ROSE_RESTART_REQUEST_TIMEOUT        equ 1
NET_ROSE_CALL_REQUEST_TIMEOUT           equ 2
NET_ROSE_RESET_REQUEST_TIMEOUT          equ 3
NET_ROSE_CLEAR_REQUEST_TIMEOUT          equ 4
NET_ROSE_ACK_HOLD_BACK_TIMEOUT          equ 5
NET_ROSE_ROUTING_CONTROL                equ 6
NET_ROSE_LINK_FAIL_TIMEOUT              equ 7
NET_ROSE_MAX_VCS                equ 8
NET_ROSE_WINDOW_SIZE            equ 9
NET_ROSE_NO_ACTIVITY_TIMEOUT            equ 10

NET_X25_RESTART_REQUEST_TIMEOUT         equ 1
NET_X25_CALL_REQUEST_TIMEOUT            equ 2
NET_X25_RESET_REQUEST_TIMEOUT           equ 3
NET_X25_CLEAR_REQUEST_TIMEOUT           equ 4
NET_X25_ACK_HOLD_BACK_TIMEOUT           equ 5

NET_TR_RIF_TIMEOUT              equ 1

NET_DECNET_NODE_TYPE            equ  1
NET_DECNET_NODE_ADDRESS         equ  2
NET_DECNET_NODE_NAME            equ  3
NET_DECNET_DEFAULT_DEVICE       equ  4
NET_DECNET_TIME_WAIT            equ  5
NET_DECNET_DN_COUNT             equ  6
NET_DECNET_DI_COUNT             equ  7
NET_DECNET_DR_COUNT             equ  8
NET_DECNET_DST_GC_INTERVAL      equ  9
NET_DECNET_CONF                 equ  10
NET_DECNET_NO_FC_MAX_CWND       equ  11
NET_DECNET_MEM          equ  12
NET_DECNET_RMEM                 equ  13
NET_DECNET_WMEM                 equ  14
NET_DECNET_DEBUG_LEVEL          equ  255

NET_DECNET_CONF_LOOPBACK        equ  -2
NET_DECNET_CONF_DDCMP           equ  -3
NET_DECNET_CONF_PPP             equ  -4
NET_DECNET_CONF_X25             equ  -5
NET_DECNET_CONF_GRE             equ  -6
NET_DECNET_CONF_ETHER           equ  -7

NET_DECNET_CONF_DEV_PRIORITY    equ  1
NET_DECNET_CONF_DEV_T1          equ  2
NET_DECNET_CONF_DEV_T2          equ  3
NET_DECNET_CONF_DEV_T3          equ  4
NET_DECNET_CONF_DEV_FORWARDING  equ  5
NET_DECNET_CONF_DEV_BLKSIZE     equ  6
NET_DECNET_CONF_DEV_STATE       equ  7

NET_SCTP_RTO_INITIAL            equ  1
NET_SCTP_RTO_MIN                equ  2
NET_SCTP_RTO_MAX                equ  3
NET_SCTP_RTO_ALPHA              equ  4
NET_SCTP_RTO_BETA               equ  5
NET_SCTP_VALID_COOKIE_LIFE       equ   6
NET_SCTP_ASSOCIATION_MAX_RETRANS equ   7
NET_SCTP_PATH_MAX_RETRANS        equ   8
NET_SCTP_MAX_INIT_RETRANSMITS    equ   9
NET_SCTP_HB_INTERVAL             equ  10
NET_SCTP_PRESERVE_ENABLE         equ  11
NET_SCTP_MAX_BURST               equ  12
NET_SCTP_ADDIP_ENABLE           equ  13
NET_SCTP_PRSCTP_ENABLE          equ  14
NET_SCTP_SNDBUF_POLICY          equ  15
NET_SCTP_SACK_TIMEOUT           equ  16
NET_SCTP_RCVBUF_POLICY          equ  17

NET_BRIDGE_NF_CALL_ARPTABLES            equ  1
NET_BRIDGE_NF_CALL_IPTABLES             equ  2
NET_BRIDGE_NF_CALL_IP6TABLES            equ  3
NET_BRIDGE_NF_FILTER_VLAN_TAGGED        equ  4

FS_NRINODE              equ 1
FS_STATINODE            equ 2
FS_MAXINODE             equ 3
FS_NRDQUOT              equ 4
FS_MAXDQUOT             equ 5
FS_NRFILE               equ 6
FS_MAXFILE              equ 7
FS_DENTRY               equ 8
FS_NRSUPER              equ 9
FS_MAXSUPER             equ 10
FS_OVERFLOWUID          equ 11
FS_OVERFLOWGID          equ 12
FS_LEASES               equ 13
FS_DIR_NOTIFY           equ 14
FS_LEASE_TIME           equ 15
FS_DQSTATS              equ 16
FS_XFS                  equ 17
FS_AIO_NR               equ 18
FS_AIO_MAX_NR           equ 19
FS_INOTIFY              equ 20

FS_DQ_LOOKUPS           equ  1
FS_DQ_DROPS             equ  2
FS_DQ_READS             equ  3
FS_DQ_WRITES            equ  4
FS_DQ_CACHE_HITS        equ  5
FS_DQ_ALLOCATED         equ  6
FS_DQ_FREE              equ  7
FS_DQ_SYNCS             equ  8
FS_DQ_WARNINGS          equ  9

DEV_CDROM               equ 1
DEV_HWMON               equ 2
DEV_PARPORT             equ 3
DEV_RAID                equ 4
DEV_MAC_HID             equ 5
DEV_SCSI                equ 6
DEV_IPMI                equ 7

DEV_CDROM_INFO          equ 1
DEV_CDROM_AUTOCLOSE     equ 2
DEV_CDROM_AUTOEJECT     equ 3
DEV_CDROM_DEBUG         equ 4
DEV_CDROM_LOCK          equ 5
DEV_CDROM_CHECK_MEDIA           equ 6

DEV_PARPORT_DEFAULT             equ -3

DEV_RAID_SPEED_LIMIT_MIN        equ 1
DEV_RAID_SPEED_LIMIT_MAX        equ 2

DEV_PARPORT_DEFAULT_TIMESLICE   equ 1
DEV_PARPORT_DEFAULT_SPINTIME    equ 2

DEV_PARPORT_SPINTIME    equ 1
DEV_PARPORT_BASE_ADDR   equ 2
DEV_PARPORT_IRQ         equ 3
DEV_PARPORT_DMA         equ 4
DEV_PARPORT_MODES       equ 5
DEV_PARPORT_DEVICES     equ 6
DEV_PARPORT_AUTOPROBE   equ 16

DEV_PARPORT_DEVICES_ACTIVE      equ -3

DEV_PARPORT_DEVICE_TIMESLICE    equ 1

DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES       equ 1
DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES              equ 2
DEV_MAC_HID_MOUSE_BUTTON_EMULATION              equ 3
DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE               equ 4
DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE               equ 5
DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES            equ 6

DEV_SCSI_LOGGING_LEVEL          equ 1

DEV_IPMI_POWEROFF_POWERCYCLE    equ 1

ABI_DEFHANDLER_COFF     equ 1
ABI_DEFHANDLER_ELF      equ 2
ABI_DEFHANDLER_LCALL7   equ 3
ABI_DEFHANDLER_LIBCSO   equ 4
ABI_TRACE               equ 5
ABI_FAKE_UTSNAME        equ 6

F_GETLK64               equ 12
F_SETLK64               equ 13
F_SETLKW64              equ 14

SIGEV_SIGNAL            equ 0
SIGEV_NONE              equ 1
SIGEV_THREAD            equ 2
SIGEV_THREAD_ID         equ 4

RTF_UP                  equ 0x0001
RTF_GATEWAY             equ 0x0002
RTF_HOST                equ 0x0004
RTF_REINSTATE           equ 0x0008
RTF_DYNAMIC             equ 0x0010
RTF_MODIFIED            equ 0x0020
RTF_MTU                 equ 0x0040
RTF_MSS                 equ RTF_MTU
RTF_WINDOW              equ 0x0080
RTF_IRTT                equ 0x0100
RTF_REJECT              equ 0x0200

IFNAMSIZ                equ 16

IFF_UP                  equ 0x1
IFF_BROADCAST           equ 0x2
IFF_DEBUG               equ 0x4
IFF_LOOPBACK            equ 0x8
IFF_POINTOPOINT         equ 0x10
IFF_NOTRAILERS          equ 0x20
IFF_RUNNING             equ 0x40
IFF_NOARP               equ 0x80
IFF_PROMISC             equ 0x100
IFF_ALLMULTI            equ 0x200

IFF_MASTER              equ 0x400
IFF_SLAVE               equ 0x800

IFF_MULTICAST           equ 0x1000

IFF_PORTSEL             equ 0x2000
IFF_AUTOMEDIA           equ 0x4000
IFF_DYNAMIC             equ 0x8000

IFF_LOWER_UP            equ 0x10000
IFF_DORMANT             equ 0x20000

IFF_VOLATILE            equ (IFF_LOOPBACK or IFF_POINTOPOINT or IFF_BROADCAST or IFF_MASTER or IFF_SLAVE or IFF_RUNNING or IFF_LOWER_UP or IFF_DORMANT)

IFF_802_1Q_VLAN         equ 0x1
IFF_EBRIDGE             equ 0x2
IFF_SLAVE_INACTIVE      equ 0x4
IFF_MASTER_8023AD       equ 0x8
IFF_MASTER_ALB          equ 0x10
IFF_BONDING             equ 0x20
IFF_SLAVE_NEEDARP       equ 0x40

IF_GET_IFACE            equ 0x0001
IF_GET_PROTO            equ 0x0002

IF_IFACE_V35            equ 0x1000
IF_IFACE_V24            equ 0x1001
IF_IFACE_X21            equ 0x1002
IF_IFACE_T1             equ 0x1003
IF_IFACE_E1             equ 0x1004
IF_IFACE_SYNC_SERIAL    equ 0x1005
IF_IFACE_X21D           equ 0x1006

IF_PROTO_HDLC           equ 0x2000
IF_PROTO_PPP            equ 0x2001
IF_PROTO_CISCO          equ 0x2002
IF_PROTO_FR             equ 0x2003
IF_PROTO_FR_ADD_PVC     equ 0x2004
IF_PROTO_FR_DEL_PVC     equ 0x2005
IF_PROTO_X25            equ 0x2006
IF_PROTO_HDLC_ETH       equ 0x2007
IF_PROTO_FR_ADD_ETH_PVC equ 0x2008
IF_PROTO_FR_DEL_ETH_PVC equ 0x2009
IF_PROTO_FR_PVC         equ 0x200A
IF_PROTO_FR_ETH_PVC     equ 0x200B
IF_PROTO_RAW            equ 0x200C

IF_OPER_UNKNOWN         equ 0
IF_OPER_NOTPRESENT      equ 1
IF_OPER_DOWN            equ 2
IF_OPER_LOWERLAYERDOWN  equ 3
IF_OPER_TESTING         equ 4
IF_OPER_DORMANT         equ 5
IF_OPER_UP              equ 6

ARPHRD_NETROM           equ 0
ARPHRD_ETHER            equ 1
ARPHRD_EETHER           equ 2
ARPHRD_AX25             equ 3
ARPHRD_PRONET           equ 4
ARPHRD_CHAOS            equ 5
ARPHRD_IEEE802          equ 6
ARPHRD_ARCNET           equ 7
ARPHRD_APPLETLK         equ 8
ARPHRD_DLCI             equ 15
ARPHRD_ATM              equ 19
ARPHRD_METRICOM         equ 23
ARPHRD_IEEE1394         equ 24
ARPHRD_EUI64            equ 27
ARPHRD_INFINIBAND       equ 32

ARPHRD_SLIP             equ 256
ARPHRD_CSLIP            equ 257
ARPHRD_SLIP6            equ 258
ARPHRD_CSLIP6           equ 259
ARPHRD_RSRVD            equ 260
ARPHRD_ADAPT            equ 264
ARPHRD_ROSE             equ 270
ARPHRD_X25              equ 271
ARPHRD_HWX25            equ 272
ARPHRD_PPP              equ 512
ARPHRD_CISCO            equ 513
ARPHRD_HDLC             equ ARPHRD_CISCO
ARPHRD_LAPB             equ 516
ARPHRD_DDCMP            equ 517
ARPHRD_RAWHDLC          equ 518
ARPHRD_TUNNEL           equ 768
ARPHRD_TUNNEL6          equ 769
ARPHRD_FRAD             equ 770
ARPHRD_SKIP             equ 771
ARPHRD_LOOPBACK         equ 772
ARPHRD_LOCALTLK         equ 773
ARPHRD_FDDI             equ 774
ARPHRD_BIF              equ 775
ARPHRD_SIT              equ 776
ARPHRD_IPDDP            equ 777
ARPHRD_IPGRE            equ 778
ARPHRD_PIMREG           equ 779
ARPHRD_HIPPI            equ 780
ARPHRD_ASH              equ 781
ARPHRD_ECONET           equ 782
ARPHRD_IRDA             equ 783
ARPHRD_FCPP             equ 784
ARPHRD_FCAL             equ 785
ARPHRD_FCPL             equ 786
ARPHRD_FCFABRIC         equ 787
ARPHRD_IEEE802_TR       equ 800
ARPHRD_IEEE80211        equ 801
ARPHRD_IEEE80211_PRISM  equ 802
ARPHRD_IEEE80211_RADIOTAP       equ 803

ARPHRD_VOID             equ 0xFFFF
ARPHRD_NONE             equ 0xFFFE

ARPOP_REQUEST           equ 1
ARPOP_REPLY             equ 2
ARPOP_RREQUEST          equ 3
ARPOP_RREPLY            equ 4
ARPOP_InREQUEST         equ 8
ARPOP_InREPLY           equ 9
ARPOP_NAK               equ 10

ATF_COM                 equ 0x02
ATF_PERM                equ 0x04
ATF_PUBL                equ 0x08
ATF_USETRAILERS         equ 0x10
ATF_NETMASK             equ 0x20
ATF_DONTPUB             equ 0x40

GIO_FONT        equ 0x4B60
PIO_FONT        equ 0x4B61

GIO_FONTX       equ 0x4B6B
PIO_FONTX       equ 0x4B6C

PIO_FONTRESET   equ 0x4B6D

GIO_CMAP        equ 0x4B70
PIO_CMAP        equ 0x4B71

KIOCSOUND       equ 0x4B2F
KDMKTONE        equ 0x4B30

KDGETLED        equ 0x4B31
KDSETLED        equ 0x4B32
LED_SCR         equ 0x01
LED_NUM         equ 0x02
LED_CAP         equ 0x04

KDGKBTYPE       equ 0x4B33
KB_84           equ 0x01
KB_101          equ 0x02
KB_OTHER        equ 0x03

KDADDIO         equ 0x4B34
KDDELIO         equ 0x4B35
KDENABIO        equ 0x4B36
KDDISABIO       equ 0x4B37

KDSETMODE       equ 0x4B3A
KD_TEXT         equ 0x00
KD_GRAPHICS     equ 0x01
KD_TEXT0        equ 0x02
KD_TEXT1        equ 0x03
KDGETMODE       equ 0x4B3B

KDMAPDISP       equ 0x4B3C
KDUNMAPDISP     equ 0x4B3D

E_TABSZ         equ 256
GIO_SCRNMAP     equ 0x4B40
PIO_SCRNMAP     equ 0x4B41
GIO_UNISCRNMAP  equ 0x4B69
PIO_UNISCRNMAP  equ 0x4B6A

GIO_UNIMAP      equ 0x4B66

PIO_UNIMAP      equ 0x4B67
PIO_UNIMAPCLR   equ 0x4B68

UNI_DIRECT_BASE equ 0xF000
UNI_DIRECT_MASK equ 0x01FF

K_RAW           equ 0x00
K_XLATE         equ 0x01
K_MEDIUMRAW     equ 0x02
K_UNICODE       equ 0x03
KDGKBMODE       equ 0x4B44
KDSKBMODE       equ 0x4B45

K_METABIT       equ 0x03
K_ESCPREFIX     equ 0x04
KDGKBMETA       equ 0x4B62
KDSKBMETA       equ 0x4B63

K_SCROLLLOCK    equ 0x01
K_NUMLOCK       equ 0x02
K_CAPSLOCK      equ 0x04
KDGKBLED        equ 0x4B64
KDSKBLED        equ 0x4B65

K_NORMTAB       equ 0x00
K_SHIFTTAB      equ 0x01
K_ALTTAB        equ 0x02
K_ALTSHIFTTAB   equ 0x03

KDGKBENT        equ 0x4B46
KDSKBENT        equ 0x4B47
KDGKBSENT       equ 0x4B48
KDSKBSENT       equ 0x4B49
KDGKBDIACR      equ 0x4B4A
KDSKBDIACR      equ 0x4B4B
KDGETKEYCODE    equ 0x4B4C
KDSETKEYCODE    equ 0x4B4D
KDSIGACCEPT     equ 0x4B4E
KDKBDREP        equ 0x4B52
KDFONTOP        equ 0x4B72

KD_FONT_OP_SET          equ 0
KD_FONT_OP_GET          equ 1
KD_FONT_OP_SET_DEFAULT  equ 2
KD_FONT_OP_COPY         equ 3

KD_FONT_FLAG_DONT_RECALC        equ 1

VT_AUTO                 equ equ 0x00
VT_PROCESS              equ equ 0x01
VT_ACKACQ               equ equ 0x02
MIN_NR_CONSOLES         equ equ 1
MAX_NR_CONSOLES         equ equ 63
MAX_NR_USER_CONSOLES    equ equ 63

VT_OPENQRY              equ 0x5600
VT_GETMODE              equ 0x5601
VT_SETMODE              equ 0x5602
VT_GETSTATE             equ 0x5603
VT_SENDSIG              equ 0x5604
VT_RELDISP              equ 0x5605
VT_ACTIVATE             equ 0x5606
VT_WAITACTIVE           equ 0x5607
VT_DISALLOCATE          equ 0x5608
VT_RESIZEX              equ 0x560A
VT_LOCKSWITCH           equ 0x560B
VT_UNLOCKSWITCH         equ 0x560C
VT_GETHIFONTMASK        equ 0x560D

EQL_DEFAULT_SLAVE_PRIORITY equ 28800
EQL_DEFAULT_MAX_SLAVES     equ 4
EQL_DEFAULT_MTU            equ 576
EQL_DEFAULT_RESCHED_IVAL   equ 100

EQL_ENSLAVE             equ (SIOCDEVPRIVATE)
EQL_EMANCIPATE          equ (SIOCDEVPRIVATE + 1)
EQL_GETSLAVECFG         equ (SIOCDEVPRIVATE + 2)
EQL_SETSLAVECFG         equ (SIOCDEVPRIVATE + 3)
EQL_GETMASTRCFG         equ (SIOCDEVPRIVATE + 4)
EQL_SETMASTRCFG         equ (SIOCDEVPRIVATE + 5)

BLKROSET        equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (93 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKROGET        equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (94 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKRRPART       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (95 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKGETSIZE      equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (96 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKFLSBUF       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (97 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKRASET        equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (98 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKRAGET        equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (99 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKFRASET       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (100 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKFRAGET       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (101 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKSECTSET      equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (102 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKSECTGET      equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (103 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKSSZGET       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (104 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKPG           equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (105 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKELVGET       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (106 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKELVSET       equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (107 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKBSZGET       equ ((_IOC_READ shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (112 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
BLKBSZSET       equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (113 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
BLKGETSIZE64    equ ((_IOC_READ shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (114 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
BLKTRACESETUP   equ (((_IOC_READ or _IOC_WRITE) shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (115 shl _IOC_NRSHIFT) or (62 shl _IOC_SIZESHIFT))
BLKTRACESTART   equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (116 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKTRACESTOP    equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (117 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BLKTRACETEARDOWN equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x12 shl _IOC_TYPESHIFT) or (118 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
BMAP_IOCTL      equ 1
FIBMAP          equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x0 shl _IOC_TYPESHIFT) or (1 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))
FIGETBSZ        equ ((_IOC_NONE shl _IOC_DIRSHIFT) or (0x0 shl _IOC_TYPESHIFT) or (2 shl _IOC_NRSHIFT) or (0 shl _IOC_SIZESHIFT))

FS_IOC_GETFLAGS equ ((_IOC_READ shl _IOC_DIRSHIFT) or ('f' shl _IOC_TYPESHIFT) or (1 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FS_IOC_SETFLAGS equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ('f' shl _IOC_TYPESHIFT) or (2 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FS_IOC_GETVERSION equ ((_IOC_READ shl _IOC_DIRSHIFT) or ('v' shl _IOC_TYPESHIFT) or (1 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FS_IOC_SETVERSION equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ('v' shl _IOC_TYPESHIFT) or (2 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FS_IOC32_GETFLAGS equ ((_IOC_READ shl _IOC_DIRSHIFT) or ('f' shl _IOC_TYPESHIFT) or (1 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FS_IOC32_SETFLAGS equ ((_IOC_WRIE shl _IOC_DIRSHIFT) or ('f' shl _IOC_TYPESHIFT) or (2 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FS_IOC32_GETVERSION equ ((_IOC_READ shl _IOC_DIRSHIFT) or ('v' shl _IOC_TYPESHIFT) or (1 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))
FS_IOC32_SETVERSION equ ((_IOC_WRITE shl _IOC_DIRSHIFT) or ('v' shl _IOC_TYPESHIFT) or (2 shl _IOC_NRSHIFT) or (4 shl _IOC_SIZESHIFT))

NR_OPEN         equ (1024*1024)
INR_OPEN        equ 1024

BLOCK_SIZE_BITS equ 10
BLOCK_SIZE      equ (1 shl BLOCK_SIZE_BITS)

SEEK_SET        equ 0
SEEK_CUR        equ 1
SEEK_END        equ 2

NR_FILE         equ 8192

MAY_EXEC        equ 1
MAY_WRITE       equ 2
MAY_READ        equ 4
MAY_APPEND      equ 8

FMODE_READ      equ 1
FMODE_WRITE     equ 2

FMODE_LSEEK     equ 4
FMODE_PREAD     equ 8
FMODE_PWRITE    equ FMODE_PREAD

FMODE_EXEC      equ 16

RW_MASK         equ 1
RWA_MASK        equ 2
READ            equ 0
WRITE           equ 1
READA           equ 2
SWRITE          equ 3
READ_SYNC       equ (READ or (1 shl BIO_RW_SYNC))
READ_META       equ (READ or (1 shl BIO_RW_META))
WRITE_SYNC      equ (WRITE or (1 shl BIO_RW_SYNC))
WRITE_BARRIER   equ ((1 shl BIO_RW) | (1 shl BIO_RW_BARRIER))

SEL_IN          equ 1
SEL_OUT         equ 2
SEL_EX          equ 4

FS_REQUIRES_DEV equ 1
FS_BINARY_MOUNTDATA equ 2
FS_REVAL_DOT    equ 16384
FS_RENAME_DOES_D_MOVE   equ 32768

MS_RDONLY       equ 1
MS_NOSUID       equ 2
MS_NODEV        equ 4
MS_NOEXEC       equ 8
MS_SYNCHRONOUS  equ 16
MS_REMOUNT      equ 32
MS_MANDLOCK     equ 64
MS_DIRSYNC      equ 128
MS_NOATIME      equ 1024
MS_NODIRATIME   equ 2048
MS_BIND         equ 4096
MS_MOVE         equ 8192
MS_REC          equ 16384
MS_VERBOSE      equ 32768

MS_SILENT       equ 32768
MS_POSIXACL     equ (1 or 16)
MS_UNBINDABLE   equ (1 or 17)
MS_PRIVATE      equ (1 or 18)
MS_SLAVE        equ (1 or 19)
MS_SHARED       equ (1 or 20)
MS_RELATIME     equ (1 or 21)
MS_ACTIVE       equ (1 or 30)
MS_NOUSER       equ (1 or 31)

MS_RMT_MASK     equ (MS_RDONLY or MS_SYNCHRONOUS or MS_MANDLOCK)

MS_MGC_VAL      equ 0xC0ED0000
MS_MGC_MSK      equ 0xffff0000

S_SYNC          equ 1
S_NOATIME       equ 2
S_APPEND        equ 4
S_IMMUTABLE     equ 8
S_DEAD          equ 16
S_NOQUOTA       equ 32
S_DIRSYNC       equ 64
S_NOCMTIME      equ 128
S_SWAPFILE      equ 256
S_PRIVATE       equ 512

FS_SECRM_FL                     equ 0x00000001
FS_UNRM_FL                      equ 0x00000002
FS_COMPR_FL                     equ 0x00000004
FS_SYNC_FL                      equ 0x00000008
FS_IMMUTABLE_FL                 equ 0x00000010
FS_APPEND_FL                    equ 0x00000020
FS_NODUMP_FL                    equ 0x00000040
FS_NOATIME_FL                   equ 0x00000080
FS_DIRTY_FL                     equ 0x00000100
FS_COMPRBLK_FL                  equ 0x00000200
FS_NOCOMP_FL                    equ 0x00000400
FS_ECOMPR_FL                    equ 0x00000800
FS_BTREE_FL                     equ 0x00001000
FS_INDEX_FL                     equ 0x00001000
FS_IMAGIC_FL                    equ 0x00002000
FS_JOURNAL_DATA_FL              equ 0x00004000
FS_NOTAIL_FL                    equ 0x00008000
FS_DIRSYNC_FL                   equ 0x00010000
FS_TOPDIR_FL                    equ 0x00020000
FS_EXTENT_FL                    equ 0x00080000
FS_DIRECTIO_FL                  equ 0x00100000
FS_RESERVED_FL                  equ 0x80000000

FS_FL_USER_VISIBLE              equ 0x0003DFFF
FS_FL_USER_MODIFIABLE           equ 0x000380FF

SYNC_FILE_RANGE_WAIT_BEFORE     equ 1
SYNC_FILE_RANGE_WRITE           equ 2
SYNC_FILE_RANGE_WAIT_AFTER      equ 4

ATTR_MODE       equ 1
ATTR_UID        equ 2
ATTR_GID        equ 4
ATTR_SIZE       equ 8
ATTR_ATIME      equ 16
ATTR_MTIME      equ 32
ATTR_CTIME      equ 64
ATTR_ATIME_SET  equ 128
ATTR_MTIME_SET  equ 256
ATTR_FORCE      equ 512
ATTR_ATTR_FLAG  equ 1024
ATTR_KILL_SUID  equ 2048
ATTR_KILL_SGID  equ 4096
ATTR_FILE       equ 8192

AOP_WRITEPAGE_ACTIVATE  equ 0x80000
AOP_TRUNCATED_PAGE      equ 0x80001

PAGECACHE_TAG_DIRTY     equ 0
PAGECACHE_TAG_WRITEBACK equ 1

I_MUTEX_NORMAL  equ 0
I_MUTEX_PARENT  equ 1
I_MUTEX_CHILD   equ 2
I_MUTEX_XATTR   equ 3
I_MUTEX_QUOTA   equ 4

RA_FLAG_MISS    equ 0x01
RA_FLAG_INCACHE equ 0x02

MAX_NON_LFS     equ ((1 shl 31) - 1)

FL_POSIX        equ 1
FL_FLOCK        equ 2
FL_ACCESS       equ 8
FL_EXISTS       equ 16
FL_LEASE        equ 32
FL_CLOSE        equ 64
FL_SLEEP        equ 128

FASYNC_MAGIC    equ 0x4601

MNT_FORCE       equ 0x00000001
MNT_DETACH      equ 0x00000002
MNT_EXPIRE      equ 0x00000004

S_BIAS          equ (1 shl 30)

SB_UNFROZEN     equ 0
SB_FREEZE_WRITE equ 1
SB_FREEZE_TRANS equ 2

DT_UNKNOWN      equ 0
DT_FIFO         equ 1
DT_CHR          equ 2
DT_DIR          equ 4
DT_BLK          equ 6
DT_REG          equ 8
DT_LNK          equ 10
DT_SOCK         equ 12
DT_WHT          equ 14

OSYNC_METADATA  equ (1 shl 0)
OSYNC_DATA      equ (1 shl 1)
OSYNC_INODE     equ (1 shl 2)

HAVE_COMPAT_IOCTL equ 1
HAVE_UNLOCKED_IOCTL equ 1

I_DIRTY_SYNC    equ 1
I_DIRTY_DATASYNC equ 2
I_DIRTY_PAGES   equ 4
__I_LOCK        equ 3
I_LOCK          equ (1 shl __I_LOCK)
I_FREEING       equ 16
I_CLEAR         equ 32
I_NEW           equ 64
I_WILL_FREE     equ 128

I_DIRTY         equ (I_DIRTY_SYNC or I_DIRTY_DATASYNC or I_DIRTY_PAGES)

FALSE                   equ 0
TRUE                    equ 1
false                   equ FALSE
true                    equ TRUE
