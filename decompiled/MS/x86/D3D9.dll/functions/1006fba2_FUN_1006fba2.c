/*
 * FUN_1006fba2 at 1006fba2
 * undefined __thiscall FUN_1006fba2(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1006fba2-1006fbcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006fba2(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x194) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,5,*(undefined1 *)(param_2 + 0x1ad));
    *(undefined4 *)(param_2 + 0x194) = uVar1;
  }
  return;
}

