/*
 * _grGlideShutdown@0 at 180004a68
 * undefined __cdecl _grGlideShutdown@0(void)
 * Address ranges: 180004a68-180004f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGlideShutdown_0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  BOOL BVar8;
  longlong lVar9;
  longlong lVar10;
  LPVOID pvVar11;
  undefined8 *puVar12;
  code *pcVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  HWND hWnd;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
                    /* 0x4a68  50  _grGlideShutdown@0
                       0x4a68  211  grGlideShutdown */
  lVar9 = FUN_180017788();
  *(undefined1 *)(lVar9 + 0x65) = 1;
  if (*(char *)(lVar9 + 100) != '\0') {
    iVar21 = *(int *)(lVar9 + 0x60);
    *(undefined1 *)(lVar9 + 100) = 0;
    while (iVar21 != 0) {
      Sleep(1);
      iVar21 = *(int *)(lVar9 + 0x60);
    }
    if (*(longlong *)(lVar9 + 0x70) != 0) {
      (**(code **)(lVar9 + 0x80))();
      (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x38))();
      FreeLibrary(*(HMODULE *)(lVar9 + 0x70));
      *(undefined8 *)(lVar9 + 0x70) = 0;
    }
    lVar16 = *(longlong *)(lVar9 + 0x18);
    if (*(char *)(lVar16 + 0xee) == '\0') {
      ShowCursor(1);
      *(undefined1 *)(lVar16 + 0xee) = 1;
    }
    bVar6 = false;
    lVar16 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0xa0);
    if ((lVar16 != 0) && (lVar16 = FUN_180008718(*(longlong *)(lVar9 + 0x30),lVar16), lVar16 != 0))
    {
      bVar6 = *(int *)(lVar16 + 0x3c) != 0;
    }
    FUN_18001fbd0(lVar9,0,0);
    hWnd = *(HWND *)(*(longlong *)(lVar9 + 0x18) + 0xa0);
    if (hWnd != (HWND)0x0) {
      lVar17 = *(longlong *)(lVar9 + 0x30);
      lVar16 = 0;
      if (lVar9 != 0) {
        lVar16 = lVar9 + 8;
      }
      lVar10 = FUN_180008718(lVar17,(longlong)hWnd);
      if (*(uint *)(lVar17 + 0x138) != 0) {
        lVar15 = *(longlong *)(lVar17 + 0x130);
        uVar19 = 0;
LAB_180004b88:
        lVar20 = uVar19 * 0x60;
        lVar2 = lVar20 + lVar15;
        uVar18 = (uint)uVar19;
        if ((*(HWND *)(lVar20 + lVar15) != hWnd) ||
           (*(longlong *)(lVar15 + 0x10 + lVar20) != lVar16)) goto LAB_180004bb0;
        if ((*(longlong *)(lVar2 + 0x20) == 0) ||
           (*(int *)(lVar17 + 0x128) = *(int *)(lVar17 + 0x128) + -1, lVar10 != lVar2))
        goto LAB_180004dd4;
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
            goto LAB_180004c4c;
          }
          uVar14 = iVar21 - 1;
          uVar19 = (ulonglong)uVar14;
          plVar3 = (longlong *)(*(longlong *)(lVar17 + 0x130) + uVar19 * 0x60);
        } while ((HWND)*plVar3 != hWnd);
        lVar16 = plVar3[5];
