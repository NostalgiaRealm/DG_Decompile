/*
 * FUN_10014a86 at 10014a86
 * undefined __thiscall FUN_10014a86(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 10014a86-10014ab2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014a86(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_10014ab3(this,param_1,param_2,param_3,0,0xff);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

