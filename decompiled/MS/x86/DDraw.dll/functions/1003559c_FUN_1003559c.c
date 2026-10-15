/*
 * FUN_1003559c at 1003559c
 * int __thiscall FUN_1003559c(void * this, int * param_1)
 * Address ranges: 1003559c-100355fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003559c(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int local_80;
  int local_7c [30];
  
  iVar2 = -0x7ff8ffa9;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x6c)) {
    FUN_10060d45(local_7c,0,0x78);
    local_80 = 0x7c;
    iVar2 = FUN_1002ad61(*(void **)this,&local_80);
    if (iVar2 == 0) {
      cVar1 = FUN_10031887(&local_80,param_1);
      if (cVar1 == '\0') {
        iVar2 = -0x7ff8ffa9;
      }
    }
  }
  return iVar2;
}

