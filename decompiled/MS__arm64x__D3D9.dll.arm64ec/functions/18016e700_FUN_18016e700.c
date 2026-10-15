/*
 * FUN_18016e700 at 18016e700
 * undefined FUN_18016e700(void)
 * Address ranges: 18016e700-18016e75f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18016e700(undefined4 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             uint param_5)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined4 local_4;
  
  if ((param_5 & 1) == 0) {
    local_20 = *(undefined4 *)(param_4 + 0xac);
    local_4 = param_1;
  }
  else {
    local_20 = *(undefined4 *)(param_4 + 0xa8);
    local_4 = 0xffffffff;
  }
  uStack_1c = CONCAT31(uStack_1c._1_3_,0xe4);
  param_3[1] = uStack_18;
  *param_3 = CONCAT44(uStack_1c,local_20);
  param_3[3] = CONCAT44(local_4,local_4);
  param_3[2] = CONCAT44(local_4,param_1);
  return param_3;
}

