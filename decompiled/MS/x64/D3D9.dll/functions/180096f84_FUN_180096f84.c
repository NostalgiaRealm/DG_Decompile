/*
 * FUN_180096f84 at 180096f84
 * undefined8 * __fastcall FUN_180096f84(longlong param_1, undefined8 * param_2, longlong param_3)
 * Address ranges: 180096f84-180096fb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180096f84(longlong param_1,undefined8 *param_2,longlong param_3)

{
  tagRECT local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_1800e10b8(*(longlong *)(param_1 + 0x1cf10),&local_38,param_3);
  *param_2 = local_38._0_8_;
  param_2[1] = local_38._8_8_;
  param_2[2] = local_28;
  param_2[3] = uStack_20;
  return param_2;
}

