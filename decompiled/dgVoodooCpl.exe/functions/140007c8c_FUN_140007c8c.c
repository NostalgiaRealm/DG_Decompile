/*
 * FUN_140007c8c at 140007c8c
 * undefined __fastcall FUN_140007c8c(longlong param_1, undefined8 param_2, wchar_t * param_3)
 * Address ranges: 140007c8c-140008684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140007c8c(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  HWND pHVar6;
  LRESULT LVar7;
  int *piVar8;
  BOOL bEnable;
  undefined8 uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  undefined8 uVar18;
  BOOL bEnable_00;
  int iVar19;
  CHAR local_2c8 [128];
  wchar_t local_248 [32];
  wchar_t local_208 [228];
  
  pwVar13 = (wchar_t *)0x0;
  piVar8 = *(int **)(param_1 + 0x88);
  bVar3 = false;
  uVar18 = 1;
  bEnable_00 = 1;
  uVar10 = 0;
  if (piVar8[0x95] != *piVar8) {
    uVar5 = uVar10;
    if (*piVar8 == 0) {
      pwVar11 = pwVar13;
      pwVar12 = pwVar13;
      pwVar14 = pwVar13;
      if (piVar8[0x94] != 0) {
        do {
          uVar5 = (**(code **)(**(longlong **)(piVar8 + (longlong)pwVar11 * 2 + 0x84) + 8))();
          piVar8 = *(int **)(param_1 + 0x88);
          if ((byte)pwVar12[0xa0013ebc] < (byte)(&DAT_140027d78)[uVar5]) {
            pwVar12 = (wchar_t *)(ulonglong)uVar5;
            uVar16 = (uint)pwVar11;
          }
          else {
            uVar16 = (uint)pwVar14;
          }
          uVar5 = (uint)pwVar11 + 1;
          pwVar11 = (wchar_t *)(ulonglong)uVar5;
          pwVar14 = (wchar_t *)(ulonglong)uVar16;
        } while (uVar5 < (uint)piVar8[0x94]);
        if (uVar16 != 0) {
          uVar5 = uVar16;
        }
      }
    }
    else {
      pwVar12 = pwVar13;
      if (piVar8[0x94] != 0) {
        do {
          uVar5 = (uint)pwVar12;
          iVar19 = (**(code **)(**(longlong **)(piVar8 + (longlong)pwVar12 * 2 + 0x84) + 8))();
          piVar8 = *(int **)(param_1 + 0x88);
          if (*piVar8 == iVar19) break;
          uVar5 = uVar5 + 1;
          pwVar12 = (wchar_t *)(ulonglong)uVar5;
        } while (uVar5 < (uint)piVar8[0x94]);
      }
    }
    bVar3 = false;
    if (uVar5 == piVar8[0x94]) {
      param_3 = (wchar_t *)0xffffffff;
      FUN_14000e4a0(param_1,0x3eb,-1);
    }
    else {
      uVar16 = piVar8[0x96];
      if (uVar5 != uVar16) {
        if (uVar16 != 0xffffffff) {
          (**(code **)(**(longlong **)(piVar8 + (longlong)(int)uVar16 * 2 + 0x84) + 0x20))();
          *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
        }
        uVar16 = -(uint)(**(int **)(param_1 + 0x88) != 0) & uVar5 + 1;
        param_3 = (wchar_t *)(ulonglong)uVar16;
        FUN_14000e4a0(param_1,0x3eb,uVar16);
        uVar15 = (ulonglong)uVar5;
        cVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar15 * 8) +
                            0x18))();
        if (cVar4 != '\0') {
          *(uint *)(*(longlong *)(param_1 + 0x88) + 600) = uVar5;
          pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
          SendMessageW(pHVar6,0x14b,0,0);
          uVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar15 * 8) +
                              0x28))();
          param_3 = L"All of them";
          FUN_14000e3d0(param_1,0x3ec,0x140027d48,0);
          pwVar12 = pwVar13;
          if (uVar5 != 0) {
            do {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x210 + uVar15 * 8);
              (**(code **)(*plVar1 + 0x30))(plVar1,pwVar12,local_248);
              uVar16 = (int)pwVar12 + 1;
              pwVar12 = (wchar_t *)(ulonglong)uVar16;
              param_3 = local_248;
              FUN_14000e3d0(param_1,0x3ec,(LPARAM)param_3,(ulonglong)uVar16);
            } while (uVar16 < uVar5);
          }
        }
        bVar3 = true;
      }
    }
    (*(undefined4 **)(param_1 + 0x88))[0x95] = **(undefined4 **)(param_1 + 0x88);
    iVar19 = **(int **)(param_1 + 0x88);
    if (((iVar19 == 1) || (iVar19 == 2)) || (iVar19 == 4)) {
      pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
      bEnable = bEnable_00;
    }
    else {
      pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x406);
      bEnable = 0;
    }
    EnableWindow(pHVar6,bEnable);
  }
  iVar19 = *(int *)(*(longlong *)(param_1 + 0x88) + 600);
  if (iVar19 == -1) {
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    SendMessageW(pHVar6,0x14b,0,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    SendMessageW(pHVar6,0x14b,0,0);
    FUN_14000e340(param_1,0x3ec,0x140027d68,0);
    FUN_14000e340(param_1,0x3ee,0x140027d68,0);
    FUN_14000e4a0(param_1,0x3ec,0);
    param_3 = (wchar_t *)0x0;
    FUN_14000e4a0(param_1,0x3ee,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    EnableWindow(pHVar6,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    EnableWindow(pHVar6,0);
    if (*(int *)(*(longlong *)(param_1 + 0x88) + 0x250) != 0) goto LAB_1400081f6;
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    SendMessageW(pHVar6,0x14b,0,0);
    FUN_14000e340(param_1,0x3eb,0x140027d68,0);
    pcVar17 = (char *)0x0;
    FUN_14000e4a0(param_1,0x3eb,0);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    bEnable_00 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)
                           (*(longlong *)(param_1 + 0x88) + 0x210 + (longlong)iVar19 * 8) + 0x28))()
    ;
    lVar2 = *(longlong *)(param_1 + 0x88);
    pwVar12 = pwVar13;
    do {
      uVar16 = (uint)pwVar12;
      if (*(uint *)(lVar2 + 4) == uVar16) break;
      uVar16 = uVar16 + 1;
      pwVar12 = (wchar_t *)(ulonglong)uVar16;
    } while (uVar16 <= uVar5);
    if (((uVar16 == uVar5 + 1) || (uVar16 == *(uint *)(lVar2 + 0x25c))) && (!bVar3))
    goto LAB_1400081f6;
    *(uint *)(lVar2 + 0x25c) = uVar16;
    FUN_14000e4a0(param_1,0x3ec,uVar16);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
    SendMessageW(pHVar6,0x14b,0,0);
    pcVar17 = "Default";
    FUN_14000e340(param_1,0x3ee,0x140027d60,0);
    if (uVar16 != 0) {
      iVar19 = uVar16 - 1;
      plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x88) + 0x210 +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
      cVar4 = (**(code **)(*plVar1 + 0x38))(plVar1,iVar19);
      uVar5 = 0;
      if (cVar4 == '\0') {
        plVar1 = *(longlong **)
                  (*(longlong *)(param_1 + 0x88) + 0x210 +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
        uVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,iVar19);
      }
      pwVar12 = pwVar13;
      if (uVar5 != 0) {
        do {
          plVar1 = *(longlong **)
                    (*(longlong *)(param_1 + 0x88) + 0x210 +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 600) * 8);
          (**(code **)(*plVar1 + 0x48))(plVar1,iVar19,pwVar12,local_248);
          uVar10 = (int)pwVar12 + 1;
          pwVar12 = (wchar_t *)(ulonglong)uVar10;
          pcVar17 = (char *)local_208;
          FUN_14000e3d0(param_1,0x3ee,(LPARAM)pcVar17,(ulonglong)uVar10);
        } while (uVar10 < uVar5);
      }
      uVar10 = 0;
      if (uVar5 != 0xffffffff) {
        pwVar12 = pwVar13;
        do {
          uVar10 = (uint)pwVar12;
          if (*(uint *)(*(longlong *)(param_1 + 0x88) + 8) == uVar10) break;
          uVar10 = uVar10 + 1;
          pwVar12 = (wchar_t *)(ulonglong)uVar10;
        } while (uVar10 < uVar5 + 1);
      }
    }
    if (uVar10 != uVar5 + 1) {
      pcVar17 = (char *)(ulonglong)uVar10;
      FUN_14000e4a0(param_1,0x3ee,uVar10);
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3eb);
    EnableWindow(pHVar6,(uint)(cVar4 != '\0'));
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ec);
    EnableWindow(pHVar6,(uint)(cVar4 != '\0'));
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ee);
  }
  EnableWindow(pHVar6,bEnable_00);
  param_3 = (wchar_t *)pcVar17;
LAB_1400081f6:
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x265) != '\0') {
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x20);
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ed);
    SendMessageW(pHVar6,0xf1,(ulonglong)(cVar4 == '\0'),0);
    param_3 = (wchar_t *)(ulonglong)(*(char *)(*(longlong *)(param_1 + 0x88) + 0x20) != '\0');
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3f0);
    SendMessageW(pHVar6,0xf1,(WPARAM)param_3,0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x265) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x266) != '\0') {
    LVar7 = FUN_14000e230(param_1,0x3ef);
    if ((uint)LVar7 != 0) {
      do {
        param_3 = pwVar13;
        iVar19 = FUN_14000e270(param_1,0x3ef,(ulonglong)pwVar13);
        if (iVar19 == *(int *)(*(longlong *)(param_1 + 0x88) + 0x1c)) {
          FUN_14000e4a0(param_1,0x3ef,(int)pwVar13);
          param_3 = pwVar13;
          break;
        }
        uVar10 = (int)pwVar13 + 1;
        pwVar13 = (wchar_t *)(ulonglong)uVar10;
      } while (uVar10 < (uint)LVar7);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x266) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x267) != '\0') {
    FUN_14000e200(param_1,0x401,
                  CONCAT71((int7)((ulonglong)param_3 >> 8),
                           *(int *)(*(longlong *)(param_1 + 0x88) + 0x18) == 1));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x267) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x268) != '\0') {
    FUN_14000e200(param_1,0x402,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x22)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x268) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26b) != '\0') {
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f3);
    SendMessageW(pHVar6,0x406,0,0x1900000);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f3);
    SendMessageW(pHVar6,0x414,100,0);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f3);
    uVar15 = (ulonglong)uVar10;
    SendMessageW(pHVar6,0x405,1,uVar15);
    FUN_140024290(local_2c8,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0xc),uVar15)
    ;
    FUN_14000e180(param_1,0x3ff,local_2c8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26b) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26c) != '\0') {
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f4);
    SendMessageW(pHVar6,0x406,0,0x1900000);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f4);
    SendMessageW(pHVar6,0x414,100,0);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x10);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f4);
    uVar15 = (ulonglong)uVar10;
    uVar9 = 0x405;
    SendMessageW(pHVar6,0x405,1,uVar15);
    FUN_140007c14(param_1,uVar9,uVar18,uVar15);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26c) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x26d) != '\0') {
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f5);
    SendMessageW(pHVar6,0x406,0,0x1900000);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f5);
    SendMessageW(pHVar6,0x414,100,0);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0x14);
    pHVar6 = (HWND)FUN_14000efb0(param_1);
    pHVar6 = GetDlgItem(pHVar6,0x3f5);
    uVar15 = (ulonglong)uVar10;
    SendMessageW(pHVar6,0x405,1,uVar15);
    FUN_140024290(local_2c8,"%d%%",(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x88) + 0x14),uVar15
                 );
    FUN_14000e180(param_1,0x405,local_2c8);
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26d) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x26e) != '\0') {
    FUN_14000e200(param_1,0x406,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x26)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26e) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x26f) != '\0') {
    FUN_14000e200(param_1,0x3fe,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x21)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x26f) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x270) != '\0') {
    FUN_14000e200(param_1,0x403,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x23)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x270) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x271) != '\0') {
    FUN_14000e200(param_1,0x404,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x24)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x271) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(char *)(lVar2 + 0x272) != '\0') {
    FUN_14000e200(param_1,0x40a,
                  CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x25)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x272) = 0;
  }
  return;
}

