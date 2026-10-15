/*
 * FUN_1006fbd0 at 1006fbd0
 * undefined __thiscall FUN_1006fbd0(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1006fbd0-1006fbfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006fbd0(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x198) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,6,*(undefined1 *)(param_2 + 0x1ae));
    *(undefined4 *)(param_2 + 0x198) = uVar1;
  }
  return;
}

