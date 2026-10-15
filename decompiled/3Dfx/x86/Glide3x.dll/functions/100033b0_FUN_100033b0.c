/*
 * FUN_100033b0 at 100033b0
 * undefined4 * __fastcall FUN_100033b0(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100033b0-100033ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100033b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * DAT_1005a034 + param_1);
  FUN_10052930(puVar1,(undefined4 *)PTR_LAB_1005a030,DAT_1005a034);
  *(undefined4 *)(DAT_1005a038 + (int)puVar1) = param_4;
  *(undefined4 *)(DAT_1005a03c + (int)puVar1) = param_3;
  return puVar1;
}

