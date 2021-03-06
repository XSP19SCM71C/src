/*	$NetBSD: cpu_topology.h,v 1.1 2020/01/15 08:34:04 mrg Exp $	*/

/*
 * Copyright (c) 2020 Matthew R. Green
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _ARM_CPU_TOPOLOGY_H_
#define _ARM_CPU_TOPOLOGY_H_

/*
 * ARMv7 and ARMv8 compatible CPU topology support.
 *
 * arm_cpu_do_topology(cpuinfo)
 *
 * Call arm_cpu_do_topology() in cpu_attach() after making sure that
 * arm_cpu_mpidr() will work for this CPU, and it will split up
 * package/core/smt IDs.
 *
 * The CPU frontend can set the "capacity_dmips_mhz" property for
 * this CPU device, and arm_cpu_set_topology() will calculate the
 * best way to call cpu_topology_set() for the known system.
 *
 * arm_cpu_topology_set(cpuinfo, mpidr, slow)
 *
 * arm_cpu_topology_set() is provided for locore and the boot CPU,
 * and only works for the current CPU.
 */

#include <sys/param.h>
#include <sys/cpu.h>

void arm_cpu_do_topology(struct cpu_info * const);
void arm_cpu_topology_set(struct cpu_info * const, uint64_t, bool);

#endif /* _ARM_CPU_TOPOLOGY_H_ */
