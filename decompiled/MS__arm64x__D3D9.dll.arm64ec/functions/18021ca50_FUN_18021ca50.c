/*
 * FUN_18021ca50 at 18021ca50
 * undefined FUN_18021ca50(void)
 * Address ranges: 18021ca50-18021cdff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021ca50(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong uVar14;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar16 = 0;
  uVar1 = ((ulonglong)*(uint *)(param_2 + 2) |
          param_2[1] + (longlong)*(int *)((longlong)param_2 + 0x14) << 0x20) + *param_2;
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar5 != 0) {
    uVar12 = 0;
    uVar11 = uVar5;
    do {
      uVar6 = uVar11 + uVar12 >> 1;
      uVar16 = (ulonglong)uVar6;
      uVar15 = *(ulonglong *)(*param_1 + uVar16 * 0x28);
      if (uVar15 <= uVar1) {
        if (uVar1 <= uVar15) break;
        uVar12 = uVar6 + 1;
        uVar16 = (ulonglong)(uVar6 + 1);
        uVar6 = uVar11;
      }
      uVar11 = uVar6;
    } while (uVar11 != uVar12);
    if (((uint)uVar16 != uVar5) &&
       (puVar2 = (ulonglong *)(*param_1 + uVar16 * 0x28), *puVar2 == uVar1)) {
      iVar9 = FUN_180222c00(param_2,puVar2 + 1,0x18);
      if (iVar9 != 0) {
        uVar15 = puVar2[4];
        FUN_18020d9f8(param_1[2],uVar15,0,1);
        puVar8 = __hybrid_os_arm64x_dispatch_icall;
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(uVar15);
        *(ulonglong *)(*param_1 + uVar16 * 0x28) = uVar1;
        lVar17 = *param_2;
        lVar13 = *param_1 + uVar16 * 0x28;
        *(longlong *)(lVar13 + 0x10) = param_2[1];
        *(longlong *)(lVar13 + 8) = lVar17;
        *(longlong *)(lVar13 + 0x18) = param_2[2];
        local_68 = *param_2;
        if (param_2[1] == 0) {
          local_60 = 0;
        }
        else {
          (*(code *)puVar8)(0x180224000);
          local_60 = (*extraout_x11_00)();
        }
        if (param_2[1] == 0) {
          local_58 = 0;
        }
        else {
          (*(code *)puVar8)(0x180224000);
          local_58 = (*extraout_x11_01)();
        }
        local_50 = (undefined4)param_2[2];
        local_38 = *(undefined4 *)((longlong)param_2 + 0x14);
        local_48 = 0;
        uStack_40 = 0;
        local_70 = 0;
        uVar10 = (*(code *)puVar8)(0x180224000);
        (*extraout_x11_02)(uVar10,&local_68,&DAT_180238a40,&local_70);
        *(undefined8 *)(*param_1 + uVar16 * 0x28 + 0x20) = local_70;
      }
      goto LAB_18021cde0;
    }
  }
  if (uVar5 == *(uint *)(param_1 + 1)) {
    uVar15 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar13 = uVar15 * 0x28;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    if (SUB168(auVar7 * ZEXT816(0x28),8) != 0) {
      lVar13 = -1;
    }
    lVar13 = FUN_1802229a8(lVar13);
    if (lVar13 != 0) {
      uVar15 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar5 = (int)uVar15 + 1;
          puVar3 = (undefined8 *)(*param_1 + uVar15 * 0x28);
          puVar4 = (undefined8 *)(lVar13 + uVar15 * 0x28);
          uVar10 = *puVar3;
          uVar19 = puVar3[3];
          uVar18 = puVar3[2];
          puVar4[1] = puVar3[1];
          *puVar4 = uVar10;
          puVar4[3] = uVar19;
          puVar4[2] = uVar18;
          puVar4[4] = puVar3[4];
          uVar15 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 1));
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar13;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar16 < (uint)uVar15) {
    uVar14 = (ulonglong)((uint)uVar15 - 1);
    puVar3 = (undefined8 *)(*param_1 + uVar15 * 0x28);
    puVar4 = (undefined8 *)(*param_1 + uVar14 * 0x28);
    uVar10 = *puVar4;
    uVar19 = puVar4[3];
    uVar18 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar10;
    puVar3[3] = uVar19;
    puVar3[2] = uVar18;
    puVar3[4] = puVar4[4];
    uVar15 = uVar14;
  }
  *(ulonglong *)(*param_1 + uVar16 * 0x28) = uVar1;
  lVar17 = *param_2;
  lVar13 = *param_1 + uVar16 * 0x28;
  *(longlong *)(lVar13 + 0x10) = param_2[1];
  *(longlong *)(lVar13 + 8) = lVar17;
  *(longlong *)(lVar13 + 0x18) = param_2[2];
  puVar8 = __hybrid_os_arm64x_dispatch_icall;
  local_68 = *param_2;
  if (param_2[1] == 0) {
    local_60 = 0;
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_60 = (*extraout_x11_03)();
  }
  if (param_2[1] == 0) {
    local_58 = 0;
  }
  else {
    (*(code *)puVar8)(0x180224000);
    local_58 = (*extraout_x11_04)();
  }
  local_50 = (undefined4)param_2[2];
  local_38 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_48 = 0;
  uStack_40 = 0;
  local_70 = 0;
  uVar10 = (*(code *)puVar8)(0x180224000);
  (*extraout_x11_05)(uVar10,&local_68,&DAT_180238a40,&local_70);
  *(undefined8 *)(*param_1 + uVar16 * 0x28 + 0x20) = local_70;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18021cde0:
  return *(undefined8 *)(uVar16 * 0x28 + *param_1 + 0x20);
}

