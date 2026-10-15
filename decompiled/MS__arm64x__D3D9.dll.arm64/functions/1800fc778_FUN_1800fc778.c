/*
 * FUN_1800fc778 at 1800fc778
 * undefined FUN_1800fc778(void)
 * Address ranges: 1800fc778-1800fcb7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fc778(longlong param_1,ulonglong param_2,int *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  lVar10 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = 0x200;
  if (param_3[0x21] == 0) {
    uVar1 = 0;
  }
  uVar9 = 0x20000;
  if (param_3[1] == 0) {
    uVar9 = 0;
  }
  uVar5 = *(uint *)(lVar10 + 0x229c);
  uVar12 = 0;
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
                   (uVar9 | (ulonglong)(*param_3 != 0) << 0x10 |
                   (ulonglong)*(byte *)(param_3 + 0x29) & 0xf) << 4) << 4) << 4) << 0xc) << 4) << 4)
                   << 4) << 10 | (ulonglong)(param_3[0x20] != 0) << 8 |
           (ulonglong)(param_3[0x17] != 0) << 7 | (ulonglong)(param_3[0x16] != 0) << 6 |
           (ulonglong)(param_3[0xd] != 0) << 5 | (ulonglong)(param_3[0xc] != 0) << 4 |
           (ulonglong)(param_3[3] != 0) << 3 | (ulonglong)(param_3[2] != 0) << 2);
  if (uVar5 != 0) {
    uVar8 = 0;
    uVar7 = uVar5;
    do {
      uVar12 = uVar7 + uVar8 >> 1;
      uVar9 = *(ulonglong *)(*(longlong *)(lVar10 + 0x2290) + (ulonglong)uVar12 * 0x158);
      uVar3 = uVar12;
      if (uVar9 <= uVar1) {
        if (uVar1 <= uVar9) break;
        uVar8 = uVar12 + 1;
        uVar12 = uVar12 + 1;
        uVar3 = uVar7;
      }
      uVar7 = uVar3;
    } while (uVar7 != uVar8);
    if (uVar12 != uVar5) {
      lVar14 = (ulonglong)uVar12 * 0x158;
      plVar11 = (longlong *)(lVar10 + 0x2290);
      lVar6 = *(longlong *)(lVar10 + 0x2290) + lVar14;
      if (*(ulonglong *)(*(longlong *)(lVar10 + 0x2290) + lVar14) == uVar1) {
        if ((((*param_3 != *(int *)(lVar6 + 8)) || (param_3[1] != *(int *)(lVar6 + 0xc))) ||
            (iVar4 = func_0x000180222c00(param_3 + 2,lVar6 + 0x10,0x28), iVar4 != 0)) ||
           (((iVar4 = func_0x000180222c00(param_3 + 0xc,lVar6 + 0x38,0x28), iVar4 != 0 ||
             (iVar4 = func_0x000180222c00(param_3 + 0x16,lVar6 + 0x60,0x28), iVar4 != 0)) ||
            (iVar4 = func_0x000180222c00(param_3 + 0x20,lVar6 + 0x88,0x28), iVar4 != 0)))) {
          uVar13 = *(undefined8 *)(lVar6 + 0x150);
          FUN_1800ee5f0(*(undefined8 *)(lVar10 + 0x22a0),uVar13);
          FUN_180102fc0(uVar13,0x148);
          *(ulonglong *)(*plVar11 + lVar14) = uVar1;
          thunk_FUN_180001218(lVar14 + *plVar11 + 8,param_3,0x148);
          lVar6 = FUN_180102f80(0x148);
          if (lVar6 != 0) {
            thunk_FUN_180001218(lVar6,param_3,0x148);
          }
          *(longlong *)(lVar14 + *plVar11 + 0x150) = lVar6;
        }
        goto LAB_1800fcb58;
      }
    }
  }
  plVar11 = (longlong *)(lVar10 + 0x2290);
  if (uVar5 == *(uint *)(lVar10 + 0x2298)) {
    uVar9 = CONCAT44(0,*(uint *)(lVar10 + 0x2298) << 1);
    lVar6 = uVar9 * 0x158;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    if (SUB168(auVar2 * ZEXT816(0x158),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = thunk_FUN_180102f80(lVar6);
    if (lVar6 != 0) {
      uVar9 = 0;
      if (*(int *)(lVar10 + 0x2298) != 0) {
        do {
          thunk_FUN_180001218(lVar6 + uVar9 * 0x158,*(longlong *)(lVar10 + 0x2290) + uVar9 * 0x158,
                              0x158);
          uVar5 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar10 + 0x2298));
      }
      thunk_FUN_180102fc0(*plVar11);
      *plVar11 = lVar6;
      *(int *)(lVar10 + 0x2298) = *(int *)(lVar10 + 0x2298) << 1;
    }
  }
  uVar5 = *(uint *)(lVar10 + 0x229c);
  while (lVar6 = *plVar11, uVar12 < uVar5) {
    thunk_FUN_180001218(lVar6 + (ulonglong)uVar5 * 0x158,lVar6 + (ulonglong)(uVar5 - 1) * 0x158,
                        0x158);
    uVar5 = uVar5 - 1;
  }
  lVar14 = (ulonglong)uVar12 * 0x158;
  *(ulonglong *)(lVar6 + lVar14) = uVar1;
  thunk_FUN_180001218(lVar14 + *plVar11 + 8,param_3,0x148);
  lVar6 = FUN_180102f80(0x148);
  if (lVar6 != 0) {
    thunk_FUN_180001218(lVar6,param_3,0x148);
  }
  *(longlong *)(lVar14 + *plVar11 + 0x150) = lVar6;
  *(int *)(lVar10 + 0x229c) = *(int *)(lVar10 + 0x229c) + 1;
LAB_1800fcb58:
  return *(undefined8 *)(lVar14 + *(longlong *)(lVar10 + 0x2290) + 0x150);
}

