/*
 * FUN_10018880 at 10018880
 * undefined FUN_10018880(void)
 * Address ranges: 10018880-1001911b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10018880(int param_1,int *param_2,int *param_3,ulonglong param_4,char param_5,char param_6)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  byte bVar19;
  int *piVar20;
  int iVar21;
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
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int local_fc;
  int local_f8;
  undefined1 auStack_b4 [4];
  int *local_b0;
  int *local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  int aiStack_90 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  local_b0 = param_2 + 1;
  param_2[0] = 0;
  param_2[1] = 0;
  piVar1 = (int *)(param_1 + 4);
  iVar4 = *piVar1;
  if ((*(uint *)(iVar4 + 0xb8) >> 10 & 1) == 0) {
    return -0x7789f794;
  }
  if ((*(uint *)(iVar4 + 0xb8) >> 0xb & 1) != 0) {
    return -0x7789f794;
  }
  if ((param_4 & 0xffff57ef) != 0) {
    return -0x7789f794;
  }
  local_ac = param_2;
  FUN_100365a8(iVar4 + 0x4c);
  (*(code *)PTR_FUN_1013426c)
            (aiStack_90,0,0,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if ((param_3 == (int *)0x0) ||
     ((iVar10 = (*(code *)PTR_FUN_10134210)(param_3), piVar20 = param_3, iVar10 != 0 &&
      (param_5 == '\0')))) {
    piVar20 = aiStack_90;
  }
  uStack_98 = *(undefined8 *)(piVar20 + 2);
  local_a0 = *(undefined8 *)piVar20;
  (*(code *)PTR_FUN_101341a4)(aiStack_90,&local_a0);
  (*(code *)PTR_FUN_10134208)(aiStack_90,aiStack_90,&local_a0);
  iVar10 = (*(code *)PTR_FUN_101341a4)(aiStack_90,&local_a0);
  if (iVar10 == 0) {
    return -0x7789f794;
  }
  if ((param_6 == '\0') || (*(char *)(iVar4 + 0x48) != '\0')) {
    FUN_10036df0(iVar4);
    uVar14 = FUN_100351a0(iVar4,*(undefined4 *)(iVar4 + 0xb4),
                          *(int *)(iVar4 + 0x10) * 0x40 + 0xfffU & 0xfffff000,
                          *(char *)(iVar4 + 0x48),*(char *)(iVar4 + 0x48) == '\0');
    if ((uVar14 & 1) == 0) {
      return -0x7789f7d9;
    }
  }
  local_fc = 0;
  local_f8 = 0;
  iVar10 = 0;
  *(int *)(iVar4 + 0xb0) = *(int *)(iVar4 + 0xb0) + 1;
  if (*(int *)(param_1 + 0x34) == 3) {
    piVar20 = (int *)(param_1 + 0x24);
  }
  else {
    if ((*(char *)(*(int *)(param_1 + 0x18) + 0x58bd) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
      FUN_1000c990(*(int *)(param_1 + 0x18),param_1);
      FUN_10121020(auStack_b4);
      pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (*(int *)(param_1 + 0x1c) == 0) {
LAB_10018ae8:
        iVar13 = 0;
        iVar10 = *piVar1;
        puVar2 = (uint *)(iVar10 + 0x34);
        puVar15 = (undefined4 *)(iVar10 + 0x70);
        puVar17 = (undefined4 *)(iVar10 + 0x6c);
        if ((*puVar2 >> 5 & 1) == 0) {
          uVar11 = (*pcVar7)();
          cVar9 = (*extraout_w11_07)(uVar11,*puVar17,*puVar15);
          if (cVar9 != '\0') {
            local_70 = 0;
            local_68 = FUN_10034d10(*(undefined2 *)(iVar10 + 8),*(undefined1 *)(iVar10 + 0x1c),
                                    *(undefined4 *)(iVar10 + 0x18));
            puVar16 = (undefined4 *)(iVar10 + 0xa8);
            puVar18 = (undefined4 *)(iVar10 + 0xa4);
            iStack_64 = *(ushort *)(iVar10 + 0xe) - 1;
            uVar11 = (*pcVar7)();
            cVar9 = (*extraout_w11_08)(uVar11,*puVar17,*puVar15,*puVar18,*puVar16,&local_70);
            *(char *)(iVar10 + 0xae) = cVar9;
            iVar13 = 0;
            if (cVar9 == '\0') {
              iVar13 = 2;
            }
            uVar11 = (*pcVar7)();
            (*extraout_w11_09)(uVar11,*puVar17,*puVar15,0);
          }
        }
        else {
          piVar20 = (int *)(iVar10 + 0x20);
          if (*(int *)(iVar10 + 0x24) == 0) {
            if (*piVar20 == 0) {
              uVar11 = (*pcVar7)();
              iVar13 = (*extraout_w11_02)(uVar11,*puVar17,*puVar15);
              goto LAB_10018f74;
            }
            FUN_100355a0(iVar10);
            uVar11 = (*pcVar7)();
            cVar9 = (*extraout_w11_00)(uVar11,*puVar17,*puVar15);
            if (cVar9 != '\0') {
              uVar12 = FUN_10035ae0(iVar10,*(undefined1 *)(iVar10 + 0x48));
              iVar13 = (uVar12 & 0xff ^ 1) << 1;
              uVar11 = (*pcVar7)();
              (*extraout_w11_01)(uVar11,*puVar17,*puVar15,0);
              *(int *)(iVar10 + 0x30) = *(int *)(iVar10 + 0x30) + 1;
              *(undefined1 *)(iVar10 + 0xae) = 0;
            }
            local_fc = *piVar20;
          }
          else {
            uVar11 = (*pcVar7)();
            cVar9 = (*extraout_w11_03)(uVar11,*puVar17,*puVar15);
            if (cVar9 != '\0') {
              uVar11 = (*pcVar7)();
              (*extraout_w11_04)(uVar11,*puVar17,*puVar15,0);
              FUN_10035650(iVar10);
              *(undefined1 *)(iVar10 + 0xae) = 0;
            }
            if (param_6 != '\0') {
              uVar23 = 0x80808080;
              bVar6 = false;
              iVar13 = 0;
              uVar12 = (uint)*(ushort *)(iVar10 + 0xc) * *(int *)(iVar10 + 0x14) + 0xfff >> 0xc;
              if (uVar12 != 0) {
                uVar22 = 0;
                uVar24 = 0;
                do {
                  if ((*(byte *)(iVar13 + *(int *)(iVar10 + 0x28)) & uVar23) != 0) {
                    if (uVar22 != uVar24) {
                      if (!bVar6) {
                        FUN_100355a0(iVar10);
                        bVar6 = true;
                      }
                      FUN_10035c70(iVar10,auStack_60,uVar22,uVar24);
                      (*pcVar7)();
                      (*extraout_w11_05)(iVar10,auStack_60);
                      uVar22 = uVar24;
                    }
                    uVar22 = uVar22 + 1;
                  }
                  uVar24 = uVar24 + 1;
                  pbVar3 = (byte *)(*(int *)(iVar10 + 0x28) + iVar13);
                  *pbVar3 = *pbVar3 | (byte)uVar23;
                  pbVar3 = (byte *)(iVar13 + *(int *)(iVar10 + 0x24));
                  *pbVar3 = *pbVar3 | (byte)uVar23;
                  iVar13 = (uVar23 & 1) + iVar13;
                  uVar23 = uVar23 >> 1 | uVar23 << 0x1f;
                } while (uVar24 < uVar12);
                if (uVar22 != uVar24) {
                  if (!bVar6) {
                    FUN_100355a0(iVar10);
                  }
                  FUN_10035c70(iVar10,auStack_50,uVar22,uVar24);
                  (*pcVar7)();
                  (*extraout_w11_06)(iVar10,auStack_50);
                }
              }
              *puVar2 = *puVar2 | 1;
            }
            iVar13 = 0;
            local_fc = *piVar20;
          }
          local_f8 = *(int *)(iVar10 + 0x10);
        }
LAB_10018f74:
        iVar10 = 0;
        if (iVar13 != 0) {
          iVar10 = -0x7fffbffb;
        }
      }
      else {
        puVar15 = (undefined4 *)(param_1 + 0x48);
        puVar17 = (undefined4 *)(param_1 + 0x4c);
        uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        cVar9 = (*extraout_w11)(uVar11,*puVar17,*puVar15);
        iVar10 = -0x7fffbffb;
        if (cVar9 != '\0') goto LAB_10018ae8;
      }
      FUN_10120f70(auStack_b4);
      if (iVar10 < 0) {
        return iVar10;
      }
      goto LAB_10018fa8;
    }
    FUN_100355a0(iVar4);
    piVar20 = (int *)(iVar4 + 0x20);
  }
  local_f8 = *(int *)(iVar4 + 0x10);
  local_fc = *piVar20;
LAB_10018fa8:
  if (param_3 == (int *)0x0) {
    iVar21 = 0;
    iVar13 = 0;
  }
  else {
    iVar13 = *param_3;
    iVar21 = param_3[1];
  }
  if (*(int *)(iVar4 + 0x18) == 0) {
    iVar13 = local_fc + iVar21 * local_f8 + (uint)*(byte *)(iVar4 + 0x1e) * iVar13;
  }
  else {
    bVar19 = *(byte *)(iVar4 + 0x1d);
    if (bVar19 == 0) {
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x10018fe4);
      (*(code *)uVar8)();
    }
    iVar5 = 0;
    if (bVar19 != 0) {
      iVar5 = iVar21 / (int)(uint)bVar19;
    }
    bVar19 = *(byte *)(iVar4 + 0x1c);
    if (bVar19 == 0) {
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x10018ff8);
      (*(code *)uVar8)();
    }
    iVar21 = 0;
    if (bVar19 != 0) {
      iVar21 = iVar13 / (int)(uint)bVar19;
    }
    iVar13 = local_fc + iVar21 * *(int *)(iVar4 + 0x18) + iVar5 * local_f8;
  }
  *local_b0 = iVar13;
  *local_ac = local_f8;
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_80 = (undefined4)local_a0;
    uStack_7c = local_a0._4_4_;
    local_78 = (undefined4)uStack_98;
    uStack_74 = uStack_98._4_4_;
    iVar13 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + *(int *)(param_1 + 0x4c) * 0x10;
    (*(code *)PTR_FUN_10134298)(iVar13,iVar13,&local_80);
  }
  *(uint *)(*piVar1 + 0xb8) = *(uint *)(*piVar1 + 0xb8) | 0x800;
  if (param_6 == '\0') {
    if ((*(int *)(iVar4 + 0x9c) == 0) && (*(int *)(iVar4 + 0xa4) != 0)) {
      bVar19 = 1;
    }
    else {
      bVar19 = 0;
    }
    bVar19 = *(byte *)(iVar4 + 0xad) | bVar19;
    *(byte *)(iVar4 + 0xad) = bVar19;
    *(int *)(iVar4 + 0x9c) = local_fc;
    *(int *)(iVar4 + 0xa0) = local_f8;
    if ((bVar19 != 0) && (local_fc != 0)) {
      FUN_100355a0(iVar4);
      FUN_100356b0(iVar4);
      FUN_10036ee0(iVar4);
    }
    *(undefined1 *)(iVar4 + 0xae) = 0;
  }
  return iVar10;
}

