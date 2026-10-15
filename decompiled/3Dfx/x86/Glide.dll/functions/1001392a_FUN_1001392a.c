/*
 * FUN_1001392a at 1001392a
 * undefined __thiscall FUN_1001392a(void * this, uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1001392a-1001395e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001392a(void *this,uint param_1,undefined4 param_2,undefined4 param_3)

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
    uVar2 = FUN_1001a058(this_00,param_1);
    (**(code **)(*this_00 + 0x5c))(uVar2,param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

