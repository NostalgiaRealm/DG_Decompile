/*
 * FUN_1003bc2c at 1003bc2c
 * undefined __thiscall FUN_1003bc2c(void * this, undefined4 param_1, int param_2)
 * Address ranges: 1003bc2c-1003bc59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bc2c(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x174) == 0) {
    uVar1 = (*(code *)**(undefined4 **)this)(param_1,param_2,5,*(undefined1 *)(param_2 + 0x18d));
    *(undefined4 *)(param_2 + 0x174) = uVar1;
  }
  return;
}

