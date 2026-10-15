/*
 * FUN_10051520 at 10051520
 * undefined FUN_10051520(void)
 * Address ranges: 10051520-1005159f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10051520(undefined4 *param_1,ulonglong param_2,ulonglong param_3,int param_4,ulonglong param_5,
            ulonglong param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong extraout_x10;
  undefined4 *extraout_w11;
  undefined4 local_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  param_2 = param_2 & 0xffffffff;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_44 = 0;
  uStack_4c = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_24 = 0;
  uStack_2c = 0;
  uStack_14 = 0;
  uStack_1c = 0;
  uStack_c = 0;
  local_80 = 0x7c;
  if ((param_4 == 0) ||
     (uVar3 = FUN_1004ca20(param_4,&local_80), param_2 = extraout_x10, param_1 = extraout_w11,
     (uVar3 & 1) != 0)) {
    puVar1 = &local_80;
    if (param_4 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    uVar2 = FUN_10039b60(*param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,puVar1,
                         param_5 & 0xffffffff,param_6 & 0xffffffff);
  }
  else {
    uVar2 = 0x80070057;
  }
  return uVar2;
}

