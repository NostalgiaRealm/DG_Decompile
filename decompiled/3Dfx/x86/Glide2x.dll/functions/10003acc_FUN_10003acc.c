/*
 * FUN_10003acc at 10003acc
 * undefined4 __thiscall FUN_10003acc(void * this, int param_1)
 * Address ranges: 10003acc-10003b02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10003acc(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0xe0) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xdc) + uVar1 * 0x10) == param_1) {
        return *(undefined4 *)(*(int *)((int)this + 0xdc) + 8 + uVar1 * 0x10);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 0xe0));
  }
  return 0xffffffff;
}

