/*
 * FUN_100bbad0 at 100bbad0
 * undefined FUN_100bbad0(void)
 * Address ranges: 100bbad0-100bbb13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bbad0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_100afb60(*(int *)(param_1 + 0x10) + 0x74,&DAT_101290b0,param_2,0);
  }
  return uVar1;
}

