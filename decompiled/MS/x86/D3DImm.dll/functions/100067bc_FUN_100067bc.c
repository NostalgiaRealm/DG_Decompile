/*
 * FUN_100067bc at 100067bc
 * undefined __thiscall FUN_100067bc(void * this, int param_1, undefined4 param_2)
 * Address ranges: 100067bc-100067fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100067bc(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x17c) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0x178) + uVar1 * 4) == param_1) {
        if (uVar1 == 0xffffffff) {
          return;
        }
        if (7 < (int)uVar1) {
          return;
        }
        (**(code **)(**(int **)((int)this + 0x14) + 0x68))(uVar1,param_2);
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 0x17c));
  }
  return;
}

