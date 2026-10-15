/*
 * FUN_1800657b8 at 1800657b8
 * undefined FUN_1800657b8(void)
 * Address ranges: 1800657b8-1800658e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800657b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,uint param_6,ulonglong param_7,ulonglong param_8)

{
  undefined8 extraout_x1;
  ulonglong uVar1;
  int extraout_w14;
  undefined8 extraout_x15;
  undefined8 extraout_x15_00;
  
  if (((int)param_7 != 0) || ((param_8 & 1) != 0)) {
    uVar1 = (ulonglong)*(byte *)(param_4 + 1);
    FUN_1800f5ea8(0xe4,uVar1,param_6);
    if (*(float *)(&DAT_18022c350 + (param_7 & 0xffffffff) * 4) == 1.0) {
      if (*param_4 != extraout_w14) {
        FUN_1800f5730(param_2,extraout_x15,param_6 | 0x36);
      }
    }
    else if ((int)param_7 == 1) {
      FUN_1800f5730(param_2,extraout_x15);
    }
    else {
      uVar1 = func_0x0001802132c8(uVar1 & 0xffffffff,extraout_x1,param_6 | 0x38);
      if ((uVar1 & 1) == 0) {
        FUN_1800f5730(param_2,extraout_x15_00);
      }
      else {
        FUN_1800f5730(param_2,extraout_x15_00);
      }
    }
  }
  return;
}

