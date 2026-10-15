/*
 * FUN_1006bfa0 at 1006bfa0
 * undefined FUN_1006bfa0(void)
 * Address ranges: 1006bfa0-1006bfdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bfa0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10067840(*(undefined4 *)(param_1 + 4),uVar1,param_3);
  return uVar1;
}

