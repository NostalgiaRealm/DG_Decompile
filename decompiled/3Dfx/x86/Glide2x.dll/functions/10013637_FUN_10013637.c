/*
 * FUN_10013637 at 10013637
 * undefined __thiscall FUN_10013637(void * this, uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10013637-1001366b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10013637(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

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
    uVar2 = FUN_10019ccd(this_00,param_1);
    (**(code **)(*this_00 + 0x5c))(uVar2,param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

