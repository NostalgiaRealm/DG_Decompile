/*
 * FUN_10011068 at 10011068
 * undefined FUN_10011068(void)
 * Address ranges: 10011068-1001144b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011068(int param_1,undefined8 param_2,int param_3,ulonglong param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10,
                 undefined4 param_11)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  uint uVar10;
  uint uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint *puVar12;
  uint in_stack_fffffea0;
  uint *local_130;
  int local_12c;
  int local_128;
  int local_124;
  undefined4 local_120;
  int local_110 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_128 = (int)param_4;
  iVar3 = *(int *)(param_1 + 0x654);
  iVar4 = *(int *)(param_1 + 0x650);
  puVar12 = (uint *)param_2;
  uVar11 = *puVar12;
  iVar7 = *(int *)(&DAT_10160924 + param_3 * 8) + *(int *)(&DAT_10160920 + param_3 * 8) * param_6;
  local_130 = puVar12;
  local_124 = local_128;
  local_120 = param_8;
  if ((((*(int *)(uVar11 + 4) == 0) || (iVar3 == 0)) || (*(uint *)(param_1 + 0x31c) < 9)) ||
     (*(char *)(param_1 + 0x669f) == '\0')) {
    if ((iVar4 != 0) && (*(char *)(param_1 + 0x669f) != '\0')) {
      if (param_7 == 0) {
        uVar9 = 0;
        iVar4 = iVar7;
      }
      else {
        uVar9 = param_4 & 0xffffffff;
        iVar4 = param_5;
      }
      FUN_1002aed8(param_1,param_9,uVar11,param_4,uVar9,iVar4);
      param_2 = extraout_x1;
    }
    uVar9 = (ulonglong)*local_130;
    if (param_7 == 0) {
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*(undefined4 *)(param_1 + 0x14),param_2,uVar9);
      (*extraout_w11_02)(uVar8,param_3,uVar9 & 0xffffffff,param_9,param_11,iVar7,iVar3 != 0);
    }
    else {
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(uVar8,param_3,uVar9 & 0xffffffff,param_9,param_11,param_5,param_7,iVar7,0);
    }
  }
  else {
    local_12c = FUN_1002a298(param_1,uVar11);
    local_12c = FUN_10012a10(param_1 + 0x30c,&local_12c);
    puVar1 = (undefined4 *)(local_12c + 0xc);
    local_128 = local_128 + param_5;
    if (param_7 == 0) {
      local_128 = iVar7;
    }
    uVar9 = FUN_10029f80(param_1,local_128,*puVar1);
    if ((uVar9 & 1) != 0) {
      uVar8 = 7;
      if (iVar4 == 0) {
        uVar8 = 5;
      }
      uVar5 = *puVar12;
      uStack_108 = 0;
      local_110[0] = 0;
      local_110[1] = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uVar11 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      local_50 = 0;
      local_48 = 0;
      if (*(uint *)(uVar5 + 8) != 0) {
        do {
          bVar6 = *(byte *)(uVar5 + 0x214 + uVar11);
          if ((bVar6 < 0xf) &&
             (uVar10 = (uint)bVar6, (0x7febU >> (ulonglong)(uVar10 & 0x1f) & 1) != 0)) {
            iVar3 = uVar5 + uVar10 * 8;
            local_110[uVar10 * 3] = param_9 + (uint)*(byte *)(iVar3 + 0x17) * 4;
            *(undefined1 *)((int)&uStack_108 + uVar10 * 0xc) = *(undefined1 *)(iVar3 + 0x18);
            local_110[uVar10 * 3 + 1] = *(int *)(uVar5 + 0xc);
            *(undefined1 *)((int)&uStack_108 + uVar10 * 0xc + 1) = *(undefined1 *)(iVar3 + 0x15);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(uVar5 + 8));
      }
      FUN_10157940(&local_130);
      iVar3 = local_12c;
      if (param_7 == 0) {
        param_5 = iVar7;
      }
      puVar2 = (undefined4 *)(param_1 + 0xd6c);
      iVar4 = 0;
      if (param_7 != 0) {
        iVar4 = local_124;
      }
      FUN_1002a410(param_1,local_110,*puVar2,local_12c,uVar8,iVar4,param_5,0,
                   in_stack_fffffea0 & 0xffffff00);
      if (param_7 == 0) {
        uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11_00)(uVar8,param_3,iVar3,*puVar2,*puVar1,iVar7,0);
      }
      else {
        uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar8,param_3,iVar3,*puVar2,*puVar1,local_128,param_7,iVar7,0);
      }
      FUN_101579f0(&local_130);
    }
  }
  return;
}

