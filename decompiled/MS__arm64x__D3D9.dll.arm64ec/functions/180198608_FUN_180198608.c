/*
 * FUN_180198608 at 180198608
 * undefined FUN_180198608(void)
 * Address ranges: 180198608-180198b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180198608(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                  ,uint param_6,undefined4 param_7,int param_8,int param_9,int param_10,
                  undefined4 param_11,uint param_12,undefined4 param_13,undefined4 param_14,
                  undefined8 param_15,char param_16,char param_17)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong extraout_x8;
  longlong extraout_x8_00;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *pcVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  int local_e8;
  int iStack_e4;
  uint local_e0;
  uint local_dc [3];
  int *local_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  longlong lStack_b8;
  int local_b0;
  int iStack_ac;
  undefined8 local_a8;
  uint auStack_a0 [3];
  undefined4 uStack_94;
  uint local_90;
  uint uStack_8c;
  undefined4 local_88;
  ulonglong local_84;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  uint *local_50;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  lStack_b8 = 0;
  local_c0 = 0;
  local_84 = (ulonglong)param_6;
  uStack_7c = param_11;
  local_78 = param_12;
  uStack_74 = param_13;
  local_70 = param_14;
  iVar5 = 5;
  if (param_6 != 1 && param_17 != '\0') {
    iVar5 = 6;
  }
  iStack_ac = 5;
  iStack_c4 = iStack_ac;
  if ((param_12 & 0x40) != 0) {
    iStack_c4 = iVar5;
  }
  if (param_16 != '\0') {
    iStack_c4 = 9;
  }
  if (iStack_c4 == 5) {
    lStack_b8 = (ulonglong)param_5 << 0x20;
LAB_1801986a4:
    local_c0 = 0xffffffff00000000;
  }
  else if (iStack_c4 == 9) goto LAB_1801986a4;
  local_e0 = 0;
  local_dc[0] = 0;
  local_dc[1] = 0;
  local_a8 = 0;
  auStack_a0[0] = 0;
  auStack_a0[1] = 0;
  iStack_e4 = iStack_ac;
  if (param_6 != 1) {
    iStack_e4 = 6;
  }
  local_e8 = param_9;
  if (param_6 == 1) {
    iStack_ac = 3;
  }
  local_b0 = param_10;
  local_d0 = &local_b0;
  if (param_10 == 0) {
    local_d0 = (int *)0x0;
  }
  piVar1 = &local_e8;
  if (param_9 == 0) {
    piVar1 = (int *)0x0;
  }
  piVar7 = &local_c8;
  if (param_8 == 0) {
    piVar7 = (int *)0x0;
  }
  uVar14 = *(undefined8 *)param_1[2];
  local_c8 = param_8;
  auStack_a0[2] = param_2;
  uStack_94 = param_3;
  local_90 = param_4;
  uStack_8c = param_5;
  local_88 = param_7;
  if (param_6 == 1) {
LAB_18019874c:
    local_84 = 1;
    (*(code *)puVar3)(0x180224000);
    iVar5 = (*extraout_x11_00)(uVar14,auStack_a0 + 2,param_15,param_1 + 3);
    if (-1 < iVar5) {
      uVar14 = *(undefined8 *)param_1[2];
      param_1[5] = 0;
      if (param_1[6] == 0) {
        uVar10 = CONCAT44(0,param_4 * param_5);
        lVar11 = uVar10 * 0x28;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar10;
        if (SUB168(auVar17 * ZEXT816(0x28),8) != 0) {
          lVar11 = -1;
        }
        lVar11 = FUN_1802229a8(lVar11);
        param_1[6] = lVar11;
        if (lVar11 != 0) {
          FUN_180222c50(lVar11,0,uVar10 * 0x28);
        }
      }
      lVar11 = param_1[6];
      bVar4 = lVar11 != 0;
      if ((lVar11 == 0) || (piVar7 == (int *)0x0)) {
LAB_180198934:
        if (lVar11 == 0) goto LAB_180198828;
        if (((piVar1 != (int *)0x0) || (local_d0 != (int *)0x0)) && (param_5 != 0)) {
          local_68 = &local_e0;
          lVar11 = param_1[4];
          uVar16 = 0;
          local_60 = local_dc;
          if (param_9 == 0) {
            local_68 = (uint *)&DAT_00000008;
            local_60 = (uint *)&DAT_0000000c;
          }
          local_58 = (uint *)((longlong)&local_a8 + 4);
          local_50 = auStack_a0;
          if (param_10 == 0) {
            local_58 = (uint *)&DAT_0000000c;
            local_50 = (uint *)&DAT_00000010;
          }
          do {
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                if (piVar1 == (int *)0x0) {
                  if (lVar11 == 0) {
                    puVar2 = auStack_a0 + 1;
                    if (param_10 == 0) {
                      puVar2 = (uint *)&DAT_00000014;
                    }
                    *puVar2 = 1;
                    uVar9 = uVar15;
                    uVar12 = uVar16;
                  }
                  else {
                    uVar9 = uVar16;
                    uVar12 = 1;
                  }
                  *local_58 = uVar9;
                  *local_50 = uVar12;
                  uVar14 = 0x20;
                  if (lVar11 == 0) {
                    uVar14 = 0x18;
                  }
                  lVar6 = param_1[6] + (ulonglong)(uVar15 + uVar16 * param_4) * 0x28;
                  uVar14 = (*(code *)puVar3)(uVar14);
                  lVar6 = lVar6 + 8;
                  piVar7 = local_d0;
                  lVar8 = extraout_x8_00;
                  pcVar13 = extraout_x11_07;
                }
                else {
                  if (lVar11 == 0) {
                    puVar2 = local_dc + 1;
                    if (param_9 == 0) {
                      puVar2 = (uint *)&DAT_00000010;
                    }
                    *puVar2 = 1;
                    uVar9 = uVar15;
                    uVar12 = uVar16;
                  }
                  else {
                    uVar9 = uVar16;
                    uVar12 = 1;
                  }
                  *local_68 = uVar9;
                  *local_60 = uVar12;
                  lVar6 = param_1[6];
                  uVar14 = 0x20;
                  if (lVar11 == 0) {
                    uVar14 = 0x18;
                  }
                  lVar8 = (ulonglong)(uVar15 + uVar16 * param_4) * 5;
                  uVar14 = (*(code *)puVar3)(uVar14);
                  lVar6 = lVar6 + lVar8 * 8;
                  piVar7 = piVar1;
                  lVar8 = extraout_x8;
                  pcVar13 = extraout_x11_06;
                }
                iVar5 = (*pcVar13)(uVar14,*(undefined8 *)((longlong)param_1 + lVar8),piVar7,lVar6);
                if (iVar5 < 0) {
                  bVar4 = false;
                  break;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < param_4);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < param_5);
        }
        if (bVar4 == false) goto LAB_180198828;
      }
      else {
        lVar6 = param_1[4];
        if ((lVar6 == 0) || (param_17 == '\0')) {
          lVar6 = param_1[3];
        }
        auVar17 = (*(code *)puVar3)(0x180224000,uVar14,lVar6);
        iVar5 = (*extraout_x11_01)(auVar17._0_8_,auVar17._8_8_,piVar7,param_1 + 5);
        if (-1 < iVar5) goto LAB_180198934;
        bVar4 = false;
LAB_180198828:
        uVar16 = 0;
        if (param_5 != 0) {
          do {
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                uVar10 = (ulonglong)(uVar15 + uVar16 * param_4);
                if (*(longlong *)(param_1[6] + uVar10 * 0x28) != 0) {
                  (*(code *)puVar3)();
                  (*extraout_x11_02)();
                  *(undefined8 *)(param_1[6] + uVar10 * 0x28) = 0;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < param_4);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < param_5);
        }
        if (param_1[5] != 0) {
          (*(code *)puVar3)(0x180224000);
          (*extraout_x11_03)();
          param_1[5] = 0;
        }
      }
      if (bVar4 != false) goto LAB_180198908;
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_04)();
      param_1[3] = 0;
    }
    if (param_1[4] != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_05)();
      param_1[4] = 0;
    }
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar5 = (*extraout_x11)(uVar14,auStack_a0 + 2,0,param_1 + 4);
    if (-1 < iVar5) goto LAB_18019874c;
  }
  bVar4 = false;
LAB_180198908:
  lVar11 = param_1[4];
  if (lVar11 == 0) {
    if (param_1[3] != 0) {
      param_1[3] = param_1[3] +
                   (ulonglong)*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
    }
  }
  else {
    param_1[4] = lVar11 + (ulonglong)
                          *(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
  }
  return bVar4;
}