LAB_180004c4c:
        if (lVar16 != 0) {
          uVar14 = *(uint *)(lVar20 + *(longlong *)(lVar17 + 0x130) + 0x38);
          BVar8 = IsWindowUnicode(hWnd);
          pcVar13 = GetWindowLongPtrA_exref;
          if (BVar8 != 0) {
            pcVar13 = GetWindowLongPtrW_exref;
          }
          lVar10 = (*pcVar13)(hWnd,0xfffffffc);
          bVar7 = lVar10 == *(longlong *)(lVar17 + 0x110) + (ulonglong)(uVar14 * 0x70);
          if (*(uint *)(lVar17 + 0x148) != 0) {
            uVar19 = 0;
            do {
              plVar3 = (longlong *)(*(longlong *)(lVar17 + 0x140) + uVar19 * 0x18);
              if ((HWND)*plVar3 == hWnd) {
                iVar5 = (int)plVar3[2];
                if (iVar5 != -1) {
                  uVar1 = iVar5 * 0x2c;
                  *(longlong *)(*(longlong *)(lVar17 + 0x108) + 0x1c + (ulonglong)uVar1) = lVar16;
                  if ((iVar21 != 0) ||
                     (bVar7 = true, lVar10 != *(longlong *)(lVar17 + 0x108) + (ulonglong)uVar1)) {
                    bVar7 = false;
                  }
                }
                break;
              }
              uVar1 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar1;
            } while (uVar1 < *(uint *)(lVar17 + 0x148));
          }
          if (bVar7) {
            FUN_180008008(lVar10,hWnd,lVar16);
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
LAB_180004dd4:
        uVar14 = *(uint *)(lVar17 + 0x138);
        if (uVar18 < uVar14) {
          while( true ) {
            uVar1 = uVar18 + 1;
            if (uVar14 <= uVar1) break;
            puVar12 = (undefined8 *)(*(longlong *)(lVar17 + 0x130) + (ulonglong)uVar18 * 0x60);
            puVar4 = (undefined8 *)(*(longlong *)(lVar17 + 0x130) + (ulonglong)uVar1 * 0x60);
            uVar24 = *puVar4;
            uVar23 = puVar4[3];
            uVar22 = puVar4[2];
            puVar12[1] = puVar4[1];
            *puVar12 = uVar24;
            puVar12[3] = uVar23;
            puVar12[2] = uVar22;
            uVar24 = puVar4[4];
            uVar23 = puVar4[7];
            uVar22 = puVar4[6];
            puVar12[5] = puVar4[5];
            puVar12[4] = uVar24;
            puVar12[7] = uVar23;
            puVar12[6] = uVar22;
            uVar24 = puVar4[8];
            uVar23 = puVar4[0xb];
            uVar22 = puVar4[10];
            puVar12[9] = puVar4[9];
            puVar12[8] = uVar24;
            puVar12[0xb] = uVar23;
            puVar12[10] = uVar22;
            uVar14 = *(uint *)(lVar17 + 0x138);
            uVar18 = uVar1;
          }
          *(uint *)(lVar17 + 0x138) = uVar14 - 1;
        }
      }
    }
LAB_180004e34:
    (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x10))();
    if (*(longlong *)(lVar9 + 0x38) != 0) {
      PostMessageW(*(HWND *)(*(longlong *)(lVar9 + 0x18) + 0xa0),0x401,0,0);
      lVar16 = *(longlong *)(lVar9 + 0x48);
      while (lVar16 != 0) {
        Sleep(1);
        lVar16 = *(longlong *)(lVar9 + 0x48);
      }
      *(undefined8 *)(lVar9 + 0x38) = 0;
    }
    FUN_180007f70(*(longlong *)(lVar9 + 0x30));
    lVar16 = *(longlong *)(lVar9 + 0x30);
    iVar21 = *(int *)(lVar16 + 0x160) + -1;
    *(int *)(lVar16 + 0x160) = iVar21;
    if ((iVar21 == 0) && (*(char *)(lVar16 + 0x825) != '\0')) {
      SetThreadExecutionState(*(EXECUTION_STATE *)(lVar16 + 0x15c));
      *(undefined4 *)(lVar16 + 0x15c) = 0;
    }
    *(undefined4 *)(lVar9 + 0x58) = 0;
    if (!bVar6) {
      FreeLibrary(DAT_18006c860);
    }
  }
  if (*(longlong **)(lVar9 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x18))();
    pvVar11 = *(LPVOID *)(*(longlong *)(lVar9 + 0x18) + 0x2b0);
    if (pvVar11 != (LPVOID)0x0) {
      FUN_180060a18(pvVar11);
    }
    (**(code **)**(undefined8 **)(lVar9 + 0x18))();
    *(undefined8 *)(lVar9 + 0x18) = 0;
  }
  if (*(longlong **)(lVar9 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x60))();
    puVar12 = *(undefined8 **)(lVar9 + 0x28);
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,1);
    }
    *(undefined8 *)(lVar9 + 0x28) = 0;
  }
  FUN_180060a18(*(LPVOID *)(lVar9 + 0xa0));
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  FUN_180007650(*(undefined8 **)(lVar9 + 0x30));
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined2 *)(lVar9 + 0x65) = 0;
  return;
LAB_180004bb0:
  uVar19 = (ulonglong)(uVar18 + 1);
  if (*(uint *)(lVar17 + 0x138) <= uVar18 + 1) goto LAB_180004e34;
  goto LAB_180004b88;
}

