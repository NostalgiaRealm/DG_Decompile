/*
 * FUN_1006bbc0 at 1006bbc0
 * undefined FUN_1006bbc0(void)
 * Address ranges: 1006bbc0-1006bbfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bbc0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_100669a8(*(undefined4 *)(param_1 + 4),uVar1,param_3);
  return uVar1;
}

