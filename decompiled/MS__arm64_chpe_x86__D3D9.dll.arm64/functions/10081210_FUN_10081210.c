/*
 * FUN_10081210 at 10081210
 * undefined FUN_10081210(void)
 * Address ranges: 10081210-1008127f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_10081210(undefined4 param_1,undefined8 param_2,undefined8 *param_3,int param_4,uint param_5)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 uStack_18;
  undefined4 local_4;
  
  if ((param_5 & 1) == 0) {
    local_20 = *(undefined4 *)(param_4 + 0xa4);
    local_4 = param_1;
  }
  else {
    local_20 = *(undefined4 *)(param_4 + 0xa0);
    local_4 = 0xffffffff;
  }
  local_1c = CONCAT31(local_1c._1_3_,0xe4);
  param_3[1] = uStack_18;
  *param_3 = CONCAT44(local_1c,local_20);
  param_3[3] = CONCAT44(local_4,local_4);
  param_3[2] = CONCAT44(local_4,param_1);
  return param_3;
}

