/*
 * FUN_100bbdb0 at 100bbdb0
 * undefined FUN_100bbdb0(void)
 * Address ranges: 100bbdb0-100bbdef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bbdb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (**(int **)(param_1 + -0x4e10) != 0) {
    iVar1 = **(int **)(param_1 + -0x4e10) + -8;
  }
  uVar2 = FUN_100bfc90(iVar1,param_2,param_3,param_4);
  return uVar2;
}

