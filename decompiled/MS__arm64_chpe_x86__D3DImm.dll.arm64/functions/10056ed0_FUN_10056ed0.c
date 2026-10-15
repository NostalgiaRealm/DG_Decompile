/*
 * FUN_10056ed0 at 10056ed0
 * undefined FUN_10056ed0(void)
 * Address ranges: 10056ed0-10056fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056ed0(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float local_2c;
  
  uVar2 = 0x80070057;
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    if (iVar1 == 0) {
      FUN_1004bc70(0);
    }
    FUN_10096840(auStack_80);
    uStack_68 = param_2[1];
    local_70 = *param_2;
    uStack_58 = param_2[3];
    local_60 = param_2[2];
    uStack_48 = param_2[5];
    local_50 = param_2[4];
    uStack_38 = param_2[7];
    local_40 = param_2[6];
    local_30 = *(float *)(param_2 + 8);
    dVar3 = (double)FUN_100819b0(0x3f50624dd2f1a9fc,1.0 / (double)local_30);
    local_2c = (float)dVar3;
    FUN_10005460(param_1,&local_70);
    uVar2 = 0;
    FUN_10096790(auStack_80);
    (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  }
  return uVar2;
}

