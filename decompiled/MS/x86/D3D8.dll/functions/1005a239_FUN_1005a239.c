/*
 * FUN_1005a239 at 1005a239
 * undefined __thiscall FUN_1005a239(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1005a239-1005a266
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a239(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 400) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,5,*(undefined1 *)(param_2 + 0x1a9));
    *(undefined4 *)(param_2 + 400) = uVar1;
  }
  return;
}

