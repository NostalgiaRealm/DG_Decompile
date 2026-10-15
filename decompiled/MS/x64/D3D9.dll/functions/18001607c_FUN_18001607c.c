/*
 * FUN_18001607c at 18001607c
 * undefined1 __fastcall FUN_18001607c(longlong * param_1, byte param_2, char param_3)
 * Address ranges: 18001607c-1800167b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18001607c(longlong *param_1,byte param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  HWND pHVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  EXECUTION_STATE EVar8;
  BOOL BVar9;
  longlong lVar10;
  LONG_PTR LVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  HWND pHVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  undefined1 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 local_res8 [8];
  byte local_res10;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_res10 = param_2;
  FUN_180015888(local_res8);
  lVar10 = DAT_180111f20;
  uVar20 = 1;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)(DAT_180111f20 + 0x8c2) >> 2 & 1;
  *(uint *)(param_1 + 3) = *(uint *)(lVar10 + 0x8c6) & 1;
  iVar2 = *(int *)(lVar10 + 0x160);
  *(int *)(lVar10 + 0x160) = iVar2 + 1;
  if ((iVar2 == 0) && (*(char *)(lVar10 + 0x825) != '\0')) {
    EVar8 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)(lVar10 + 0x15c) = EVar8;
  }
  local_44 = *(undefined4 *)((longlong)param_1 + 0xe4);
  local_7c = (undefined4)param_1[0x12];
  local_50._0_4_ = 1;
  local_74 = *(undefined4 *)((longlong)param_1 + 0x94);
  iVar2 = (int)param_1[0x1c];
  local_80 = (undefined4)param_1[0x15];
  local_78 = *(undefined4 *)((longlong)param_1 + 0xac);
  local_50 = 1;
  local_58[1] = 1;
  local_48 = iVar2;
  local_40 = local_7c;
  local_3c = local_74;
  if (*(int *)((longlong)param_1 + 0xcc) == -1) {
LAB_1800161e2:
    bVar23 = true;
    iVar19 = *(int *)((longlong)param_1 + 0xdc);
    if (iVar19 != 0) {
      if (param_3 != '\0') {
        local_50 = CONCAT44(local_50._4_4_,(undefined4)local_50) | 2;
        if ((iVar19 == 0x46) && (iVar2 == 0)) {
          uVar17 = 1;
        }
        else {
          uVar17 = 0;
        }
        puVar21 = &local_80;
        if (param_2 != 0) {
          puVar21 = (undefined4 *)0x0;
        }
        local_58[0] = iVar19;
        lVar10 = (**(code **)(*param_1 + 0xa8))
                           (param_1,local_58,puVar21,*(undefined4 *)((longlong)param_1 + 0xd4),
                            uVar17,0xffffffff);
        bVar23 = lVar10 != 0;
        param_1[0xf] = lVar10;
      }
      if (!bVar23) goto LAB_180016634;
    }
    lVar10 = DAT_180111f20;
    uVar22 = 0;
    uVar18 = 0;
    pHVar4 = (HWND)param_1[0x11];
    uVar3 = *(uint *)(DAT_180111f20 + 0x148);
    if (uVar3 != 0) {
      do {
        if (*(HWND *)(*(longlong *)(DAT_180111f20 + 0x140) + uVar22 * 0x18) == pHVar4)
        goto LAB_180016395;
        uVar18 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar18;
      } while (uVar18 < uVar3);
    }
    if (uVar18 == uVar3) {
      BVar9 = IsWindowUnicode(pHVar4);
      local_res8[0] = BVar9 != 0;
      iVar2 = *(int *)(lVar10 + 0x158);
      *(int *)(lVar10 + 0x158) = iVar2 + 1;
      BVar9 = IsWindowUnicode(pHVar4);
      if (BVar9 == 0) {
        LVar11 = GetWindowLongPtrA(pHVar4,-4);
      }
      else {
        LVar11 = GetWindowLongPtrW(pHVar4,-4);
      }
      iVar19 = *(int *)(lVar10 + 0x14c);
      if (*(int *)(lVar10 + 0x148) == iVar19) {
        uVar22 = 0x10;
        if (iVar19 != 0) {
          uVar22 = (ulonglong)(uint)(iVar19 * 2);
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar22;
        uVar12 = SUB168(ZEXT816(0x18) * auVar5,0);
        if (SUB168(ZEXT816(0x18) * auVar5,8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        puVar13 = (undefined8 *)thunk_FUN_1800fbccc(uVar12);
        if (puVar13 == (undefined8 *)0x0) goto LAB_180016395;
        FUN_1800fbec0(puVar13,*(undefined8 **)(lVar10 + 0x140),
                      (ulonglong)*(uint *)(lVar10 + 0x14c) * 0x18);
        FUN_1800fbcf0(*(LPVOID *)(lVar10 + 0x140));
        *(undefined8 **)(lVar10 + 0x140) = puVar13;
        *(int *)(lVar10 + 0x14c) = (int)uVar22;
      }
      uVar22 = (ulonglong)*(uint *)(lVar10 + 0x148);
      lVar14 = *(longlong *)(lVar10 + 0x140);
      *(HWND *)(lVar14 + uVar22 * 0x18) = pHVar4;
      *(LONG_PTR *)(lVar14 + 8 + uVar22 * 0x18) = LVar11;
      *(int *)(lVar14 + 0x10 + uVar22 * 0x18) = iVar2;
      *(undefined1 *)(lVar14 + 0x14 + uVar22 * 0x18) = local_res8[0];
      *(undefined2 *)(lVar14 + 0x15 + uVar22 * 0x18) = local_60._5_2_;
      *(undefined1 *)(lVar14 + 0x17 + uVar22 * 0x18) = local_60._7_1_;
      *(int *)(lVar10 + 0x148) = *(int *)(lVar10 + 0x148) + 1;
    }
LAB_180016395:
    cVar7 = (**(code **)(*(longlong *)param_1[0x10] + 0xc0))
                      ((longlong *)param_1[0x10],param_1[0x11],(int)param_1[0x18],(int)param_1[3],
                       *(undefined4 *)((longlong)param_1 + 0x14),
                       *(undefined4 *)((longlong)param_1 + 0xec),(int)param_1[0x1e],
                       *(char *)((longlong)param_1 + 0xf9) == '\0');
    if (cVar7 != '\0') {
      uVar22 = (ulonglong)*(uint *)(param_1 + 0x17);
      (**(code **)(*(longlong *)param_1[0x10] + 0xe0))
                ((longlong *)param_1[0x10],param_1[0x11],uVar22,
                 *(undefined4 *)((longlong)param_1 + 0xbc));
      *(int *)(param_1 + 2) = (int)param_1[0x1e];
      FUN_1800f8c40(lVar10,(HWND)param_1[0x11],uVar22,param_1);
      if ((*(char *)((longlong)param_1 + 0xf9) == '\0') && (*(char *)(lVar10 + 0x882) == '\0')) {
        LVar11 = GetWindowLongPtrW((HWND)param_1[0x11],-0x14);
        if (LVar11 != 0x40300) {
          SetWindowLongPtrW((HWND)param_1[0x11],-0x14,0x40300);
        }
        uVar22 = GetWindowLongPtrW((HWND)param_1[0x11],-0x10);
        if ((uVar22 & 0xcf0000) != 0xcf0000) {
          SetWindowLongPtrW((HWND)param_1[0x11],-0x10,0xcf0000);
        }
      }
      lVar14 = (**(code **)(*(longlong *)param_1[0x10] + 0x60))
                         ((longlong *)param_1[0x10],param_1[0x11],(int)param_1[0x15],
                          *(undefined4 *)((longlong)param_1 + 0xac),(int)param_1[0x18],
                          (int)param_1[3],*(undefined4 *)((longlong)param_1 + 0x14),
                          (int)param_1[0x16],*(undefined4 *)((longlong)param_1 + 0xb4),0);
      param_1[0x20] = lVar14;
      if (lVar14 != 0) {
        if (*(char *)((longlong)param_1 + 0xf9) == '\0') {
          BVar9 = IsWindowVisible((HWND)param_1[0x11]);
          if (BVar9 == 0) {
            ShowWindow((HWND)param_1[0x11],1);
          }
          local_60 = param_1[0x14];
          local_70 = param_1[0x15];
          lStack_68 = param_1[0x16];
          *(byte *)(param_1 + 8) = local_res10 ^ 1;
          FUN_180030cb4(param_1);
          if ((*(char *)(lVar10 + 0x9f6) == '\0') && (*(char *)((longlong)param_1 + 0xfa) == '\0'))
          {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          cVar7 = (**(code **)(*(longlong *)param_1[0x10] + 0xe8))
                            ((longlong *)param_1[0x10],param_1[0x11],&local_70,uVar12);
          FUN_180030cf0(param_1);
          FUN_180030d2c(param_1);
          if ((*(char *)(lVar10 + 0x9f6) != '\0') && (*(char *)((longlong)param_1 + 0xfa) == '\0'))
          {
            PostMessageW((HWND)param_1[0x11],0x400,0x44454745,0);
          }
          if (!(bool)(cVar7 != '\0' & bVar23)) {
            (**(code **)(*(longlong *)param_1[0x20] + 0x20))();
            param_1[0x20] = 0;
            goto LAB_18001661d;
          }
        }
        LOCK();
        iVar2 = DAT_180111f38 + 1;
        UNLOCK();
        bVar23 = DAT_180111f38 == 0;
        DAT_180111f38 = iVar2;
        if (bVar23) {
          puVar13 = (undefined8 *)FUN_1800fbccc(0x90);
          lVar10 = DAT_180111f20;
          if (puVar13 == (undefined8 *)0x0) {
            DAT_180111f48 = (undefined8 *)0x0;
          }
          else {
            *puVar13 = &PTR_FUN_1801014d0;
            puVar13[1] = lVar10;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
            *(undefined4 *)(puVar13 + 8) = 0;
            FUN_1800fbea0((undefined1 *)(puVar13 + 9),0,0x48);
            DAT_180111f48 = puVar13;
          }
        }
        puVar13 = DAT_180111f48;
        if (DAT_180111f48 != (undefined8 *)0x0) {
          iVar2 = *(int *)((longlong)DAT_180111f48 + 0x1c);
          if (*(int *)(DAT_180111f48 + 3) == iVar2) {
            uVar22 = 0x10;
            if (iVar2 != 0) {
              uVar22 = (ulonglong)(uint)(iVar2 * 2);
            }
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar22;
            uVar12 = SUB168(ZEXT816(8) * auVar6,0);
            if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
              uVar12 = 0xffffffffffffffff;
            }
            puVar15 = (undefined8 *)thunk_FUN_1800fbccc(uVar12);
            if (puVar15 == (undefined8 *)0x0) goto LAB_18001678b;
            FUN_1800fbec0(puVar15,(undefined8 *)puVar13[2],
                          (ulonglong)*(uint *)((longlong)puVar13 + 0x1c) << 3);
            FUN_1800fbcf0((LPVOID)puVar13[2]);
            puVar13[2] = puVar15;
            *(int *)((longlong)puVar13 + 0x1c) = (int)uVar22;
          }
          *(ulonglong *)(puVar13[2] + (ulonglong)*(uint *)(puVar13 + 3) * 8) =
               -(ulonglong)(param_1 != (longlong *)0x0) & (ulonglong)(param_1 + 9);
          *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
        }
LAB_18001678b:
        if ((*(char *)((longlong)param_1 + 0xf9) == '\0') ||
           (pHVar4 = (HWND)param_1[0x11], pHVar16 = GetActiveWindow(), pHVar16 == pHVar4)) {
          uVar17 = 1;
        }
        else {
          uVar17 = 0;
        }
        *(undefined1 *)((longlong)param_1 + 0x121) = uVar17;
        goto LAB_180016666;
      }
LAB_18001661d:
      (**(code **)(*(longlong *)param_1[0x10] + 200))((longlong *)param_1[0x10],param_1[0x11]);
    }
  }
  else {
    uVar22 = 0;
    puVar21 = &local_80;
    bVar23 = true;
    if (local_res10 != 0) {
      puVar21 = (undefined4 *)0x0;
      bVar23 = true;
    }
    do {
      if (!bVar23) goto LAB_180016634;
      local_58[0] = (int)param_1[0x1b];
      iVar19 = (int)uVar22;
      if ((((char)param_1[0x1f] == '\0') || (iVar2 != 0)) && (iVar19 != 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = 1;
      }
      lVar10 = (**(code **)(*param_1 + 0xa8))
                         (param_1,local_58,puVar21,(int)param_1[0x1a],uVar17,iVar19);
      if (lVar10 == 0) {
        bVar23 = false;
      }
      else {
        param_1[uVar22 + 0xb] = lVar10;
      }
      uVar22 = (ulonglong)(iVar19 + 1U);
    } while (iVar19 + 1U < *(int *)((longlong)param_1 + 0xcc) + 1U);
    if (bVar23) {
      param_2 = local_res10;
      goto LAB_1800161e2;
    }
  }
LAB_180016634:
  lVar10 = DAT_180111f20;
  piVar1 = (int *)(DAT_180111f20 + 0x160);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(lVar10 + 0x825) != '\0')) {
    SetThreadExecutionState(*(EXECUTION_STATE *)(lVar10 + 0x15c));
    *(undefined4 *)(lVar10 + 0x15c) = 0;
  }
  uVar20 = 0;
LAB_180016666:
  FUN_180015904();
  return uVar20;
}

