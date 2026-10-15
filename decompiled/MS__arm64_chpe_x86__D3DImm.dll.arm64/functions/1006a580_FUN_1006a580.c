/*
 * FUN_1006a580 at 1006a580
 * undefined FUN_1006a580(void)
 * Address ranges: 1006a580-1006a5c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006a580(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10054a30(*(undefined4 *)(param_1 + 4),&DAT_1009c550,uVar1,param_3,param_4);
  return uVar1;
}

