/*
 * FUN_18000a178 at 18000a178
 * undefined8 __cdecl FUN_18000a178(longlong param_1, int param_2)
 * Address ranges: 18000a178-18000a6b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000a178(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  BOOL BVar10;
  undefined8 uVar11;
  longlong lVar12;
  code *pcVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  HWND hWnd;
  longlong lVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if ((*(char *)(param_1 + 100) == '\0') ||
     ((param_2 != 0 && (param_2 != *(int *)(param_1 + 0x58))))) {
    uVar11 = 0;
  }
  else {
    iVar21 = *(int *)(param_1 + 0x60);
    *(undefined1 *)(param_1 + 100) = 0;
    while (iVar21 != 0) {
      Sleep(1);
      iVar21 = *(int *)(param_1 + 0x60);
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      (**(code **)(param_1 + 0x80))();
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
      FreeLibrary(*(HMODULE *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    bVar9 = FUN_180008208();
    if (((bVar9 & 1) == 0) || (*(char *)(param_1 + 0x65) != '\0')) {
      lVar16 = *(longlong *)(param_1 + 0x18);
      if (*(char *)(lVar16 + 0xee) == '\0') {
        ShowCursor(1);
        *(undefined1 *)(lVar16 + 0xee) = 1;
      }
      bVar7 = false;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0);
      if ((lVar16 != 0) &&
         (lVar16 = FUN_180007a00(*(longlong *)(param_1 + 0x30),lVar16), lVar16 != 0)) {
        bVar7 = *(int *)(lVar16 + 0x3c) != 0;
      }
      FUN_180013060(param_1,0,0);
      hWnd = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
      if (hWnd != (HWND)0x0) {
        lVar17 = *(longlong *)(param_1 + 0x30);
        lVar16 = 0;
        if (param_1 != 0) {
          lVar16 = param_1 + 8;
        }
        lVar12 = FUN_180007a00(lVar17,(longlong)hWnd);
        if (*(uint *)(lVar17 + 0x138) != 0) {
          lVar15 = *(longlong *)(lVar17 + 0x130);
          uVar19 = 0;
LAB_18000a2c0:
          lVar20 = uVar19 * 0x60;
          lVar2 = lVar20 + lVar15;
          uVar18 = (uint)uVar19;
          if ((*(HWND *)(lVar20 + lVar15) != hWnd) ||
             (*(longlong *)(lVar15 + 0x10 + lVar20) != lVar16)) goto LAB_18000a2e8;
          if ((*(longlong *)(lVar2 + 0x20) == 0) ||
             (*(int *)(lVar17 + 0x128) = *(int *)(lVar17 + 0x128) + -1, lVar12 != lVar2))
          goto LAB_18000a50c;
          iVar21 = *(int *)(lVar2 + 0x40);
          while (iVar21 != 0) {
            ShowCursor(0);
            iVar21 = *(int *)(lVar2 + 0x40) + -1;
            *(int *)(lVar2 + 0x40) = iVar21;
          }
          uVar14 = uVar18;
          do {
            iVar21 = (int)uVar19;
            if (uVar14 == 0) {
              lVar16 = *(longlong *)(lVar20 + *(longlong *)(lVar17 + 0x130) + 0x20);
              KillTimer(hWnd,0xaaaa);
              goto LAB_18000a384;
            }
            uVar14 = iVar21 - 1;
            uVar19 = (ulonglong)uVar14;
            plVar3 = (longlong *)(*(longlong *)(lVar17 + 0x130) + uVar19 * 0x60);
          } while ((HWND)*plVar3 != hWnd);
          lVar16 = plVar3[5];
LAB_18000a384:
          if (lVar16 != 0) {
            uVar14 = *(uint *)(lVar20 + *(longlong *)(lVar17 + 0x130) + 0x38);
            BVar10 = IsWindowUnicode(hWnd);
            pcVar13 = GetWindowLongPtrA_exref;
            if (BVar10 != 0) {
              pcVar13 = GetWindowLongPtrW_exref;
            }
            lVar12 = (*pcVar13)(hWnd,0xfffffffc);
            bVar8 = lVar12 == *(longlong *)(lVar17 + 0x110) + (ulonglong)(uVar14 * 0x70);
            if (*(uint *)(lVar17 + 0x148) != 0) {
              uVar19 = 0;
              do {
                plVar3 = (longlong *)(*(longlong *)(lVar17 + 0x140) + uVar19 * 0x18);
                if ((HWND)*plVar3 == hWnd) {
                  iVar6 = (int)plVar3[2];
                  if (iVar6 != -1) {
                    uVar1 = iVar6 * 0x2c;
                    *(longlong *)(*(longlong *)(lVar17 + 0x108) + 0x1c + (ulonglong)uVar1) = lVar16;
                    if ((iVar21 != 0) ||
                       (bVar8 = true, lVar12 != *(longlong *)(lVar17 + 0x108) + (ulonglong)uVar1)) {
                      bVar8 = false;
                    }
                  }
                  break;
                }
                uVar1 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(lVar17 + 0x148));
            }
            if (bVar8) {
              FUN_1800072f0(lVar12,hWnd,lVar16);
              lVar16 = lVar17 + ((ulonglong)(uVar14 >> 6) + 0x2a) * 8;
              uVar19 = (ulonglong)(uVar14 >> 3) & 7;
              *(byte *)(lVar16 + uVar19) =
                   *(byte *)(lVar16 + uVar19) & ((byte)(1 << ((ulonglong)uVar14 & 7)) ^ 0xff);
            }
            else {
              *(longlong *)(*(longlong *)(lVar17 + 0x110) + 0x68 + (ulonglong)(uVar14 * 0x70)) =
                   lVar16;
              if (*(uint *)(lVar17 + 0x148) != 0) {
                uVar19 = 0;
                do {
                  plVar3 = (longlong *)(*(longlong *)(lVar17 + 0x140) + uVar19 * 0x18);
                  if ((HWND)*plVar3 == hWnd) {
                    *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(lVar17 + 0x158);
                    *(int *)(lVar17 + 0x158) = *(int *)(lVar17 + 0x158) + 1;
                    break;
                  }
                  uVar14 = (int)uVar19 + 1;
                  uVar19 = (ulonglong)uVar14;
                } while (uVar14 < *(uint *)(lVar17 + 0x148));
              }
            }
          }
LAB_18000a50c:
          uVar14 = *(uint *)(lVar17 + 0x138);
          if (uVar18 < uVar14) {
            while( true ) {
              uVar1 = uVar18 + 1;
              if (uVar14 <= uVar1) break;
              puVar4 = (undefined8 *)(*(longlong *)(lVar17 + 0x130) + (ulonglong)uVar18 * 0x60);
              puVar5 = (undefined8 *)(*(longlong *)(lVar17 + 0x130) + (ulonglong)uVar1 * 0x60);
              uVar23 = *puVar5;
              uVar22 = puVar5[3];
              uVar11 = puVar5[2];
              puVar4[1] = puVar5[1];
              *puVar4 = uVar23;
              puVar4[3] = uVar22;
              puVar4[2] = uVar11;
              uVar23 = puVar5[4];
              uVar22 = puVar5[7];
              uVar11 = puVar5[6];
              puVar4[5] = puVar5[5];
              puVar4[4] = uVar23;
              puVar4[7] = uVar22;
              puVar4[6] = uVar11;
              uVar23 = puVar5[8];
              uVar22 = puVar5[0xb];
              uVar11 = puVar5[10];
              puVar4[9] = puVar5[9];
              puVar4[8] = uVar23;
              puVar4[0xb] = uVar22;
              puVar4[10] = uVar11;
              uVar14 = *(uint *)(lVar17 + 0x138);
              uVar18 = uVar1;
            }
            *(uint *)(lVar17 + 0x138) = uVar14 - 1;
          }
        }
      }
LAB_18000a56c:
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
      if (*(longlong *)(param_1 + 0x38) != 0) {
        PostMessageW(*(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0),0x401,0,0);
        lVar16 = *(longlong *)(param_1 + 0x48);
        while (lVar16 != 0) {
          Sleep(1);
          lVar16 = *(longlong *)(param_1 + 0x48);
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      lVar16 = *(longlong *)(param_1 + 0x30);
      iVar21 = *(int *)(lVar16 + 0x370) + -1;
      *(int *)(lVar16 + 0x370) = iVar21;
      if ((iVar21 == 0) && (DAT_18006fa60 != (HANDLE)0x0)) {
        if (*(char *)(lVar16 + 0x7e8) != '\0') {
          PostThreadMessageW(*(DWORD *)(lVar16 + 0x374),0x12,0,0);
          WaitForSingleObject(DAT_18006fa60,0xffffffff);
        }
        CloseHandle(DAT_18006fa60);
        DAT_18006fa60 = (HANDLE)0x0;
        *(undefined8 *)(lVar16 + 0x378) = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)(lVar16 + 0x388));
      }
      lVar16 = *(longlong *)(param_1 + 0x30);
      iVar21 = *(int *)(lVar16 + 0x160) + -1;
      *(int *)(lVar16 + 0x160) = iVar21;
      if ((iVar21 == 0) && (*(char *)(lVar16 + 0x825) != '\0')) {
        SetThreadExecutionState(*(EXECUTION_STATE *)(lVar16 + 0x15c));
        *(undefined4 *)(lVar16 + 0x15c) = 0;
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (!bVar7) {
        FreeLibrary(DAT_18006f9c0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 100) = 1;
    }
    uVar11 = 1;
  }
  return uVar11;
LAB_18000a2e8:
  uVar19 = (ulonglong)(uVar18 + 1);
  if (*(uint *)(lVar17 + 0x138) <= uVar18 + 1) goto LAB_18000a56c;
  goto LAB_18000a2c0;
}

