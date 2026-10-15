/*
 * FUN_18006560c at 18006560c
 * undefined8 * __fastcall FUN_18006560c(undefined8 param_1, undefined8 * param_2, longlong param_3, undefined4 param_4, char param_5)
 * Address ranges: 18006560c-180065667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18006560c(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             char param_5)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_c;
  
  uStack_24 = CONCAT31(uStack_24._1_3_,0xe4);
  if (param_5 == '\0') {
    local_28 = *(undefined4 *)(param_3 + 0xac);
    uStack_c = param_4;
  }
  else {
    local_28 = *(undefined4 *)(param_3 + 0xa8);
    uStack_c = 0xffffffff;
  }
  *param_2 = CONCAT44(uStack_24,local_28);
  param_2[1] = uStack_20;
  param_2[2] = CONCAT44(uStack_c,param_4);
  param_2[3] = CONCAT44(uStack_c,uStack_c);
  return param_2;
}

