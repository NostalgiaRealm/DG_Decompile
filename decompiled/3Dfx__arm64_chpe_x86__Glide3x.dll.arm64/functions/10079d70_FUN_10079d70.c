/*
 * FUN_10079d70 at 10079d70
 * undefined FUN_10079d70(void)
 * Address ranges: 10079d70-1007a07b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079d70(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  code *extraout_w11;
  uint uVar11;
  undefined4 local_e8;
  int *local_e4;
  undefined4 *local_e0;
  undefined4 local_dc [3];
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(int *)(param_2 + 0xd7c) == 0) goto LAB_10079e54;
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  puVar9 = (undefined8 *)(*extraout_w11)(uVar8,&local_d0);
  uVar11 = *(uint *)(param_2 + 0x18);
  uStack_c8 = puVar9[1];
  local_d0 = *puVar9;
  local_b8 = puVar9[3];
  local_c0 = puVar9[2];
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x10079df4);
    (*(code *)uVar6)();
  }
  uVar5 = 0;
  if (uVar11 != 0) {
    uVar5 = *(uint *)(param_2 + 0x10) / uVar11;
  }
  if (local_c0 == uVar5) {
    uVar11 = *(uint *)(param_2 + 0x1c);
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      uVar6 = SoftwareBreakpoint(0xf004,0x10079e1c);
      (*(code *)uVar6)();
    }
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = *(uint *)(param_2 + 0x14) / uVar11;
    }
    if ((uint)local_b8 != uVar5) goto LAB_10079e40;
    bVar7 = *(uint *)(param_2 + 0x20) < param_3;
  }
  else {
LAB_10079e40:
    bVar7 = true;
    FUN_1007a088(param_1,param_2);
  }
  if (!bVar7) {
    return;
  }
LAB_10079e54:
  piVar1 = (int *)(param_2 + 8);
  uStack_c8 = 0;
  iVar4 = param_1 + *piVar1 * 0x16c0;
  local_d0 = CONCAT44(local_d0._4_4_,3);
  uVar11 = *(uint *)(param_2 + 0x18);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    uVar6 = SoftwareBreakpoint(0xf004,0x10079e88);
    (*(code *)uVar6)();
  }
  uVar5 = 0;
  if (uVar11 != 0) {
    uVar5 = *(uint *)(param_2 + 0x10) / uVar11;
  }
  local_c0 = (ulonglong)uVar5;
  uVar11 = *(uint *)(param_2 + 0x1c);
  if (uVar11 != 0) {
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = *(uint *)(param_2 + 0x14) / uVar11;
    }
    local_b8 = CONCAT44(0x10001,uVar5);
    puVar2 = (uint *)(param_2 + 0x20);
    local_88 = 0;
    local_80 = 0;
    local_50 = 0;
    local_b0 = *(undefined4 *)(&DAT_1009b9e8 + *(int *)(param_2 + 0x2c) * 4);
    local_ac = 1;
    local_a4 = 0x100000000;
    local_90 = *(undefined4 *)(&DAT_1009b9d8 + *(int *)(param_2 + 0x2c) * 4);
    uStack_8c = 4;
    local_6c = 0x168800000004;
    local_60 = 0xffffffff00000000;
    uStack_58 = 0;
    local_70 = local_90;
    if (*puVar2 == 0 && (*puVar2 == 0 && param_3 != 0)) {
      uVar8 = FUN_100620b0(*(undefined4 *)(iVar4 + 0x1c98),2);
      *(undefined4 *)(param_2 + 0xd84) = uVar8;
      uVar8 = FUN_100620b0(*(undefined4 *)(iVar4 + 0x1c9c),2);
      *(undefined4 *)(param_2 + 0xd88) = uVar8;
    }
    if (((*(int *)(param_2 + 0xd84) != -1) && (local_e4 = (int *)(param_2 + 0xd88), *local_e4 != -1)
        ) && (uVar11 = *puVar2, uVar11 < param_3)) {
      local_e0 = (undefined4 *)(iVar4 + 0x1c9c);
      param_1 = param_1 + 0x520;
      do {
        iVar10 = FUN_100614e0(param_1,*piVar1,&local_d0);
        ((int *)(param_2 + 0xd7c))[uVar11] = iVar10;
        if (iVar10 == 0) {
          return;
        }
        FUN_10062b90(*(undefined4 *)(iVar4 + 0x1c98),&local_e8,*(int *)(param_2 + 0xd84),uVar11);
        puVar3 = (undefined4 *)(param_2 + uVar11 * 4 + 0xd7c);
        FUN_10061328(param_1,*piVar1,*puVar3,&local_70,local_e8);
        FUN_10062b90(*local_e0,local_dc,*local_e4,uVar11);
        FUN_10061380(param_1,*piVar1,*puVar3,&local_90,local_dc[0]);
        uVar11 = uVar11 + 1;
        *puVar2 = *puVar2 + 1;
      } while (uVar11 < param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  uVar6 = SoftwareBreakpoint(0xf004,0x10079ea8);
  (*(code *)uVar6)();
}

