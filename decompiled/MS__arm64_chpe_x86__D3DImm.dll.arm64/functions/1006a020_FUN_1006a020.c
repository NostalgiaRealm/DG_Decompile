/*
 * FUN_1006a020 at 1006a020
 * undefined FUN_1006a020(void)
 * Address ranges: 1006a020-1006a067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006a020(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10054a30(*(undefined4 *)(param_1 + 4),&DAT_1009c540,uVar1,param_3,param_4);
  return uVar1;
}

