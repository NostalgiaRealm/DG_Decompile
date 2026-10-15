/*
 * FUN_180090aa8 at 180090aa8
 * undefined FUN_180090aa8(void)
 * Address ranges: 180090aa8-18009107b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180090aa8(longlong *param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5,
                  int param_6,int param_7,undefined4 param_8,int param_9,undefined4 param_10,
                  undefined4 param_11,int param_12,int param_13,char param_14,char param_15,
                  byte param_16,char param_17)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined4 local_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_140 [2];
  undefined8 local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  int local_120;
  int iStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint local_110;
  longlong *local_108;
  int local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int local_e0;
  undefined8 local_dc;
  int local_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 uStack_7c;
  undefined4 local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  param_2 = param_2 & 0xffffffff;
  *(char *)((longlong)param_1 + 0x4d) = param_15;
  if (((*(char *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6e8) == '\0') ||
      (param_14 != '\0')) && (param_15 != '\0')) {
    local_e0 = 0;
  }
  else {
    local_e0 = 1;
  }
  local_e8 = 4;
  if (local_e0 == 0) {
    local_e8 = 1;
  }
  local_dc = 0;
  uStack_e4 = 3;
  if (local_e0 == 0) {
    uStack_e4 = 0;
  }
  cVar8 = FUN_180090460(param_1,param_4,param_5);
  if (cVar8 == '\0') {
    return 0;
  }
  if (param_15 == '\0') {
    iVar10 = func_0x00018020d208(param_7);
    iVar11 = func_0x00018020d2b0(param_7);
    uVar12 = func_0x00018020d308(param_7);
    uVar15 = 1;
    if (param_7 - 0x46U < 0xf) {
      uVar15 = 4;
    }
    uStack_130 = 0;
    uVar17 = 0;
    if (param_5 != 0) {
      do {
        uVar22 = 0;
        uVar21 = param_2;
        uVar4 = param_3;
        if (param_4 != 0) {
          do {
            uVar20 = (uint)uVar21;
            if (iVar10 == 0) {
              if (uVar20 < uVar12) {
                uVar18 = 1;
              }
              else {
                if (uVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180090ee4);
                  (*pcVar6)();
                }
                uVar18 = 0;
                if (uVar12 != 0) {
                  uVar18 = uVar20 / uVar12;
                }
              }
              iVar19 = uVar18 * iVar11;
              if (uVar4 < uVar15) {
                uVar18 = 1;
              }
              else {
                if (uVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x180090f04);
                  (*pcVar6)();
                }
                uVar18 = 0;
                if (uVar15 != 0) {
                  uVar18 = uVar4 / uVar15;
                }
              }
            }
            else {
              iVar19 = uVar20 * iVar10;
              uVar18 = uVar4;
            }
            uVar1 = iVar19 + 0xffU & 0xffffff00;
            iVar19 = uVar1 * uVar18;
            uVar18 = (int)uStack_130 + 0x1ffU & 0xfffffe00;
            uVar5 = uVar22 + uVar17 * param_4;
            uVar22 = uVar22 + 1;
            lVar14 = (ulonglong)uVar5 * 0x20;
            *(uint *)(*(longlong *)((longlong)param_1 + 0x24) + lVar14) = uVar18;
            *(uint *)(lVar14 + *(longlong *)((longlong)param_1 + 0x24) + 8) = uVar1;
            *(int *)(lVar14 + *(longlong *)((longlong)param_1 + 0x24) + 4) = iVar19;
            uVar1 = uVar20 >> 1;
            if (uVar20 == 1) {
              uVar1 = 1;
            }
            uVar21 = (ulonglong)uVar1;
            bVar7 = uVar4 == 1;
            uVar4 = uVar4 >> 1;
            if (bVar7) {
              uVar4 = 1;
            }
            uStack_130 = (ulonglong)(iVar19 + uVar18);
          } while (uVar22 < param_4);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < param_5);
    }
    local_140[0] = 1;
    local_138 = 0;
    local_118 = 0;
    uStack_114 = 1;
    local_128 = 0x1000100000001;
    local_120 = 0;
    iStack_11c = 1;
    local_110 = 0;
    lVar14 = FUN_180090810(param_1,&local_e8);
    bVar9 = 0;
    *(longlong *)((longlong)param_1 + 0x14) = lVar14;
    if (lVar14 != 0) {
      bVar9 = FUN_1800904b8(param_1,0,0,0,0,param_4,param_5,0);
      if ((bVar9 & 1) != 0) goto LAB_180091010;
      FUN_1800908f0(param_1,*(undefined8 *)((longlong)param_1 + 0x14));
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    }
    if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
      FUN_1800908f0(param_1);
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    }
LAB_180091010:
    if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
      *(ulonglong *)((longlong)param_1 + 0x1c) =
           *(longlong *)((longlong)param_1 + 0x1c) +
           (ulonglong)*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
      return bVar9;
    }
    if (*(longlong *)((longlong)param_1 + 0x14) == 0) {
      return bVar9;
    }
    *(ulonglong *)((longlong)param_1 + 0x14) =
         *(longlong *)((longlong)param_1 + 0x14) +
         (ulonglong)*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
    return bVar9;
  }
  local_140[0] = 3;
  local_a0 = 1;
  uStack_98 = 0;
  local_90 = 0;
  local_138 = 0;
  local_110 = (uint)(param_12 != 0) | (uint)(param_13 != 0) << 1;
  local_128 = CONCAT26((short)param_4,CONCAT24((short)param_5,param_3));
  local_118 = 0;
  uStack_114 = 0;
  if (param_17 == '\0' || param_6 == 1) {
    iStack_16c = (uint)param_16 * 4 + 5;
  }
  else {
    iStack_16c = 7;
  }
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = param_10;
  uVar12 = param_5;
  if (iStack_16c == 5) {
LAB_180090c14:
    uStack_158 = (ulonglong)uVar12 << 0x20;
    local_160 = -0x100000000;
  }
  else {
    uStack_158._4_4_ = 0;
    if (iStack_16c == 7) {
      local_160 = (ulonglong)param_5 << 0x20;
      uStack_158 = 0;
    }
    else {
      uVar12 = uStack_158._4_4_;
      if (iStack_16c == 9) goto LAB_180090c14;
    }
  }
  local_150 = 0;
  local_b0 = 0;
  local_b8 = uStack_158;
  local_c0 = local_160;
  _local_d0 = CONCAT44(iStack_16c,param_9);
  _uStack_c8 = CONCAT44(uStack_164,param_11);
  if (iStack_16c == 5) {
    local_b0 = 1;
  }
  else if (iStack_16c == 9) {
    _local_d0 = CONCAT44(5,param_9);
    local_c0 = -0x100000000;
    local_b8 = (ulonglong)param_5 << 0x20;
    local_b0 = 0;
  }
  uStack_6c = 7;
  if (param_6 == 1) {
    uStack_6c = 5;
  }
  local_70 = param_12;
  local_80 = 0;
  uStack_84 = 6;
  if (param_6 == 1) {
    uStack_84 = 4;
  }
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_7c = 0;
  local_88 = param_13;
  local_74 = 0;
  *(undefined4 *)(param_1 + 8) = param_8;
  if (param_12 != 0) {
    *(int *)(param_1 + 9) = param_12;
  }
  piVar2 = &local_88;
  if (param_13 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    *(int *)(param_1 + 9) = param_13;
  }
  piVar3 = &local_70;
  if (param_12 == 0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    iVar10 = 0;
    if (piVar2 != (int *)0x0) {
      iVar10 = *piVar2;
    }
  }
  else {
    iVar10 = *piVar3;
  }
  local_170 = param_8;
  uStack_130 = param_2;
  local_120 = param_7;
  if (param_6 != 1) {
    iStack_11c = param_6;
    plVar13 = (longlong *)
              FUN_1800fae80(*(longlong *)((longlong)param_1 + 0xc) + 0x18b8,&local_a0,0,local_140);
    if (plVar13 == (longlong *)0x0) {
      piVar16 = (int *)0x0;
      if (iVar10 != 0) {
        local_100 = iVar10;
        if ((local_110 & 1) == 0) {
          if ((local_110 >> 1 & 1) == 0) goto LAB_180090d48;
          uVar21 = (ulonglong)local_fc >> 0x20;
          local_fc = CONCAT44((uint)uVar21 & 0xffffff00,0x3f800000);
        }
        else {
          local_f4 = 0;
          local_fc = 0;
        }
        piVar16 = &local_100;
      }
LAB_180090d48:
      local_108 = (longlong *)0x0;
      plVar13 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0);
      (**(code **)(*plVar13 + 0xd8))
                (plVar13,&local_a0,0,local_140,0,piVar16,&DAT_180235458,&local_108);
      plVar13 = local_108;
      if (local_108 != (longlong *)0x0) goto LAB_180090d8c;
    }
    else {
LAB_180090d8c:
      (**(code **)(*plVar13 + 8))(plVar13);
    }
    *(longlong **)((longlong)param_1 + 0x1c) = plVar13;
    if (plVar13 == (longlong *)0x0) {
      return 0;
    }
  }
  iStack_11c = 1;
  local_118 = 0;
  lVar14 = FUN_180090810(param_1,&local_e8);
  bVar9 = 0;
  *(longlong *)((longlong)param_1 + 0x14) = lVar14;
  if (lVar14 != 0) {
    piVar16 = &local_d0;
    if (param_9 == 0) {
      piVar16 = (int *)0x0;
    }
    bVar9 = FUN_1800904b8(param_1,&local_170,piVar16,piVar3,piVar2,param_4,param_5,param_17);
    if ((bVar9 & 1) != 0) goto LAB_180090e20;
    FUN_1800908f0(param_1,*(undefined8 *)((longlong)param_1 + 0x14));
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  }
  if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1800908f0(param_1);
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  }
LAB_180090e20:
  if (*(longlong *)((longlong)param_1 + 0x1c) == 0) {
    if (*(longlong *)((longlong)param_1 + 0x14) != 0) {
      *(ulonglong *)((longlong)param_1 + 0x14) =
           *(longlong *)((longlong)param_1 + 0x14) +
           (ulonglong)*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
    }
  }
  else {
    *(ulonglong *)((longlong)param_1 + 0x1c) =
         *(longlong *)((longlong)param_1 + 0x1c) +
         (ulonglong)*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
  }
  return bVar9;
}

