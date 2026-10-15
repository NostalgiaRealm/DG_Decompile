/*
 * FUN_180067464 at 180067464
 * undefined8 * __fastcall FUN_180067464(undefined8 param_1, undefined8 * param_2, longlong param_3, undefined4 param_4, byte param_5)
 * Address ranges: 180067464-1800674cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180067464(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             byte param_5)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_c;
  
  if ((param_5 < 9) && ((0x116U >> (param_5 & 0x1f) & 1) != 0)) {
    local_28 = *(undefined4 *)(param_3 + 0xa8);
    uStack_c = 0xffffffff;
  }
  else {
    local_28 = *(undefined4 *)(param_3 + 0xac);
    uStack_c = param_4;
  }
  uStack_24 = CONCAT31(uStack_24._1_3_,0xe4);
  *param_2 = CONCAT44(uStack_24,local_28);
  param_2[1] = uStack_20;
  param_2[2] = CONCAT44(uStack_c,param_4);
  param_2[3] = CONCAT44(uStack_c,uStack_c);
  return param_2;
}

