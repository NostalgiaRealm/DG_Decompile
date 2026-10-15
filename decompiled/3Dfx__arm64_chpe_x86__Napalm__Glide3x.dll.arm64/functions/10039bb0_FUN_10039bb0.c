/*
 * FUN_10039bb0 at 10039bb0
 * undefined FUN_10039bb0(void)
 * Address ranges: 10039bb0-10039f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10039bb0(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                 byte param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined8 local_88;
  undefined4 local_80;
  int iStack_7c;
  uint local_78;
  undefined4 uStack_74;
  int *local_70;
  int local_6c;
  undefined4 local_68;
  int local_60;
  int local_5c;
  undefined1 local_50 [16];
  
  piVar1 = (int *)(param_2 + 0x20);
  iStack_7c = *piVar1;
  local_78 = *(uint *)(param_2 + 0x24);
  uVar9 = param_3;
  local_50 = FUN_10024418(param_3,param_4,iStack_7c,local_78,param_6,param_7);
  local_88 = 0;
  uVar12 = local_50._4_4_;
  local_80 = 0;
  uVar13 = local_50._12_4_;
  *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar13 - uVar12 >> 4);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  cVar2 = *(char *)(param_2 + 0x49);
  uStack_74 = 1;
  if (uVar9 < param_4) {
    local_78 = uVar13;
    if (local_50._8_4_ != 0) {
      local_78 = uVar13 + 1;
    }
    local_88 = (ulonglong)uVar12 << 0x20;
    if (param_5 != 0) {
      local_68 = *(undefined4 *)(param_2 + (uint)param_7 * 4 + 0xfc);
      auVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar5 = (*extraout_w11)(auVar14._0_8_ & 0xffffffff,auVar14._8_8_ & 0xffffffff,0,3,0,&local_60)
      ;
      if (-1 < iVar5) {
        iVar3 = (param_7 + 1) * 2;
        iVar5 = local_60 + local_5c * uVar12;
        local_70 = piVar1;
        local_6c = param_1 + 0x138;
        auVar14 = local_50;
        if (local_50._0_4_ != 0) {
          FUN_10083b40(iVar5 + iVar3 * local_50._0_4_,param_3 + param_5,
                       (*piVar1 - local_50._0_4_) * iVar3);
          uVar12 = uVar12 + 1;
          iVar5 = iVar5 + local_5c;
          auVar14 = local_50;
        }
        piVar1 = local_70;
        param_5 = param_5 + uVar12 * iVar3 * param_6;
        local_50 = auVar14;
        for (; uVar12 <= uVar13; uVar12 = uVar12 + 1) {
          iVar11 = auVar14._8_4_;
          if (uVar12 != uVar13) {
            iVar11 = *piVar1;
          }
          FUN_10083b40(iVar5,param_5,iVar3 * iVar11);
          param_5 = param_5 + iVar3 * param_6;
          iVar5 = local_5c + iVar5;
        }
        uVar6 = (*pcVar4)();
        (*extraout_w11_00)(uVar6,local_68,0);
      }
      uVar12 = local_88._4_4_;
    }
    uVar7 = (ulonglong)uVar12;
    if (uVar12 != 0) goto LAB_10039e3c;
  }
  else {
    uVar7 = 0;
  }
  if (local_78 == *(uint *)(*(int *)(param_1 + 0x138) + 0x9c) && cVar2 == '\0') {
    if (param_7 == 0) {
      iVar5 = 0xfc;
      iVar3 = 0xc4;
    }
    else {
      iVar5 = 0x100;
      iVar3 = 0xdc;
    }
    puVar10 = (undefined4 *)(param_2 + iVar3);
    puVar8 = (undefined4 *)(param_2 + iVar5);
    uVar6 = (*pcVar4)();
    (*extraout_w11_02)(uVar6,*puVar10,*puVar8);
    return;
  }
LAB_10039e3c:
  if (param_7 == 0) {
    puVar8 = (undefined4 *)(param_2 + 0xfc);
    uVar6 = (*pcVar4)();
    (*extraout_w11_03)(uVar6,*extraout_w8_00,0,0,uVar7 & 0xffffffff,0,*puVar8,0,&local_88);
  }
  else {
    puVar8 = (undefined4 *)(param_2 + 0x100);
    uVar6 = (*pcVar4)();
    (*extraout_w11_01)(uVar6,*extraout_w8,0,0,uVar7 & 0xffffffff,0,*puVar8,0,&local_88);
  }
  return;
}

