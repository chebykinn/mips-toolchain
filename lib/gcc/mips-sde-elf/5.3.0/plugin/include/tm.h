#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (((MASK_SPLIT_ADDRESSES)|MASK_EXPLICIT_RELOCS)|MASK_RELAX_PIC_CALLS)
#ifndef MIPS_ISA_DEFAULT
# define MIPS_ISA_DEFAULT 33
#endif
#ifndef MIPS_ABI_DEFAULT
# define MIPS_ABI_DEFAULT ABI_32
#endif
#ifdef IN_GCC
# include "options.h"
# include "insn-constants.h"
# include "config/elfos.h"
# include "config/newlib-stdint.h"
# include "config/vxworks-dummy.h"
# include "config/mips/mips.h"
# include "config/mips/elf.h"
# include "config/mips/n32-elf.h"
# include "config/mips/sde.h"
# include "config/mips/sdemtk.h"
# include "config/initfini-array.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-flags.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE
# include "insn-modes.h"
#endif
#if defined IN_GCC && defined GENERATOR_FILE && !defined BITS_PER_UNIT
#include "machmode.h"
#endif
# include "defaults.h"
#endif /* GCC_TM_H */
