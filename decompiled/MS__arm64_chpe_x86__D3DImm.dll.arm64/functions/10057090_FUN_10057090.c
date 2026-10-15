/*
 * FUN_10057090 at 10057090
 * undefined FUN_10057090(void)
 * Address ranges: 10057090-100571db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10057090(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined1 local_40;
  
  if (param_3 == (undefined4 *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_100514a0(param_1,param_3);
  }
  if (-1 < iVar1) {
    iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    if (iVar1 == 0) {
      FUN_1004bc70(0);
    }
    FUN_10096840(auStack_b0);
    local_a8 = *param_3;
    local_40 = 0;
    uStack_9c = *(undefined8 *)(param_3 + 3);
    local_a4 = *(undefined8 *)(param_3 + 1);
    uStack_8c = *(undefined8 *)(param_3 + 7);
    local_94 = *(undefined8 *)(param_3 + 5);
    uStack_7c = *(undefined8 *)(param_3 + 0xb);
    local_84 = *(undefined8 *)(param_3 + 9);
    local_74 = *(undefined8 *)(param_3 + 0xd);
    local_6c = param_3[0xf];
    local_68 = *(undefined8 *)(param_3 + 0x10);
    local_60 = param_3[0x12];
    local_5c = param_3[0x13];
    uStack_58 = param_3[0x14];
    local_54 = param_3[0x15];
    uStack_50 = param_3[0x16];
    local_4c = param_3[0x17];
    uStack_48 = param_3[0x18];
    local_44 = param_3[0x19];
    FUN_100052a0(param_1,param_2,&local_a8);
    iVar1 = 0;
    FUN_10096790(auStack_b0);
    (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  }
  return iVar1;
}

