/*
 * FUN_180007708 at 180007708
 * undefined __cdecl FUN_180007708(longlong param_1, HWND param_2, longlong param_3)
 * Address ranges: 180007708-1800079ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007708(longlong param_1,HWND param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  BOOL BVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar8 = FUN_180007a00(param_1,(longlong)param_2);
  if (*(uint *)(param_1 + 0x138) == 0) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x130);
  uVar13 = 0;
  while( true ) {
    lVar14 = uVar13 * 0x60;
    lVar2 = lVar14 + lVar11;
    uVar12 = (uint)uVar13;
    if ((*(HWND *)(lVar14 + lVar11) == param_2) &&
       (*(longlong *)(lVar11 + 0x10 + lVar14) == param_3)) break;
    uVar13 = (ulonglong)(uVar12 + 1);
    if (*(uint *)(param_1 + 0x138) <= uVar12 + 1) {
      return;
    }
  }
  if ((*(longlong *)(lVar2 + 0x20) != 0) &&
     (*(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1, lVar8 == lVar2)) {
    iVar15 = *(int *)(lVar2 + 0x40);
    while (iVar15 != 0) {
      ShowCursor(0);
      iVar15 = *(int *)(lVar2 + 0x40) + -1;
      *(int *)(lVar2 + 0x40) = iVar15;
    }
    uVar10 = uVar12;
    do {
      iVar15 = (int)uVar13;
      if (uVar10 == 0) {
        lVar8 = *(longlong *)(lVar14 + *(longlong *)(param_1 + 0x130) + 0x20);
        KillTimer(param_2,0xaaaa);
        goto LAB_180007800;
      }
      uVar10 = iVar15 - 1;
      uVar13 = (ulonglong)uVar10;
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + uVar13 * 0x60);
    } while ((HWND)*puVar3 != param_2);
    lVar8 = puVar3[5];
LAB_180007800:
    if (lVar8 != 0) {
      uVar10 = *(uint *)(lVar14 + *(longlong *)(param_1 + 0x130) + 0x38);
      BVar7 = IsWindowUnicode(param_2);
      pcVar9 = GetWindowLongPtrA_exref;
      if (BVar7 != 0) {
        pcVar9 = GetWindowLongPtrW_exref;
      }
      lVar11 = (*pcVar9)(param_2,0xfffffffc);
      bVar6 = lVar11 == *(longlong *)(param_1 + 0x110) + (ulonglong)(uVar10 * 0x70);
      if (*(uint *)(param_1 + 0x148) != 0) {
        uVar13 = 0;
        do {
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x140) + uVar13 * 0x18);
          if ((HWND)*puVar3 == param_2) {
            iVar5 = *(int *)(puVar3 + 2);
            if (iVar5 != -1) {
              uVar1 = iVar5 * 0x2c;
              *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x1c + (ulonglong)uVar1) = lVar8;
              if ((iVar15 != 0) ||
                 (bVar6 = true, lVar11 != *(longlong *)(param_1 + 0x108) + (ulonglong)uVar1)) {
                bVar6 = false;
              }
            }
            break;
          }
          uVar1 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x148));
      }
      if (bVar6) {
        FUN_1800072f0(lVar11,param_2,lVar8);
        lVar8 = param_1 + ((ulonglong)(uVar10 >> 6) + 0x2a) * 8;
        uVar13 = (ulonglong)(uVar10 >> 3) & 7;
        *(byte *)(lVar8 + uVar13) =
             *(byte *)(lVar8 + uVar13) & ((byte)(1 << ((ulonglong)uVar10 & 7)) ^ 0xff);
      }
      else {
        *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x68 + (ulonglong)(uVar10 * 0x70)) = lVar8;
        if (*(uint *)(param_1 + 0x148) != 0) {
          uVar13 = 0;
          do {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x140) + uVar13 * 0x18);
            if ((HWND)*puVar3 == param_2) {
              *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x158);
              *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
              break;
            }
            uVar10 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar10;
          } while (uVar10 < *(uint *)(param_1 + 0x148));
        }
      }
    }
  }
  uVar10 = *(uint *)(param_1 + 0x138);
  if (uVar10 <= uVar12) {
    return;
  }
  while( true ) {
    uVar1 = uVar12 + 1;
    if (uVar10 <= uVar1) break;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar12 * 0x60);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar1 * 0x60);
    uVar18 = *puVar4;
    uVar17 = puVar4[3];
    uVar16 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar18;
    puVar3[3] = uVar17;
    puVar3[2] = uVar16;
    uVar18 = puVar4[4];
    uVar17 = puVar4[7];
    uVar16 = puVar4[6];
    puVar3[5] = puVar4[5];
    puVar3[4] = uVar18;
    puVar3[7] = uVar17;
    puVar3[6] = uVar16;
    uVar18 = puVar4[8];
    uVar17 = puVar4[0xb];
    uVar16 = puVar4[10];
    puVar3[9] = puVar4[9];
    puVar3[8] = uVar18;
    puVar3[0xb] = uVar17;
    puVar3[10] = uVar16;
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar12 = uVar1;
  }
  *(uint *)(param_1 + 0x138) = uVar10 - 1;
  return;
}

