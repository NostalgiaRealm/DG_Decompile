/*
 * FUN_10038390 at 10038390
 * undefined FUN_10038390(void)
 * Address ranges: 10038390-100386eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10038390(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_90 = 0;
  bVar2 = *(char *)(param_1 + 0x48) == '\0';
  uVar7 = 0x29;
  uVar6 = uVar7;
  if (bVar2) {
    uVar6 = 0x1e;
    uVar7 = 0x1c;
  }
  local_b0 = 0x100000001;
  local_a8 = 0x27;
  if (bVar2) {
    local_a8 = 0x1b;
  }
  local_a0 = 0;
  uStack_98 = 0x28;
  local_b8 = param_2;
  uStack_b4 = param_3;
  local_a4 = param_4;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar4 = (*extraout_w11)(uVar3,&local_b8,0,param_5);
  if (-1 < iVar4) {
    local_4c = 0;
    local_54 = 6;
    local_58 = uVar7;
    uVar3 = (*pcVar1)();
    iVar4 = (*extraout_w11_00)(uVar3,*param_5,&local_58,param_7);
    if (-1 < iVar4) {
      *param_6 = *param_7;
      uVar3 = (*pcVar1)();
      (*extraout_w11_01)(uVar3);
      if (param_4 == 1) {
        uVar5 = 1;
        *param_8 = *param_5;
        uVar3 = (*pcVar1)();
        (*extraout_w11_03)(uVar3);
      }
      else {
        local_a4 = 1;
        uVar3 = (*pcVar1)();
        uVar5 = (*extraout_w11_02)(uVar3,&local_b8,0,param_8);
        uVar5 = ~uVar5 >> 0x1f;
      }
      if (uVar5 != 0) {
        local_84 = 4;
        local_7c = 0xffffffff;
        local_78 = 0;
        local_88 = uVar6;
        uVar6 = (*pcVar1)();
        iVar4 = (*extraout_w11_04)(uVar6,*param_8,&local_88,param_9);
        if (-1 < iVar4) {
          local_64 = 0xffffffff;
          local_60 = 0;
          local_6c = 4;
          local_70 = uVar7;
          uVar7 = (*pcVar1)();
          iVar4 = (*extraout_w11_05)(uVar7,*param_8,&local_70,param_11);
          if (-1 < iVar4) {
            return 1;
          }
          uVar7 = (*pcVar1)();
          (*extraout_w11_06)(uVar7);
        }
        uVar7 = (*pcVar1)();
        (*extraout_w11_07)(uVar7);
      }
      uVar7 = (*pcVar1)();
      (*extraout_w11_08)(uVar7);
      uVar7 = (*pcVar1)();
      (*extraout_w11_09)(uVar7);
    }
    uVar7 = (*pcVar1)();
    (*extraout_w11_10)(uVar7);
  }
  return 0;
}

