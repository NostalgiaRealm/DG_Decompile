/*
 * FUN_1000641c at 1000641c
 * undefined __thiscall FUN_1000641c(void * this, uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000641c-10006452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000641c(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    this_00 = *(int **)((int)this + 0xc);
    uVar3 = 0;
    uVar2 = FUN_10009384(this_00,param_1);
    (**(code **)(*this_00 + 0x68))(uVar2,param_2,param_3,uVar3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

