/*
 * FUN_1005a267 at 1005a267
 * undefined __thiscall FUN_1005a267(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1005a267-1005a294
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a267(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x194) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,6,*(undefined1 *)(param_2 + 0x1aa));
    *(undefined4 *)(param_2 + 0x194) = uVar1;
  }
  return;
}

