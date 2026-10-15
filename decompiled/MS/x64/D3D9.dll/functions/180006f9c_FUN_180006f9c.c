/*
 * FUN_180006f9c at 180006f9c
 * undefined __fastcall FUN_180006f9c(ulonglong param_1, uint param_2, longlong * param_3, longlong * param_4)
 * Address ranges: 180006f9c-180007224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006f9c(ulonglong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint local_58 [6];
  
  uVar9 = (ulonglong)param_2;
  iVar10 = 1;
  if (param_3 == (longlong *)0x0) {
    bVar12 = 0;
    if (param_4 == (longlong *)0x0) {
      param_3 = (longlong *)0x0;
      iVar14 = 0;
      lVar13 = 0;
      goto LAB_180007049;
    }
    lVar13 = param_4[0x1c];
    iVar14 = (int)param_4[0x1f];
    iVar2 = (int)param_4[0x20];
    uVar8 = -(ulonglong)(param_4[3] != 0) & param_4[3] - 0x6838U;
    param_3 = param_4;
  }
  else {
    lVar13 = param_3[0xb];
    iVar14 = *(int *)((longlong)param_3 + 0x74);
    iVar2 = *(int *)((longlong)param_3 + 0x7c);
    uVar8 = -(ulonglong)(param_3[3] != 0) & param_3[3] - 0x6838U;
    bVar12 = *(byte *)(param_3 + 0xe) & 1;
  }
  if (((iVar2 == 3) || (((iVar2 == 2 && (*(int *)(param_1 + 0xe68) != 3)) || (uVar8 != 0)))) &&
     (uVar8 != param_1)) {
    return;
  }
LAB_180007049:
  if (*(char *)(param_1 + 0x40c) == '\0') {
    if (param_3 != *(longlong **)(param_1 + 0x1338 + uVar9 * 8)) {
      FUN_1800fa780(local_58);
      bVar16 = param_3 == (longlong *)0x0;
      bVar7 = (byte)param_2;
      if (bVar16) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                  (*(longlong **)(param_1 + 0x28),uVar9,0,0,0,0,0,0);
        uVar15 = 1 << (bVar7 & 0x1f);
      }
      else {
        (**(code **)(*param_3 + 8))(param_3);
        uVar15 = 1 << (bVar7 & 0x1f);
        *(uint *)(param_3 + 7) = *(uint *)(param_3 + 7) | uVar15;
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                  (*(longlong **)(param_1 + 0x28),param_2,0,lVar13,0,0,0,0);
      }
      bVar4 = 1 < iVar14 - 0x28U;
      lVar13 = *(longlong *)(param_1 + 0x1338 + uVar9 * 8);
      if (lVar13 != 0) {
        puVar1 = (uint *)(lVar13 + 0x38);
        *puVar1 = *puVar1 & ~uVar15;
        (**(code **)(**(longlong **)(param_1 + 0x1338 + uVar9 * 8) + 0x10))();
      }
      *(longlong **)(param_1 + 0x1338 + uVar9 * 8) = param_3;
      uVar11 = ~uVar15;
      *(uint *)(param_1 + 0xd14) =
           *(uint *)(param_1 + 0xd14) |
           (uint)((param_3 != (longlong *)0x0) != (bool)*(char *)(uVar9 + 0xcc0 + param_1)) <<
           (bVar7 & 0x1f);
      *(bool *)(uVar9 + 0xcc0 + param_1) = param_3 != (longlong *)0x0;
      uVar6 = *(uint *)(param_1 + 0x67f4) | uVar15;
      if (bVar16 || bVar4) {
        uVar6 = *(uint *)(param_1 + 0x67f4) & uVar11;
      }
      *(uint *)(param_1 + 0x67f4) = uVar6;
      uVar15 = *(uint *)(param_1 + 0x67f8) | uVar15;
      if (bVar16 || bVar4) {
        uVar15 = *(uint *)(param_1 + 0x67f8) & uVar11;
      }
      *(byte *)(param_1 + 0xd10) = *(byte *)(param_1 + 0xd10) | bVar12;
      *(uint *)(param_1 + 0x67f8) = uVar15;
      *(undefined1 *)(uVar9 + 0xcd0 + param_1) = 0;
      lVar13 = *(longlong *)(param_1 + 0x1338 + uVar9 * 8);
      if ((lVar13 == 0) || (*(char *)(lVar13 + 0x3e) == '\0')) {
        iVar10 = 0;
      }
      *(uint *)(param_1 + 0xd18) = iVar10 << (bVar7 & 0x1f) | uVar11 & *(uint *)(param_1 + 0xd18);
      FUN_1800fa7bc();
    }
  }
  else {
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3);
    }
    lVar13 = *(longlong *)
              (*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x408) * 8);
    plVar3 = *(longlong **)(lVar13 + 0x5310 + uVar9 * 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(longlong **)(lVar13 + 0x5310 + uVar9 * 8) = param_3;
    pbVar5 = (byte *)(lVar13 + 0xacd8 + (ulonglong)(param_2 >> 6) * 8 +
                     ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
    *pbVar5 = *pbVar5 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
  }
  return;
}

