/*
 * FUN_180094ef8 at 180094ef8
 * undefined FUN_180094ef8(void)
 * Address ranges: 180094ef8-180095447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180094ef8(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,
                  int *param_6)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint extraout_w12;
  ulonglong extraout_x13;
  longlong extraout_x14;
  uint extraout_w15;
  longlong extraout_x15;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  uint local_d0 [2];
  longlong local_c8;
  longlong *local_c0;
  int *local_b8;
  int local_b0;
  int iStack_ac;
  undefined4 local_a8;
  int iStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int iStack_94;
  undefined4 local_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined4 local_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  int local_68 [6];
  
  local_b8 = param_6;
  FUN_180101df0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  lVar14 = (**(code **)(*(longlong *)(param_1 + -0x100) + 0xc0))(param_1 + -0x100,1);
  if (lVar14 == 0) {
    return 0;
  }
  plVar18 = *(longlong **)(lVar14 + 0x14);
  uVar10 = 1;
  iVar8 = (**(code **)(*plVar18 + 0x70))(plVar18,local_68,0);
  if (iVar8 < 0) {
    return 1;
  }
  if (((local_68[0] == 4) && (2 < *(int *)(param_1 + -0xbc) - 3U)) &&
     (*(int *)(*(longlong *)(param_1 + -0xa8) + 0x14c0) == 0)) {
    uVar12 = param_2 + *(int *)(param_1 + -0xc4) * param_3;
    uVar22 = (ulonglong)uVar12;
    lVar19 = *(longlong *)(*(longlong *)(param_1 + -0xb0) + 0x1b500);
    local_d0[0] = uVar12;
    local_c8 = lVar19;
    local_c0 = plVar18;
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar19 + 0x28);
    bVar6 = true;
    lVar19 = FUN_1800f2540(lVar19,&local_c0);
    if (lVar19 != 0) {
      plVar18 = (longlong *)FUN_1800f2718(lVar19 + 8,local_d0);
      if (plVar18 == (longlong *)0x0) {
        local_d0[0] = 0xffffffff;
        plVar18 = (longlong *)FUN_1800f2718(extraout_x15 + 8,local_d0);
        if (plVar18 == (longlong *)0x0) goto LAB_180095064;
      }
      if ((*(int *)((longlong)plVar18 + 0x14) == 0) || (*(int *)(*plVar18 + 0x30) == 3)) {
        uVar15 = (**(code **)(**(longlong **)(*plVar18 + 0x18) + 0x40))();
        bVar6 = true;
        if ((ulonglong)plVar18[3] <= uVar15) goto LAB_180095064;
      }
      bVar6 = false;
    }
LAB_180095064:
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(local_c8 + 0x28);
    if (bVar6) {
      if (uVar12 == 0x80004005) {
        return 1;
      }
      goto LAB_180095090;
    }
  }
  uVar22 = 0xffffffff;
LAB_180095090:
  uVar9 = *(uint *)(param_1 + -0xd4);
  uVar12 = *(uint *)(&DAT_180231470 + (ulonglong)uVar9 * 4);
  if (uVar12 == 0x18) {
    uVar12 = 0x20;
  }
  local_d0[0] = uVar12 >> 3;
  if (uVar12 < 8) {
    local_d0[0] = *(uint *)(&DAT_180231630 + (ulonglong)uVar9 * 4);
  }
  local_c8._0_4_ = (uint)(byte)(&DAT_1802316d8)[uVar9];
  uVar9 = FUN_1800a2b50(param_1 + -0x100,*(undefined4 *)(param_1 + -0xdc),param_2);
  uVar12 = uVar9;
  if (extraout_w15 < 8) {
    if (extraout_w12 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1800950f4);
      (*pcVar5)();
    }
    uVar12 = 0;
    if (extraout_w12 != 0) {
      uVar12 = uVar9 / extraout_w12;
    }
  }
  if ((int)uVar22 < 0) {
    local_c0 = (longlong *)0x0;
    local_c8._0_4_ = 0;
    iVar13 = FUN_180093e08(param_1 + -0x100,param_2,param_3);
    piVar4 = local_b8;
    plVar18 = local_c0;
    iVar8 = (uint)local_c8;
    uVar9 = local_d0[0];
    if (iVar13 == 0) {
      uVar10 = local_b8[1];
      if (uVar10 <= (uint)local_b8[3]) {
        bVar6 = uVar10 == local_b8[3];
        iVar13 = *local_b8;
        local_c8._0_4_ = param_3;
        do {
          if (bVar6) {
            uVar12 = piVar4[2];
          }
          uVar1 = iVar13 * uVar9;
          thunk_FUN_180001218((ulonglong)(uVar10 * param_5) + (ulonglong)uVar1 + param_4,
                              (ulonglong)(uVar10 * iVar8) + (ulonglong)uVar1 + (longlong)plVar18,
                              (uVar12 - iVar13) * uVar9);
          uVar1 = piVar4[3];
          uVar10 = uVar10 + 1;
          iVar13 = 0;
          bVar6 = uVar10 == uVar1;
          param_3 = (uint)local_c8;
        } while (uVar10 <= uVar1);
      }
      FUN_180094098(param_1 + -0x100,param_2,param_3);
      uVar10 = 1;
    }
  }
  else {
    bVar3 = *(byte *)(extraout_x14 + 0x30 + (extraout_x13 & 0xffffffff));
    (*(code *)**(undefined8 **)(param_1 + -0x100))();
    uVar9 = 1;
    if (*(char *)(*(longlong *)(lVar14 + 0x24) + uVar22 * 0x20 + 0xc) == '\0') {
      uVar10 = (**(code **)(**(longlong **)(lVar14 + 0x14) + 0x40))
                         (*(longlong **)(lVar14 + 0x14),uVar22,0,0);
      uVar9 = ~uVar10 >> 0x1f;
      *(byte *)(*(longlong *)(lVar14 + 0x24) + uVar22 * 0x20 + 0xc) = (byte)(~uVar10 >> 0x1f);
    }
    uVar10 = 1;
    if (uVar9 != 0) {
      lVar20 = *(longlong *)(param_1 + 0x30);
      uVar21 = *(undefined8 *)(lVar14 + 0x14);
      *(longlong *)(*(longlong *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508) + 0xb88) = lVar20;
      lVar19 = *(longlong *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508);
      *(int *)(lVar19 + 0x684) = *(int *)(lVar19 + 0x684) + 1;
      FUN_1800e8bb8(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),uVar21,uVar22,0,0);
      lVar19 = FUN_1800e9320(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508));
      lVar16 = *(longlong *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508);
      iVar8 = *(int *)(lVar16 + 0x684) + -1;
      *(int *)(lVar16 + 0x684) = iVar8;
      if (((iVar8 != 0) || (*(int *)(lVar16 + 0x678) < *(int *)(lVar16 + 0x680))) ||
         (cVar7 = FUN_1800e8548(lVar16 + 8,0), cVar7 == '\0' || (cVar7 == '\0' || lVar19 == 0))) {
        FUN_1800f2030(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf10) + 0x1b500),uVar21,uVar22);
      }
      else {
        FUN_1800e93d8(*(undefined8 *)(*(longlong *)(lVar20 + 0x1cf18) + 0x1508),lVar19);
      }
      iVar8 = *local_b8;
      uVar9 = local_b8[1];
      uVar1 = local_b8[2];
      uVar2 = local_b8[3];
      uVar17 = (uint)bVar3;
      if (iVar8 == 0) {
        uVar10 = 1;
      }
      else {
        iStack_ac = bVar3 * uVar9;
        local_b0 = (uint)local_c8 * iVar8;
        uVar10 = uVar12;
        if (uVar2 == uVar9) {
          uVar10 = uVar1;
        }
        iStack_a4 = uVar10 * (uint)local_c8;
        local_a8 = 0;
        local_a0 = uVar17 + uVar9 * bVar3;
        uStack_9c = 1;
        uVar10 = (**(code **)(**(longlong **)(lVar14 + 0x14) + 0x68))
                           (*(longlong **)(lVar14 + 0x14),
                            (ulonglong)(uVar9 * param_5) + (ulonglong)(local_d0[0] * iVar8) +
                            param_4,param_5,0,uVar22,&local_b0);
        uVar10 = ~uVar10 >> 0x1f;
        uVar9 = uVar9 + 1;
      }
      if (uVar9 < uVar2) {
        iStack_94 = uVar17 * uVar9;
        local_98 = 0;
        iStack_8c = uVar12 * (uint)local_c8;
        local_90 = 0;
        uVar11 = uVar2;
        if (uVar1 == uVar12) {
          uVar11 = uVar2 + 1;
        }
        local_88 = uVar11 * uVar17;
        uStack_84 = 1;
        uVar11 = (**(code **)(**(longlong **)(lVar14 + 0x14) + 0x68))
                           (*(longlong **)(lVar14 + 0x14),param_4 + (ulonglong)(uVar9 * param_5),
                            param_5,0,uVar22,&local_98);
        uVar9 = uVar2;
        if (uVar1 == uVar12) {
          uVar9 = uVar2 + 1;
        }
        uVar10 = uVar10 & ~uVar11 >> 0x1f;
      }
      if (uVar2 == uVar9) {
        iStack_7c = uVar17 * uVar9;
        local_80 = 0;
        iStack_74 = (uint)local_c8 * uVar1;
        local_78 = 0;
        local_70 = uVar17 + uVar2 * uVar17;
        uStack_6c = 1;
        uVar12 = (**(code **)(**(longlong **)(lVar14 + 0x14) + 0x68))
                           (*(longlong **)(lVar14 + 0x14),param_4 + (ulonglong)(uVar9 * param_5),
                            param_5,0,uVar22,&local_80);
        uVar10 = uVar10 & ~uVar12 >> 0x1f;
      }
    }
  }
  return uVar10;
}

