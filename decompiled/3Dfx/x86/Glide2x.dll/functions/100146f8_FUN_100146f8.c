/*
 * FUN_100146f8 at 100146f8
 * undefined __thiscall FUN_100146f8(void * this, int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 100146f8-10014724
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100146f8(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_10014725(this,param_1,param_2,param_3,0,0xff);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

