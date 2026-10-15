/*
 * FUN_100522e0 at 100522e0
 * undefined FUN_100522e0(void)
 * Address ranges: 100522e0-10052317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100522e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_2 != 0) {
    uVar1 = FUN_1003a460(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  }
  return uVar1;
}

