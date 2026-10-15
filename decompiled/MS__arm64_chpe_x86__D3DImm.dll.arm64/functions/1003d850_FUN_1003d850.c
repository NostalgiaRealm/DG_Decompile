/*
 * FUN_1003d850 at 1003d850
 * undefined FUN_1003d850(void)
 * Address ranges: 1003d850-1003d8d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1003d850(undefined8 param_1,undefined8 *param_2,int param_3,undefined4 param_4,byte param_5)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 uStack_18;
  undefined4 local_4;
  
  if ((param_5 < 9) && ((0x116U >> (ulonglong)(param_5 & 0x1f) & 1) != 0)) {
    local_20 = *(undefined4 *)(param_3 + 0x90);
    local_4 = 0xffffffff;
  }
  else {
    local_20 = *(undefined4 *)(param_3 + 0x94);
    local_4 = param_4;
  }
  local_1c = CONCAT31(local_1c._1_3_,0xe4);
  param_2[1] = uStack_18;
  *param_2 = CONCAT44(local_1c,local_20);
  param_2[3] = CONCAT44(local_4,local_4);
  param_2[2] = CONCAT44(local_4,param_4);
  return param_2;
}

