/*
 * FUN_10069d20 at 10069d20
 * undefined FUN_10069d20(void)
 * Address ranges: 10069d20-10069d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10069d20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10054a30(*(undefined4 *)(param_1 + 4),&DAT_1009c530,uVar1,param_3,param_4);
  return uVar1;
}

