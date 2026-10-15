/*
 * FUN_180004c8c at 180004c8c
 * undefined __fastcall FUN_180004c8c(longlong param_1, HWND param_2, longlong param_3)
 * Address ranges: 180004c8c-180004ef8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004c8c(longlong param_1,HWND param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  BOOL BVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  
  lVar10 = param_1;
  plVar8 = FUN_180004efc(param_1,(longlong)param_2);
  if (*(uint *)(lVar10 + 0x138) == 0) {
    return;
  }
  uVar13 = 0;
  while( true ) {
    lVar17 = uVar13 * 0x60;
    plVar1 = (longlong *)(lVar17 + *(longlong *)(lVar10 + 0x130));
    uVar14 = (uint)uVar13;
    if (((HWND)*plVar1 == param_2) && (plVar1[2] == param_3)) break;
    uVar13 = (ulonglong)(uVar14 + 1);
    if (*(uint *)(lVar10 + 0x138) <= uVar14 + 1) {
      return;
    }
  }
  if ((plVar1[4] != 0) &&
     (*(int *)(lVar10 + 0x128) = *(int *)(lVar10 + 0x128) + -1, plVar8 == plVar1)) {
    iVar4 = (int)plVar1[8];
    while (iVar4 != 0) {
      ShowCursor(0);
      plVar8 = plVar1 + 8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      iVar4 = (int)*plVar8;
    }
    lVar10 = *(longlong *)(param_1 + 0x130);
    uVar15 = uVar14;
    while (uVar15 != 0) {
      uVar15 = (int)uVar13 - 1;
      if (*(HWND *)((ulonglong)uVar15 * 0x60 + lVar10) == param_2) {
        lVar10 = *(longlong *)((ulonglong)uVar15 * 0x60 + 0x28 + lVar10);
        goto LAB_180004d49;
      }
      uVar13 = (ulonglong)uVar15;
    }
    lVar10 = *(longlong *)(lVar17 + 0x20 + lVar10);
    KillTimer(param_2,0xaaaa);
LAB_180004d49:
    if (lVar10 != 0) {
      uVar15 = *(uint *)(lVar17 + 0x38 + *(longlong *)(param_1 + 0x130));
      BVar7 = IsWindowUnicode(param_2);
      if (BVar7 == 0) {
        lVar17 = GetWindowLongPtrA(param_2,-4);
      }
      else {
        lVar17 = GetWindowLongPtrW(param_2,-4);
      }
      uVar16 = uVar15 * DAT_18006c030;
      if (*(uint *)(param_1 + 0x148) != 0) {
        uVar11 = 0;
        do {
          if (*(HWND *)(*(longlong *)(param_1 + 0x140) + uVar11 * 0x18) == param_2) {
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x10 + uVar11 * 0x18);
            if (iVar4 != -1) {
              uVar11 = (ulonglong)(uint)(iVar4 * DAT_18006c018);
              *(longlong *)((ulonglong)DAT_18006c01c + *(longlong *)(param_1 + 0x108) + uVar11) =
                   lVar10;
              if ((int)uVar13 != 0) goto LAB_180004dfd;
              lVar12 = uVar11 + *(longlong *)(param_1 + 0x108);
              goto LAB_180004df8;
            }
            break;
          }
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_1 + 0x148));
      }
      lVar12 = *(longlong *)(param_1 + 0x110) + (ulonglong)uVar16;
LAB_180004df8:
      if (lVar17 == lVar12) {
        FUN_180004914(lVar12,param_2,lVar10);
        pbVar5 = (byte *)(param_1 + 0x150 + (ulonglong)(uVar15 >> 6) * 8 +
                         ((longlong)(ulonglong)(uVar15 & 0x3f) >> 3));
        *pbVar5 = *pbVar5 & ~('\x01' << ((ulonglong)(uVar15 & 0x3f) & 7));
      }
      else {
LAB_180004dfd:
        *(longlong *)((ulonglong)DAT_18006c03c + *(longlong *)(param_1 + 0x110) + (ulonglong)uVar16)
             = lVar10;
        if (*(uint *)(param_1 + 0x148) != 0) {
          uVar13 = 0;
          do {
            if (*(HWND *)(*(longlong *)(param_1 + 0x140) + uVar13 * 0x18) == param_2) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x10 + uVar13 * 0x18) =
                   *(undefined4 *)(param_1 + 0x158);
              *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
              break;
            }
            uVar15 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar15;
          } while (uVar15 < *(uint *)(param_1 + 0x148));
        }
      }
    }
  }
  uVar15 = *(uint *)(param_1 + 0x138);
  if (uVar15 <= uVar14) {
    return;
  }
  while( true ) {
    uVar16 = uVar14 + 1;
    if (uVar15 <= uVar16) break;
    lVar10 = *(longlong *)(param_1 + 0x130);
    lVar17 = (ulonglong)uVar16 * 0x60;
    lVar12 = (ulonglong)uVar14 * 0x60;
    uVar6 = ((undefined8 *)(lVar17 + lVar10))[1];
    *(undefined8 *)(lVar12 + lVar10) = *(undefined8 *)(lVar17 + lVar10);
    ((undefined8 *)(lVar12 + lVar10))[1] = uVar6;
    puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar10);
    uVar6 = puVar2[1];
    puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar2 = (undefined8 *)(lVar17 + 0x20 + lVar10);
    uVar6 = puVar2[1];
    puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar10);
    uVar6 = puVar2[1];
    puVar3 = (undefined8 *)(lVar12 + 0x30 + lVar10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar2 = (undefined8 *)(lVar17 + 0x40 + lVar10);
    uVar6 = puVar2[1];
    puVar3 = (undefined8 *)(lVar12 + 0x40 + lVar10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    puVar2 = (undefined8 *)(lVar17 + 0x50 + lVar10);
    uVar6 = puVar2[1];
    puVar3 = (undefined8 *)(lVar12 + 0x50 + lVar10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar6;
    uVar15 = *(uint *)(param_1 + 0x138);
    uVar14 = uVar16;
  }
  *(uint *)(param_1 + 0x138) = uVar15 - 1;
  return;
}

