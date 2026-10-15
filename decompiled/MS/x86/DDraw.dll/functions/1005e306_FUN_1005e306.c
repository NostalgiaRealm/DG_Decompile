/*
 * FUN_1005e306 at 1005e306
 * undefined4 * __fastcall FUN_1005e306(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1005e306-1005e342
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1005e306(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * DAT_10069044 + param_1);
  FUN_10060d80(puVar1,(undefined4 *)PTR_LAB_10069040,DAT_10069044);
  *(undefined4 *)(DAT_10069048 + (int)puVar1) = param_4;
  *(undefined4 *)(DAT_1006904c + (int)puVar1) = param_3;
  return puVar1;
}

