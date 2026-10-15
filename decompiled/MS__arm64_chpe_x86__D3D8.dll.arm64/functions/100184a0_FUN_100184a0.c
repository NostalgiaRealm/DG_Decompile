/*
 * FUN_100184a0 at 100184a0
 * undefined FUN_100184a0(void)
 * Address ranges: 100184a0-1001887b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100184a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong extraout_x1;
  ulonglong uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  int local_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  local_70 = *(undefined8 *)(param_1 + 0x28);
  local_58 = *(ulonglong *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  piVar1 = (int *)(param_1 + 0x1c);
  uVar17 = 0;
  if (*piVar1 == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1001c140(*piVar1,0,&local_70);
    iVar12 = *piVar1;
  }
  FUN_1000ce50(*(undefined4 *)(param_1 + 0x18),&local_80);
  uVar10 = local_58;
  uVar18 = (uint)local_58;
  if (uStack_7c == 0) {
                    /* WARNING: Does not return */
    uVar17 = SoftwareBreakpoint(0xf004,0x1001852c);
    (*(code *)uVar17)();
  }
  uVar14 = 0;
  if (uStack_7c != 0) {
    uVar14 = ((uint)local_58 * local_80) / uStack_7c;
  }
  uVar11 = local_58._4_4_;
  *(uint *)(param_1 + 0x54) = uVar14;
  if (uStack_74 == 0) {
                    /* WARNING: Does not return */
    uVar17 = SoftwareBreakpoint(0xf004,0x1001854c);
    (*(code *)uVar17)();
  }
  uVar14 = 0;
  if (uStack_74 != 0) {
    uVar14 = (local_58._4_4_ * local_78) / uStack_74;
  }
  uVar13 = (ulonglong)uVar14;
  *(uint *)(param_1 + 0x58) = uVar14;
  uVar19 = 1;
  uVar14 = 6;
  if (local_70._4_4_ != 5) {
    uVar14 = 1;
  }
  if (iVar12 != 0) {
    uVar19 = (uint)*(ushort *)(iVar12 + 0x30);
  }
  piVar2 = (int *)(param_1 + 4);
  uVar4 = *(undefined4 *)(*piVar2 + 0x4c);
  FUN_10019410(param_1);
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar12 = (*extraout_w11)(uVar4,extraout_x1 & 0xffffffff,uVar13 & 0xffffffff,uVar10 & 0xffffffff,
                           uVar11);
  if (iVar12 != 0) {
    (*pcVar9)();
    (*extraout_w11_00)(param_1);
    *(undefined1 *)(*piVar2 + 0xae) = 0;
    (*pcVar9)();
    (*extraout_w11_01)(iVar12);
    uVar16 = 0;
    puVar3 = (uint *)(*piVar2 + 0xb8);
    uVar5 = *(undefined4 *)(*piVar2 + 0x50);
    *puVar3 = *puVar3 | 1;
    local_44 = 1;
    local_50 = 0;
    local_48 = 0;
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    uStack_60 = 0;
    do {
      uVar15 = 0;
      if (uVar19 != 0) {
        do {
          uVar7 = uVar11 >> (ulonglong)(uVar15 & 0x1f);
          if (uVar7 == 0) {
            uVar7 = 1;
          }
          uVar8 = uVar18 >> (ulonglong)(uVar15 & 0x1f);
          if (uVar8 == 0) {
            uVar8 = 1;
          }
          (*(code *)PTR_FUN_1013426c)(&uStack_60,0,0,uVar8,uVar7);
          (*pcVar9)();
          (*extraout_w11_02)(uVar4,uVar15,uVar16,uVar15,uVar16,iVar12,uVar5,&local_70);
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar19);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar14);
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *(int *)(*piVar2 + 0x50) = iVar12;
    }
    else {
      *(int *)(iVar6 + 0x44) = iVar12;
      uVar18 = 0;
      if (*(uint *)(iVar6 + 100) != 0) {
        do {
          uVar14 = 0;
          if (*(ushort *)(iVar6 + 0x30) != 0) {
            do {
              FUN_10018320(*(undefined4 *)(*(int *)(iVar6 + 0x38) + uVar14 * 4 + uVar18 * 0x40),
                           iVar12);
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(iVar6 + 0x30));
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(iVar6 + 100));
      }
    }
    FUN_1000c680(*(undefined4 *)(param_1 + 0x18),param_1);
    (*pcVar9)();
    (*extraout_w11_03)(uVar5);
    uVar17 = 1;
  }
  return uVar17;
}

