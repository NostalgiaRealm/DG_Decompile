/*
 * FUN_180082d80 at 180082d80
 * undefined FUN_180082d80(void)
 * Address ranges: 180082d80-180083207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180082d80(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                  ,uint param_6,undefined4 param_7,int param_8,int param_9,int param_10,
                  undefined4 param_11,uint param_12,undefined4 param_13,undefined4 param_14,
                  undefined8 param_15,char param_16,char param_17)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  int local_f8;
  int iStack_f4;
  uint local_f0;
  uint local_ec [3];
  int local_e0;
  int iStack_dc;
  undefined8 local_d8;
  longlong lStack_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  uint auStack_b8 [3];
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  ulonglong local_9c;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint *local_80;
  uint *local_78;
  uint *local_70;
  uint *local_68;
  int *local_60;
  
  lStack_d0 = 0;
  local_d8 = 0;
  local_9c = (ulonglong)param_6;
  uStack_94 = param_11;
  local_90 = param_12;
  uStack_8c = param_13;
  local_88 = param_14;
  iVar6 = 5;
  if (param_6 != 1 && param_17 != '\0') {
    iVar6 = 6;
  }
  iStack_c4 = 5;
  iStack_dc = iStack_c4;
  if ((param_12 & 0x40) != 0) {
    iStack_dc = iVar6;
  }
  if (param_16 != '\0') {
    iStack_dc = 9;
  }
  if (iStack_dc == 5) {
    lStack_d0 = (ulonglong)param_5 << 0x20;
LAB_180082e20:
    local_d8 = 0xffffffff00000000;
  }
  else if (iStack_dc == 9) goto LAB_180082e20;
  local_f0 = 0;
  local_ec[0] = 0;
  local_ec[1] = 0;
  local_c0 = 0;
  auStack_b8[0] = 0;
  auStack_b8[1] = 0;
  iStack_f4 = iStack_c4;
  if (param_6 != 1) {
    iStack_f4 = 6;
  }
  local_f8 = param_9;
  if (param_6 == 1) {
    iStack_c4 = 3;
  }
  local_c8 = param_10;
  piVar9 = &local_c8;
  if (param_10 == 0) {
    piVar9 = (int *)0x0;
  }
  piVar1 = &local_f8;
  if (param_9 == 0) {
    piVar1 = (int *)0x0;
  }
  piVar2 = &local_e0;
  if (param_8 == 0) {
    piVar2 = (int *)0x0;
  }
  plVar16 = *(longlong **)param_1[2];
  local_e0 = param_8;
  auStack_b8[2] = param_2;
  uStack_ac = param_3;
  local_a8 = param_4;
  uStack_a4 = param_5;
  local_a0 = param_7;
  if ((param_6 == 1) ||
     (iVar6 = (**(code **)(*plVar16 + 0x28))(plVar16,auStack_b8 + 2,0,param_1 + 4), -1 < iVar6)) {
    local_9c = 1;
    iVar6 = (**(code **)(*plVar16 + 0x28))(plVar16,auStack_b8 + 2,param_15,param_1 + 3);
    if (-1 < iVar6) {
      plVar16 = *(longlong **)param_1[2];
      param_1[5] = 0;
      if (param_1[6] == 0) {
        uVar12 = CONCAT44(0,param_4 * param_5);
        lVar13 = uVar12 * 0x28;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar12;
        if (SUB168(auVar4 * ZEXT816(0x28),8) != 0) {
          lVar13 = -1;
        }
        lVar13 = thunk_FUN_180102f80(lVar13);
        param_1[6] = lVar13;
        if (lVar13 != 0) {
          func_0x000180222c50(lVar13,0,uVar12 * 0x28);
        }
      }
      lVar13 = param_1[6];
      bVar5 = lVar13 != 0;
      if ((lVar13 == 0) || (piVar2 == (int *)0x0)) {
LAB_180082f70:
        if (lVar13 == 0) goto LAB_1800830fc;
        if (((piVar1 != (int *)0x0) || (piVar9 != (int *)0x0)) && (param_5 != 0)) {
          local_80 = &local_f0;
          lVar13 = param_1[4];
          uVar17 = 0;
          local_78 = local_ec;
          if (param_9 == 0) {
            local_80 = (uint *)&DAT_00000008;
            local_78 = (uint *)&DAT_0000000c;
          }
          local_70 = (uint *)((longlong)&local_c0 + 4);
          local_68 = auStack_b8;
          local_60 = piVar9;
          if (param_10 == 0) {
            local_70 = (uint *)&DAT_0000000c;
            local_68 = (uint *)&DAT_00000010;
          }
          do {
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                if (piVar1 == (int *)0x0) {
                  if (lVar13 == 0) {
                    puVar3 = auStack_b8 + 1;
                    if (param_10 == 0) {
                      puVar3 = (uint *)&DAT_00000014;
                    }
                    *puVar3 = 1;
                    uVar11 = uVar15;
                    uVar14 = uVar17;
                  }
                  else {
                    uVar11 = uVar17;
                    uVar14 = 1;
                  }
                  *local_70 = uVar11;
                  piVar9 = local_60;
                  *local_68 = uVar14;
                  lVar7 = 0x20;
                  if (lVar13 == 0) {
                    lVar7 = 0x18;
                  }
                  uVar8 = *(undefined8 *)((longlong)param_1 + lVar7);
                  lVar7 = param_1[6] + (ulonglong)(uVar15 + uVar17 * param_4) * 0x28 + 8;
                  pcVar10 = *(code **)(*plVar16 + 0x50);
                }
                else {
                  if (lVar13 == 0) {
                    puVar3 = local_ec + 1;
                    if (param_9 == 0) {
                      puVar3 = (uint *)&DAT_00000010;
                    }
                    *puVar3 = 1;
                    uVar11 = uVar15;
                    uVar14 = uVar17;
                  }
                  else {
                    uVar11 = uVar17;
                    uVar14 = 1;
                  }
                  lVar7 = 0x20;
                  if (lVar13 == 0) {
                    lVar7 = 0x18;
                  }
                  *local_80 = uVar11;
                  *local_78 = uVar14;
                  uVar8 = *(undefined8 *)((longlong)param_1 + lVar7);
                  lVar7 = param_1[6] + (ulonglong)(uVar15 + uVar17 * param_4) * 0x28;
                  pcVar10 = *(code **)(*plVar16 + 0x48);
                  piVar9 = piVar1;
                }
                iVar6 = (*pcVar10)(plVar16,uVar8,piVar9,lVar7);
                if (iVar6 < 0) {
                  bVar5 = false;
                  break;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < param_4);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < param_5);
        }
        if (bVar5 == false) goto LAB_1800830fc;
      }
      else {
        lVar7 = param_1[4];
        if ((lVar7 == 0) || (param_17 == '\0')) {
          lVar7 = param_1[3];
        }
        iVar6 = (**(code **)(*plVar16 + 0x38))(plVar16,lVar7,piVar2,param_1 + 5);
        if (-1 < iVar6) goto LAB_180082f70;
        bVar5 = false;
LAB_1800830fc:
        uVar17 = 0;
        if (param_5 != 0) {
          do {
            if (param_4 != 0) {
              uVar15 = 0;
              do {
                uVar12 = (ulonglong)(uVar15 + uVar17 * param_4);
                plVar16 = *(longlong **)(param_1[6] + uVar12 * 0x28);
                if (plVar16 != (longlong *)0x0) {
                  (**(code **)(*plVar16 + 0x10))();
                  *(undefined8 *)(param_1[6] + uVar12 * 0x28) = 0;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < param_4);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < param_5);
        }
        if ((longlong *)param_1[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[5] + 0x10))();
          param_1[5] = 0;
        }
      }
      if (bVar5 != false) goto LAB_180083198;
      (**(code **)(*(longlong *)param_1[3] + 0x10))();
      param_1[3] = 0;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
      param_1[4] = 0;
    }
  }
  bVar5 = false;
LAB_180083198:
  lVar13 = param_1[4];
  if (lVar13 == 0) {
    if (param_1[3] != 0) {
      param_1[3] = param_1[3] +
                   (ulonglong)*(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
    }
  }
  else {
    param_1[4] = lVar13 + (ulonglong)
                          *(uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28 + 0x30);
  }
  return bVar5;
}

