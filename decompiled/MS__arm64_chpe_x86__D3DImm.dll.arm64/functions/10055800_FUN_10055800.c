/*
 * FUN_10055800 at 10055800
 * undefined FUN_10055800(void)
 * Address ranges: 10055800-10055833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055800(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != 0) {
    FUN_1004fdd0(*(undefined4 *)(param_1 + 0xa58),param_2);
    uVar1 = 0;
  }
  return uVar1;
}

