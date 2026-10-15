/*
 * FUN_1801a7528 at 1801a7528
 * undefined FUN_1801a7528(void)
 * Address ranges: 1801a7528-1801a7bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1801a7528(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6
                  ,int param_7,undefined4 param_8,int param_9,undefined4 param_10,
                  undefined4 param_11,int param_12,int param_13,char param_14,char param_15,
                  byte param_16,char param_17)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong local_180;
  int local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined4 local_160 [2];
  undefined8 local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  int local_140;
  int iStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  uint local_130;
  undefined4 local_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined8 local_e4;
  int local_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  int *local_a0;
  int *piStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 uStack_6c;
  undefined4 local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  *(char *)((longlong)param_1 + 0x4d) = param_15;
  if (((*(char *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6e8) == '\0') ||
      (param_14 != '\0')) && (param_15 != '\0')) {
    local_e8 = 0;
  }
  else {
    local_e8 = 1;
  }
  local_e4 = 0;
  local_f0 = 4;
  if (local_e8 == 0) {
    local_f0 = 1;
  }
  uStack_ec = 3;
  if (local_e8 == 0) {
    uStack_ec = 0;
  }
  cVar8 = FUN_1801a6db8(param_1,param_4,param_5);
  if (cVar8 == '\0') {
    return 0;
  }
  if (param_15 == '\0') {
    iVar10 = FUN_18020d208(param_7);
    iVar11 = FUN_18020d2b0(param_7);
    uVar12 = FUN_18020d308(param_7);
    uVar14 = 1;
    if (param_7 - 0x46U < 0xf) {
      uVar14 = 4;
    }
    uStack_150 = 0;
    uVar17 = 0;
    if (param_5 != 0) {
      do {
        uVar15 = 0;
        uVar3 = param_3;
        uVar2 = param_2;
        if (param_4 != 0) {
          do {
            if (iVar10 == 0) {
              if (uVar2 < uVar12) {
                uVar18 = 1;
              }
              else {
                if (uVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801a7a20);
                  (*pcVar6)();
                }
                uVar18 = 0;
                if (uVar12 != 0) {
                  uVar18 = uVar2 / uVar12;
                }
              }
              iVar19 = uVar18 * iVar11;
              if (uVar3 < uVar14) {
                uVar18 = 1;
              }
              else {
                if (uVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(0xf004,0x1801a7a40);
                  (*pcVar6)();
                }
                uVar18 = 0;
                if (uVar14 != 0) {
                  uVar18 = uVar3 / uVar14;
                }
              }
            }
            else {
              iVar19 = uVar2 * iVar10;
              uVar18 = uVar3;
            }
            uVar1 = iVar19 + 0xffU & 0xffffff00;
            iVar19 = uVar1 * uVar18;
            uVar18 = (int)uStack_150 + 0x1ffU & 0xfffffe00;
            uVar4 = uVar15 + uVar17 * param_4;
            bVar7 = uVar2 == 1;
            uVar15 = uVar15 + 1;
            lVar13 = (ulonglong)uVar4 * 0x20;
            *(uint *)(*(longlong *)((longlong)param_1 + 0x24) + lVar13) = uVar18;
            *(uint *)(lVar13 + *(longlong *)((longlong)param_1 + 0x24) + 8) = uVar1;
            uStack_150 = (ulonglong)(iVar19 + uVar18);
            *(int *)(lVar13 + *(longlong *)((longlong)param_1 + 0x24) + 4) = iVar19;
            uVar2 = uVar2 >> 1;
            if (bVar7) {
              uVar2 = 1;
            }
            bVar7 = uVar3 == 1;
            uVar3 = uVar3 >> 1;
            if (bVar7) {
              uVar3 = 1;
            }
          } while (uVar15 < param_4);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < param_5);
    }
    local_130 = 0;
    local_160[0] = 1;
    local_158 = 0;
    local_138 = 0;
    uStack_134 = 1;
    local_148 = 0x1000100000001;
    local_140 = 0;
    iStack_13c = 1;
    lVar13 = FUN_1801a7168(param_1,&local_f0);
    bVar9 = 0;
    *(longlong *)((longlong)param_1 + 0x14) = lVar13;
    if (lVar13 != 0) {
      bVar9 = FUN_1801a6e10(param_1,0,0,0,0,param_4,param_5,0);
      if ((bVar9 & 1) != 0) goto LAB_1801a7b50;
      FUN_1801a7258(param_1,*(undefined8 *)((longlong)param_1 + 0x14));
      *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    }
    if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
      FUN_1801a7258(param_1);
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    }
LAB_1801a7b50:
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
  local_90 = 1;
  uStack_88 = 0;
  local_160[0] = 3;
  uStack_150 = (ulonglong)param_2;
  local_80 = 0;
  local_158 = 0;
  local_148 = CONCAT26((short)param_4,CONCAT24((short)param_5,param_3));
  local_138 = 0;
  uStack_134 = 0;
  local_130 = (uint)(param_12 != 0) | (uint)(param_13 != 0) << 1;
  if (param_17 == '\0' || param_6 == 1) {
    iStack_11c = (uint)param_16 * 4 + 5;
  }
  else {
    iStack_11c = 7;
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = param_10;
  uVar12 = param_5;
  if (iStack_11c == 5) {
LAB_1801a76a8:
    uStack_108 = (ulonglong)uVar12 << 0x20;
    local_110 = -0x100000000;
  }
  else {
    uStack_108._4_4_ = 0;
    if (iStack_11c == 7) {
      local_110 = (ulonglong)param_5 << 0x20;
      uStack_108 = 0;
    }
    else {
      uVar12 = uStack_108._4_4_;
      if (iStack_11c == 9) goto LAB_1801a76a8;
    }
  }
  local_100 = 0;
  local_b0 = 0;
  local_b8 = uStack_108;
  local_c0 = local_110;
  _local_d0 = CONCAT44(iStack_11c,param_9);
  _uStack_c8 = CONCAT44(uStack_114,param_11);
  if (iStack_11c == 5) {
    local_b0 = 1;
  }
  else if (iStack_11c == 9) {
    _local_d0 = CONCAT44(5,param_9);
    local_c0 = -0x100000000;
    local_b8 = (ulonglong)param_5 << 0x20;
    local_b0 = 0;
  }
  uStack_5c = 7;
  if (param_6 == 1) {
    uStack_5c = 5;
  }
  local_60 = param_12;
  local_70 = 0;
  uStack_74 = 6;
  if (param_6 == 1) {
    uStack_74 = 4;
  }
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_6c = 0;
  local_78 = param_13;
  local_64 = 0;
  *(undefined4 *)(param_1 + 8) = param_8;
  if (param_12 != 0) {
    *(int *)(param_1 + 9) = param_12;
  }
  local_a0 = &local_78;
  if (param_13 == 0) {
    local_a0 = (int *)0x0;
  }
  else {
    *(int *)(param_1 + 9) = param_13;
  }
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  piStack_98 = &local_60;
  if (param_12 == 0) {
    piStack_98 = (int *)0x0;
  }
  if (piStack_98 == (int *)0x0) {
    iVar10 = 0;
    if (local_a0 != (int *)0x0) {
      iVar10 = *local_a0;
    }
  }
  else {
    iVar10 = *piStack_98;
  }
  local_140 = param_7;
  local_120 = param_8;
  if (param_6 != 1) {
    iStack_13c = param_6;
    local_180 = FUN_18021a1e8(*(longlong *)((longlong)param_1 + 0xc) + 0x18b8,&local_90,0,local_160)
    ;
    if (local_180 == 0) {
      piVar16 = (int *)0x0;
      if (iVar10 != 0) {
        if ((local_130 & 1) == 0) {
          local_178 = iVar10;
          if ((local_130 >> 1 & 1) == 0) goto LAB_1801a77f0;
          local_174 = CONCAT35(local_174._5_3_,0x3f800000);
        }
        else {
          local_16c = 0;
          local_174 = 0;
        }
        piVar16 = &local_178;
        local_178 = iVar10;
      }
LAB_1801a77f0:
      local_180 = 0;
      FUN_18020d338(*param_1 + 0x6d0,(int)param_1[1],&local_90,0,local_160,0,piVar16);
    }
    else {
      (*(code *)puVar5)(0x180224000);
      (*extraout_x11)(local_180);
    }
    *(longlong *)((longlong)param_1 + 0x1c) = local_180;
    if (local_180 == 0) {
      return 0;
    }
  }
  iStack_13c = 1;
  local_138 = 0;
  local_180 = FUN_18021a1e8(*(longlong *)((longlong)param_1 + 0xc) + 0x18b8,&local_f0,0,local_160);
  if (local_180 == 0) {
    piVar16 = (int *)0x0;
    if (iVar10 != 0) {
      if ((local_130 & 1) == 0) {
        local_178 = iVar10;
        if ((local_130 >> 1 & 1) == 0) goto LAB_1801a78a4;
        local_174 = CONCAT35(local_174._5_3_,0x3f800000);
      }
      else {
        local_16c = 0;
        local_174 = 0;
      }
      piVar16 = &local_178;
      local_178 = iVar10;
    }
LAB_1801a78a4:
    local_180 = 0;
    FUN_18020d338(*param_1 + 0x6d0,(int)param_1[1],&local_f0,0,local_160,0,piVar16);
  }
  else {
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_00)(local_180);
  }
  *(longlong *)((longlong)param_1 + 0x14) = local_180;
  bVar9 = 0;
  if (local_180 != 0) {
    piVar16 = &local_d0;
    if (param_9 == 0) {
      piVar16 = (int *)0x0;
    }
    bVar9 = FUN_1801a6e10(param_1,&local_120,piVar16,piStack_98,local_a0,param_4,param_5,param_17);
    if ((bVar9 & 1) != 0) goto LAB_1801a7958;
    FUN_1801a7258(param_1,*(undefined8 *)((longlong)param_1 + 0x14));
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  }
  if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1801a7258(param_1);
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  }
LAB_1801a7958:
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

