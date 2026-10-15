/*
 * FUN_1800424dc at 1800424dc
 * longlong * __fastcall FUN_1800424dc(longlong param_1, longlong * param_2, int param_3, longlong param_4, undefined8 param_5)
 * Address ranges: 1800424dc-180042522
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800424dc(longlong param_1,longlong *param_2,int param_3,longlong param_4,undefined8 param_5)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  FUN_180042578(param_1 + -0x40,&local_28,param_3,param_4,param_5);
  *param_2 = local_28;
  param_2[1] = local_20;
  param_2[2] = local_18;
  return param_2;
}

