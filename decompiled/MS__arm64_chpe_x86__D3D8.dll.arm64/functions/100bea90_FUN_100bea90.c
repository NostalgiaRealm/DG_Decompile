/*
 * FUN_100bea90 at 100bea90
 * undefined FUN_100bea90(void)
 * Address ranges: 100bea90-100bead3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bea90(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_100b1ef0(*(int *)(param_1 + 0x10) + 0x58e0,&DAT_101290c0,param_2);
  }
  return uVar1;
}

