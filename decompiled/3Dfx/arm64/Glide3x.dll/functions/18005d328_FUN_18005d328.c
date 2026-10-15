/*
 * FUN_18005d328 at 18005d328
 * undefined8 __cdecl FUN_18005d328(longlong param_1, ulonglong param_2, int * param_3)
 * Address ranges: 18005d328-18005d71b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005d328(longlong param_1,ulonglong param_2,int *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  SIZE_T SVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  LPVOID pvVar15;
  longlong lVar16;
  
  lVar12 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = 0x200;
  if (param_3[0x21] == 0) {
    uVar1 = 0;
  }
  uVar11 = 0x20000;
  if (param_3[1] == 0) {
    uVar11 = 0;
  }
  uVar5 = *(uint *)(lVar12 + 0x229c);
  uVar14 = 0;
  uVar1 = ((ulonglong)
           (param_3[0x19] & 0x1fU |
           (param_3[0x1a] & 7U |
           (param_3[0x1b] & 0x1fU | (param_3[0x1c] & 0x1fU | (param_3[0x1d] & 7U) << 5) << 5) << 3)
           << 5) << 5 |
           ((ulonglong)(uint)param_3[0x22] & 0x1f |
           ((ulonglong)(uint)param_3[0x23] & 0x1f |
           ((ulonglong)(uint)param_3[0x24] & 7 |
           ((ulonglong)(uint)param_3[0x25] & 0x1f |
           ((ulonglong)(uint)param_3[0x26] & 0x1f | ((ulonglong)(uint)param_3[0x27] & 7) << 5) << 5)
           << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[0x18] & 0x1f) +
          ((ulonglong)
           (param_3[5] & 0x1fU |
           (param_3[6] & 7U |
           (param_3[7] & 0x1fU | (param_3[8] & 0x1fU | (param_3[9] & 7U) << 5) << 5) << 3) << 5) <<
           5 | ((ulonglong)(uint)param_3[0xe] & 0x1f |
               ((ulonglong)(uint)param_3[0xf] & 0x1f |
               ((ulonglong)(uint)param_3[0x10] & 7 |
               ((ulonglong)(uint)param_3[0x11] & 0x1f |
               ((ulonglong)(uint)param_3[0x12] & 0x1f | ((ulonglong)(uint)param_3[0x13] & 7) << 5)
               << 5) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[4] & 0x1f) +
          (uVar1 | ((ulonglong)(uint)param_3[10] & 0xf |
                   ((ulonglong)(uint)param_3[0x14] & 0xf |
                   ((ulonglong)(uint)param_3[0x1e] & 0xf |
                   ((ulonglong)(uint)param_3[0x28] & 0xf |
                   ((ulonglong)*(byte *)(param_3 + 0xb) & 0xf |
                   ((ulonglong)*(byte *)(param_3 + 0x15) & 0xf |
                   ((ulonglong)*(byte *)(param_3 + 0x1f) & 0xf |
                   (uVar11 | (ulonglong)(*param_3 != 0) << 0x10 |
                   (ulonglong)*(byte *)(param_3 + 0x29) & 0xf) << 4) << 4) << 4) << 0xc) << 4) << 4)
                   << 4) << 10 | (ulonglong)(param_3[0x20] != 0) << 8 |
           (ulonglong)(param_3[0x17] != 0) << 7 | (ulonglong)(param_3[0x16] != 0) << 6 |
           (ulonglong)(param_3[0xd] != 0) << 5 | (ulonglong)(param_3[0xc] != 0) << 4 |
           (ulonglong)(param_3[3] != 0) << 3 | (ulonglong)(param_3[2] != 0) << 2);
  if (uVar5 != 0) {
    uVar10 = 0;
    uVar9 = uVar5;
    do {
      uVar14 = uVar9 + uVar10 >> 1;
      uVar11 = *(ulonglong *)(*(longlong *)(lVar12 + 0x2290) + (ulonglong)uVar14 * 0x158);
      uVar3 = uVar14;
      if (uVar11 <= uVar1) {
        if (uVar1 <= uVar11) break;
        uVar10 = uVar14 + 1;
        uVar14 = uVar14 + 1;
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
    } while (uVar9 != uVar10);
    if (uVar14 != uVar5) {
      lVar16 = (ulonglong)uVar14 * 0x158;
      plVar13 = (longlong *)(lVar12 + 0x2290);
      lVar7 = *(longlong *)(lVar12 + 0x2290) + lVar16;
      if (*(ulonglong *)(*(longlong *)(lVar12 + 0x2290) + lVar16) == uVar1) {
        if ((((*param_3 != *(int *)(lVar7 + 8)) || (param_3[1] != *(int *)(lVar7 + 0xc))) ||
            (iVar4 = FUN_180063e48((byte *)(param_3 + 2),(byte *)(lVar7 + 0x10),0x28), iVar4 != 0))
           || (((iVar4 = FUN_180063e48((byte *)(param_3 + 0xc),(byte *)(lVar7 + 0x38),0x28),
                iVar4 != 0 ||
                (iVar4 = FUN_180063e48((byte *)(param_3 + 0x16),(byte *)(lVar7 + 0x60),0x28),
                iVar4 != 0)) ||
               (iVar4 = FUN_180063e48((byte *)(param_3 + 0x20),(byte *)(lVar7 + 0x88),0x28),
               iVar4 != 0)))) {
          pvVar15 = *(LPVOID *)(lVar7 + 0x150);
          FUN_180048510(*(longlong **)(lVar12 + 0x22a0),(longlong)pvVar15);
          FUN_180063700(pvVar15);
          *(ulonglong *)(*plVar13 + lVar16) = uVar1;
          thunk_FUN_1800010d8((undefined8 *)(lVar16 + *plVar13 + 8),(undefined8 *)param_3,0x148);
          puVar6 = (undefined8 *)FUN_1800636c0(0x148);
          if (puVar6 != (undefined8 *)0x0) {
            thunk_FUN_1800010d8(puVar6,(undefined8 *)param_3,0x148);
          }
          *(undefined8 **)(lVar16 + *plVar13 + 0x150) = puVar6;
        }
        goto LAB_18005d6f8;
      }
    }
  }
  plVar13 = (longlong *)(lVar12 + 0x2290);
  if (uVar5 == *(uint *)(lVar12 + 0x2298)) {
    uVar11 = CONCAT44(0,*(uint *)(lVar12 + 0x2298) << 1);
    SVar8 = uVar11 * 0x158;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11;
    if (SUB168(auVar2 * ZEXT816(0x158),8) != 0) {
      SVar8 = 0xffffffffffffffff;
    }
    lVar7 = thunk_FUN_1800636c0(SVar8);
    if (lVar7 != 0) {
      uVar11 = 0;
      if (*(int *)(lVar12 + 0x2298) != 0) {
        do {
          thunk_FUN_1800010d8((undefined8 *)(lVar7 + uVar11 * 0x158),
                              (undefined8 *)(*(longlong *)(lVar12 + 0x2290) + uVar11 * 0x158),0x158)
          ;
          uVar5 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar12 + 0x2298));
      }
      thunk_FUN_180063700((LPVOID)*plVar13);
      *plVar13 = lVar7;
      *(int *)(lVar12 + 0x2298) = *(int *)(lVar12 + 0x2298) << 1;
    }
  }
  uVar5 = *(uint *)(lVar12 + 0x229c);
  while (lVar7 = *plVar13, uVar14 < uVar5) {
    thunk_FUN_1800010d8((undefined8 *)(lVar7 + (ulonglong)uVar5 * 0x158),
                        (undefined8 *)(lVar7 + (ulonglong)(uVar5 - 1) * 0x158),0x158);
    uVar5 = uVar5 - 1;
  }
  lVar16 = (ulonglong)uVar14 * 0x158;
  *(ulonglong *)(lVar7 + lVar16) = uVar1;
  thunk_FUN_1800010d8((undefined8 *)(lVar16 + *plVar13 + 8),(undefined8 *)param_3,0x148);
  puVar6 = (undefined8 *)FUN_1800636c0(0x148);
  if (puVar6 != (undefined8 *)0x0) {
    thunk_FUN_1800010d8(puVar6,(undefined8 *)param_3,0x148);
  }
  *(undefined8 **)(lVar16 + *plVar13 + 0x150) = puVar6;
  *(int *)(lVar12 + 0x229c) = *(int *)(lVar12 + 0x229c) + 1;
LAB_18005d6f8:
  return *(undefined8 *)(lVar16 + *(longlong *)(lVar12 + 0x2290) + 0x150);
}

