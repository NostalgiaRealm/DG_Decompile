/*
 * FUN_10030e80 at 10030e80
 * undefined FUN_10030e80(void)
 * Address ranges: 10030e80-10031347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030e80(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,
                 byte param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  int local_b4;
  uint local_b0;
  int *local_ac;
  int local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  int local_9c;
  uint local_98;
  undefined4 uStack_94;
  ulonglong local_90;
  undefined8 local_88;
  int *local_80;
  int local_7c;
  code *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int iStack_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50 [2];
  
  local_90 = CONCAT44(local_90._4_4_,param_1);
  iVar6 = *(int *)(param_1 + 0x138);
  local_b4 = *(int *)(iVar6 + 0x3184);
  piVar1 = (int *)(param_2 + 0x20);
  iStack_64 = *piVar1;
  iVar6 = *(int *)(iVar6 + 0x3180);
  local_60 = *(uint *)(param_2 + 0x24);
  uVar10 = (uint)param_7;
  local_b0 = param_3;
  auVar13 = FUN_10034db8(param_3,param_4,iStack_64,local_60,param_6);
  local_58 = auVar13._0_8_;
  local_70 = 0;
  local_68 = 0;
  uVar9 = auVar13._4_4_;
  uVar11 = auVar13._12_4_;
  uStack_5c = 1;
  *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + (uVar11 - uVar9 >> 4);
  if (local_b0 < param_4) {
    iVar12 = auVar13._8_4_;
    local_70 = (ulonglong)uVar9 << 0x20;
    local_60 = uVar11;
    if (iVar12 != 0) {
      local_60 = uVar11 + 1;
    }
    if (param_5 != 0) {
      iVar2 = param_2 + uVar10 * 0x20;
      iVar3 = (uVar10 + 1) * 2;
      local_ac = piVar1;
      if ((*(char *)(iVar6 + local_b4 * 0x18 + 0x530) != '\0') &&
         (uVar7 = FUN_10059fd0(*(undefined4 *)
                                (*(int *)(*(int *)(param_1 + 0x138) + 0x3180) + 0x172c0),
                               *(undefined4 *)(iVar2 + 0xdc)),
         pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, (uVar7 & 1) != 0)) {
        local_88 = 0;
        uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        iVar6 = (*extraout_w11)(uVar5,0,&local_88,0);
        if (iVar6 < 0) {
          return;
        }
        local_90 = local_58;
        uVar10 = uVar9;
        if ((int)local_58 != 0) {
          local_a0 = 0;
          local_9c = iVar12;
          if (uVar11 != uVar9) {
            local_9c = *piVar1;
          }
          uVar10 = uVar9 + 1;
          uStack_94 = 1;
          local_a8 = (int)local_58;
          uStack_a4 = uVar9;
          local_98 = uVar10;
          uVar5 = (*pcVar4)();
          (*extraout_w11_00)(uVar5,0,&local_a8);
        }
        piVar1 = local_ac;
        if (uVar10 <= uVar11) {
          local_a8 = 0;
          local_9c = *local_ac;
          local_a0 = 0;
          local_98 = uVar11;
          if (iVar12 == local_9c) {
            local_98 = uVar11 + 1;
          }
          uStack_94 = 1;
          uStack_a4 = uVar10;
          uVar5 = (*pcVar4)();
          (*extraout_w11_01)(uVar5,0,&local_a8);
          uVar9 = uVar11;
          if (((iVar12 != *piVar1) || (uVar9 = uVar11 + 1, uVar11 == uVar11 + 1)) && (iVar12 != 0))
          {
            local_98 = uVar11 + 1;
            local_a8 = 0;
            uStack_94 = 1;
            local_a0 = 0;
            uStack_a4 = uVar9;
            local_9c = iVar12;
            uVar5 = (*pcVar4)();
            (*extraout_w11_02)(uVar5,0,&local_a8);
          }
        }
        uVar5 = (*pcVar4)();
        (*extraout_w11_03)(uVar5,0,0);
        return;
      }
      local_7c = iVar2 + 0xe4;
      local_b4 = 0;
      local_50[0] = 0;
      local_78 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar6 = (*extraout_w11_04)(uVar5,0,local_50,&local_b4);
      if (-1 < iVar6) {
        piVar1 = (int *)(iVar2 + 0xf8);
        iVar6 = local_b4 + *piVar1 * uVar9;
        local_80 = piVar1;
        if ((int)local_58 != 0) {
          FUN_1007ac00(iVar6 + iVar3 * (int)local_58,local_b0 + param_5,
                       (*local_ac - (int)local_58) * iVar3);
          uVar9 = uVar9 + 1;
          iVar6 = iVar6 + *piVar1;
        }
        piVar1 = local_80;
        param_5 = param_5 + uVar9 * iVar3 * param_6;
        for (; uVar9 <= uVar11; uVar9 = uVar9 + 1) {
          iVar8 = iVar12;
          if (uVar9 != uVar11) {
            iVar8 = *local_ac;
          }
          FUN_1007ac00(iVar6,param_5,iVar3 * iVar8);
          param_5 = param_5 + iVar3 * param_6;
          iVar6 = *piVar1 + iVar6;
        }
      }
      local_88 = CONCAT44(*(int *)(iVar2 + 0xf8) * local_60,*(int *)(iVar2 + 0xf8) * local_70._4_4_)
      ;
      uVar5 = (*local_78)();
      (*extraout_w11_05)(uVar5,0,&local_88);
    }
  }
  FUN_10030cc8(local_90 & 0xffffffff,param_2,&local_70,param_7);
  return;
}

