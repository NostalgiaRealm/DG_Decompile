/*
 * FUN_10006027 at 10006027
 * undefined __thiscall FUN_10006027(void * this, uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10006027-1000605b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006027(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *this_00;
  uint uVar2;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    this_00 = *(int **)((int)this + 0xc);
    uVar2 = FUN_10008b77(this_00,param_1);
    (**(code **)(*this_00 + 0x6c))(uVar2,param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

