/*
 * FUN_18007ed80 at 18007ed80
 * undefined FUN_18007ed80(void)
 * Address ranges: 18007ed80-18007f577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18007ed80(longlong param_1,ulonglong param_2,int param_3,int param_4,int param_5,
             longlong *param_6,longlong *param_7,longlong param_8,int *param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 local_140;
  undefined8 uStack_138;
  int local_130;
  int iStack_12c;
  uint local_128;
  undefined8 local_120;
  uint local_118;
  int local_108;
  int iStack_104;
  uint local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_120 = param_1 + 0x1c000;
  uVar16 = param_2 & 0xffffffff;
  FUN_1800e5470(*(undefined8 *)(param_1 + 0x1cf10),param_2,param_1);
  uStack_138 = *(undefined8 *)(param_8 + 0x34);
  local_140 = *(ulonglong *)(param_8 + 0x2c);
  uVar2 = *(uint *)(param_8 + 0x3c);
  uVar3 = *(uint *)(param_8 + 0x40);
  local_108 = (**(code **)(*param_7 + 0x40))(param_7,param_4);
  local_130 = (**(code **)(*param_7 + 0x48))(param_7,param_4);
  uVar8 = (**(code **)(*param_6 + 0x40))(param_6,uVar16);
  uStack_d4 = (**(code **)(*param_6 + 0x48))(param_6,uVar16);
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = local_108;
  iStack_c4 = local_130;
  local_d8 = uVar8;
  if ((*(char *)(param_8 + 0x4d) == '\0') && (*(char *)(param_8 + 0x4c) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    (*__imp_USER32_dll_IntersectRect)(&local_140,&local_140,&local_e0);
  }
  (*__imp_USER32_dll_OffsetRect)
            (&local_140,uVar2 - *(int *)(param_8 + 0x2c),uVar3 - *(int *)(param_8 + 0x30));
  if (bVar6) {
    (*__imp_USER32_dll_IntersectRect)(&local_140,&local_140,&local_d0);
  }
  (*__imp_USER32_dll_OffsetRect)
            (&local_140,*(int *)(param_8 + 0x2c) - uVar2,*(int *)(param_8 + 0x30) - uVar3);
  iStack_ec = ((int)uStack_138 - (int)local_140) + uVar2;
  local_f0 = 0;
  local_e8 = (uStack_138._4_4_ - local_140._4_4_) + uVar3;
  uStack_e4 = 1;
  iVar9 = (int)param_2;
  iVar5 = iVar9 + *(int *)((longlong)param_6 + 0x3c) * param_3;
  local_f8 = uVar2;
  uStack_f4 = uVar3;
  if (((*(int *)(*(longlong *)(local_120 + 0xf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 +
                0x6cc) == 0xa000) && (*(int *)((longlong)param_7 + 0x44) - 3U < 3)) &&
     (cVar7 = (**(code **)(*param_6 + 0xa8))(param_6), cVar7 != '\0')) {
    (**(code **)(*param_7 + 8))(param_7,param_2 & 0xffffffff,param_3,0);
    (**(code **)(*param_6 + 8))(param_6,uVar16,param_3,0);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c0 = (float)(int)local_140;
    local_60 = 0;
    uStack_58 = 0;
    fStack_bc = (float)local_140._4_4_;
    local_b8 = (float)(int)uStack_138;
    fStack_b4 = (float)uStack_138._4_4_;
    local_b0 = (float)uVar2;
    fStack_ac = (float)uVar3;
    local_a8 = (float)(((int)uStack_138 - (int)local_140) + uVar2);
    local_a0 = CONCAT44(param_3,iVar9);
    fStack_a4 = (float)((uStack_138._4_4_ - local_140._4_4_) + uVar3);
    uStack_98 = CONCAT44(param_5,param_4);
    local_130 = iVar9;
    iStack_12c = param_3;
    local_108 = param_4;
    iStack_104 = param_5;
    uVar8 = FUN_18007ec50(param_1,&local_c0,param_6,param_7);
    goto LAB_18007f014;
  }
  uVar8 = 1;
  cVar7 = (**(code **)(*param_7 + 0xa8))(param_7);
  if (cVar7 != '\0') {
    (**(code **)(*param_7 + 8))(param_7,param_4,param_5,*(char *)(param_8 + 0x51) == '\0');
  }
  cVar7 = (**(code **)(*param_6 + 0xa8))(param_6);
  if (cVar7 != '\0') {
    (**(code **)(*param_6 + 8))(param_6,uVar16,param_3,0);
  }
  uVar17 = (ulonglong)(uint)(param_4 + *(int *)((longlong)param_7 + 0x3c) * param_5);
  iVar9 = *(int *)(param_8 + 0x18);
  if (iVar9 == 0) {
    iVar9 = (*__imp_USER32_dll_IntersectRect)
                      (&local_108,param_7[0x12] + uVar17 * 0x28 + 0x18,param_10);
    if (iVar9 != 0) {
      (**(code **)*param_7)(param_7,param_4,param_5);
    }
    (**(code **)*param_6)(param_6,uVar16,param_3);
    uVar2 = *(uint *)(&DAT_180231470 + (ulonglong)*(uint *)((longlong)param_7 + 0x2c) * 4);
    if (((uVar2 < 8) || (0x20 < param_10[2] - *param_10)) || (0x20 < param_10[3] - param_10[1])) {
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      lVar12 = *plVar10;
      if (*(char *)(param_8 + 0x51) == '\0') {
        (**(code **)(lVar12 + 0x170))
                  (plVar10,param_6[0x17],iVar5,*param_9,param_9[1],0,*(undefined8 *)(param_8 + 8),
                   uVar17,&local_f8);
      }
      else {
        (**(code **)(lVar12 + 0x178))();
      }
    }
    else {
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      iVar9 = (**(code **)(*plVar10 + 0x70))
                        (plVar10,*(undefined8 *)(param_8 + 8),uVar17,1,0,&local_120);
      if (-1 < iVar9) {
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
        iVar9 = (**(code **)(*plVar10 + 0x70))
                          (plVar10,*(undefined8 *)(param_8 + 0x10),iVar5,2,0,&local_130);
        if (-1 < iVar9) {
          iVar9 = param_10[1];
          if (uVar2 == 0x10) {
            lVar12 = local_120 + (ulonglong)(iVar9 * local_118);
            lVar11 = CONCAT44(iStack_12c,local_130) + (ulonglong)(param_9[1] * local_128);
            iVar15 = 0;
            if (0 < param_10[3] - iVar9) {
              do {
                iVar9 = *param_10;
                if (0 < param_10[2] - iVar9) {
                  iVar14 = 0;
                  do {
                    iVar9 = iVar9 + iVar14;
                    iVar1 = *param_9 + iVar14;
                    iVar14 = iVar14 + 1;
                    *(undefined2 *)(lVar11 + (longlong)iVar1 * 2) =
                         *(undefined2 *)(lVar12 + (longlong)iVar9 * 2);
                    iVar9 = *param_10;
                  } while (iVar14 < param_10[2] - iVar9);
                }
                iVar15 = iVar15 + 1;
                lVar12 = lVar12 + (ulonglong)local_118;
                lVar11 = lVar11 + (ulonglong)local_128;
              } while (iVar15 < param_10[3] - param_10[1]);
            }
          }
          else {
            lVar12 = local_120 + (ulonglong)(iVar9 * local_118);
            lVar11 = CONCAT44(iStack_12c,local_130) + (ulonglong)(param_9[1] * local_128);
            iVar15 = 0;
            if (0 < param_10[3] - iVar9) {
              do {
                if (uVar2 == 8) {
                  iVar9 = *param_10;
                  if (0 < param_10[2] - iVar9) {
                    iVar14 = 0;
                    do {
                      iVar9 = iVar9 + iVar14;
                      iVar1 = *param_9 + iVar14;
                      iVar14 = iVar14 + 1;
                      *(undefined1 *)(lVar11 + iVar1) = *(undefined1 *)(lVar12 + iVar9);
                      iVar9 = *param_10;
                    } while (iVar14 < param_10[2] - iVar9);
                  }
                }
                else if (((uVar2 - 0x18 & 0xfffffff7) == 0) &&
                        (iVar9 = *param_10, 0 < param_10[2] - iVar9)) {
                  iVar14 = 0;
                  do {
                    iVar9 = iVar9 + iVar14;
                    iVar1 = *param_9 + iVar14;
                    iVar14 = iVar14 + 1;
                    *(undefined4 *)(lVar11 + (longlong)iVar1 * 4) =
                         *(undefined4 *)(lVar12 + (longlong)iVar9 * 4);
                    iVar9 = *param_10;
                  } while (iVar14 < param_10[2] - iVar9);
                }
                iVar15 = iVar15 + 1;
                lVar12 = lVar12 + (ulonglong)local_118;
                lVar11 = lVar11 + (ulonglong)local_128;
              } while (iVar15 < param_10[3] - param_10[1]);
            }
          }
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
          (**(code **)(*plVar10 + 0x78))(plVar10,*(undefined8 *)(param_8 + 0x10),iVar5);
        }
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
        (**(code **)(*plVar10 + 0x78))(plVar10,*(undefined8 *)(param_8 + 8),uVar17);
      }
    }
    pcVar13 = *(code **)(*param_6 + 0x10);
  }
  else {
    if (iVar9 == 1) {
      (**(code **)(*param_6 + 8))(param_6,uVar16,param_3,0);
LAB_18007f138:
      if (*(char *)(param_8 + 0x51) == '\0') {
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
        (**(code **)(*plVar10 + 0x170))
                  (plVar10,*(undefined8 *)(param_8 + 0x10),iVar5,local_140 & 0xffffffff,
                   local_140._4_4_,0,*(undefined8 *)(param_8 + 8),uVar17,&local_f8);
      }
      else {
        if ((*(uint *)(param_8 + 0x24) < 2) || (*(int *)(param_8 + 0x28) != 1)) {
          lVar12 = *(longlong *)(param_8 + 8);
          lVar11 = *(longlong *)(param_8 + 0x10);
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
          pcVar13 = *(code **)(*plVar10 + 0x178);
          goto LAB_18007f0ec;
        }
        if (*(uint *)((longlong)param_6 + 0x2c) < 0xe) {
          uVar4 = *(undefined4 *)(param_1 + 0x44);
        }
        else {
          func_0x0001801bad48(&local_120);
          uVar4 = local_120._4_4_;
        }
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
        (**(code **)(*plVar10 + 0x1c8))
                  (plVar10,*(undefined8 *)(param_8 + 0x10),iVar5,*(undefined8 *)(param_8 + 8),uVar17
                   ,uVar4);
      }
    }
    else {
      if (iVar9 != 2) {
        if (iVar9 != 3) goto LAB_18007f53c;
        goto LAB_18007f138;
      }
      lVar12 = param_7[0x17];
      lVar11 = param_6[0xf];
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      if (*(char *)(param_8 + 0x51) == '\0') {
        (**(code **)(*plVar10 + 0x170))
                  (plVar10,lVar11,iVar5,local_140 & 0xffffffff,local_140._4_4_,0,lVar12,uVar17,
                   &local_f8);
        goto LAB_18007f014;
      }
      pcVar13 = *(code **)(*plVar10 + 0x178);
LAB_18007f0ec:
      (*pcVar13)(plVar10,lVar11,lVar12);
    }
LAB_18007f014:
    pcVar13 = *(code **)(*param_6 + 0x18);
  }
  (*pcVar13)(param_6,iVar5,param_9);
LAB_18007f53c:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0x1cf10) + 0x620);
  return uVar8;
}

