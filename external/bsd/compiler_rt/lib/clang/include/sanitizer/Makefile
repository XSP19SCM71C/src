#	$NetBSD: Makefile,v 1.2 2019/08/15 16:31:17 kamil Exp $

TOPDIR=	${NETBSDSRCDIR}/sys/external/bsd/compiler_rt/dist

NOOBJ=	# defined

.PATH:	${TOPDIR}/include/sanitizer

INCS+=	allocator_interface.h
INCS+=	asan_interface.h
INCS+=	common_interface_defs.h
INCS+=	coverage_interface.h
#INCS+=	dfsan_interface.h # not supported
#INCS+=	esan_interface.h # not supported
#INCS+=	hwasan_interface.h # not supported
INCS+=	lsan_interface.h
INCS+=	msan_interface.h
INCS+=	netbsd_syscall_hooks.h
#INCS+=	scudo_interface.h # not ready
INCS+=	tsan_interface.h
INCS+=	tsan_interface_atomic.h

.include <bsd.own.mk>

INCSDIR=	/usr/lib/clang/7.0.0/include/sanitizer

.include <bsd.prog.mk>
