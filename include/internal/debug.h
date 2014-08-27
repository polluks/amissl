#ifndef _DEBUG_H_
#define _DEBUG_H_

#ifdef __amigaos4__

#ifdef DEBUG
#include <interfaces/exec.h>
extern struct ExecIFace * __attribute__((force_no_baserel)) IExec;
#define kprintf (IExec->DebugPrintF)
#define traceline() (IExec->DebugPrintF)("%08x %s:%d\n",(IExec->FindTask)(NULL),__FILE__,__LINE__)
#else /* DEBUG */
#define kprintf(...) ((void)0)
#define traceline() ((void)0)
#endif /* DEBUG */

#else /* __amigaos4__ */

extern void kprintf(const char *fmt, ...);
#define traceline() kprintf("%08x %s:%d\n",FindTask(NULL),__FILE__,__LINE__)

#endif /* __amigaos4__ */

#endif /* _DEBUG_H_ */
