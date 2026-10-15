/*
 * FUN_1006bc30 at 1006bc30
 * undefined FUN_1006bc30(void)
 * Address ranges: 1006bc30-1006bc67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bc30(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10066a40(*(undefined4 *)(param_1 + 4),uVar1);
  return uVar1;
}

