/*
 * FUN_100355fd at 100355fd
 * int __thiscall FUN_100355fd(void * this, int * param_1)
 * Address ranges: 100355fd-10035627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100355fd(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = -0x7ff8ffa9;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0x6c) {
      iVar1 = FUN_1003559c(this,param_1);
    }
    else {
      iVar1 = FUN_1002ad61(*(void **)this,param_1);
    }
  }
  return iVar1;
}

