/*
 * FUN_18021ba68 at 18021ba68
 * undefined FUN_18021ba68(void)
 * Address ranges: 18021ba68-18021bd3b;18021bd68-18021bdc3;18021bdd8-18021be0b;18021be10-18021be3b;18021be70-18021be93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021ba68(longlong param_1,ulonglong param_2,int *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  
  lVar12 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  uVar1 = 0x200;
  if (param_3[0x21] == 0) {
    uVar1 = 0;
  }
  uVar6 = 0x20000;
  if (param_3[1] == 0) {
    uVar6 = 0;
  }
  uVar13 = 0;
  uVar2 = *(uint *)(lVar12 + 0x229c);
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
                   (uVar6 | (ulonglong)(*param_3 != 0) << 0x10 |
                   (ulonglong)*(byte *)(param_3 + 0x29) & 0xf) << 4) << 4) << 4) << 0xc) << 4) << 4)
                   << 4) << 10 | (ulonglong)(param_3[0x20] != 0) << 8 |
           (ulonglong)(param_3[0x17] != 0) << 7 | (ulonglong)(param_3[0x16] != 0) << 6 |
           (ulonglong)(param_3[0xd] != 0) << 5 | (ulonglong)(param_3[0xc] != 0) << 4 |
           (ulonglong)(param_3[3] != 0) << 3 | (ulonglong)(param_3[2] != 0) << 2);
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar7 = uVar2;
    do {
      uVar13 = uVar7 + uVar9 >> 1;
      uVar6 = *(ulonglong *)(*(longlong *)(lVar12 + 0x2290) + (ulonglong)uVar13 * 0x158);
      uVar4 = uVar13;
      if (uVar6 <= uVar1) {
        if (uVar1 <= uVar6) break;
        uVar9 = uVar13 + 1;
        uVar13 = uVar13 + 1;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar9);
    if (uVar13 != uVar2) {
      lVar10 = (ulonglong)uVar13 * 0x158;
      plVar11 = (longlong *)(lVar12 + 0x2290);
      lVar8 = *(longlong *)(lVar12 + 0x2290) + lVar10;
      if (*(ulonglong *)(*(longlong *)(lVar12 + 0x2290) + lVar10) == uVar1) {
        if ((((*param_3 == *(int *)(lVar8 + 8)) && (param_3[1] == *(int *)(lVar8 + 0xc))) &&
            (iVar5 = FUN_180222c00(param_3 + 2,lVar8 + 0x10,0x28), iVar5 == 0)) &&
           (((iVar5 = FUN_180222c00(param_3 + 0xc,lVar8 + 0x38,0x28), iVar5 == 0 &&
             (iVar5 = FUN_180222c00(param_3 + 0x16,lVar8 + 0x60,0x28), iVar5 == 0)) &&
            (iVar5 = FUN_180222c00(param_3 + 0x20,lVar8 + 0x88,0x28), iVar5 == 0)))) {
          return *(undefined8 *)(lVar10 + *plVar11 + 0x150);
        }
        uVar14 = *(undefined8 *)(lVar8 + 0x150);
        FUN_180205908(*(undefined8 *)(lVar12 + 0x22a0),uVar14);
        FUN_1802229d8(uVar14,0x148);
        *(ulonglong *)(*plVar11 + lVar10) = uVar1;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar10 + *plVar11 + 8,param_3,0x148);
      }
    }
  }
  plVar11 = (longlong *)(lVar12 + 0x2290);
  if (uVar2 == *(uint *)(lVar12 + 0x2298)) {
    uVar6 = CONCAT44(0,*(uint *)(lVar12 + 0x2298) << 1);
    lVar8 = uVar6 * 0x158;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    if (SUB168(auVar3 * ZEXT816(0x158),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = FUN_1802229a8(lVar8);
    if (lVar8 != 0) {
      if (*(int *)(lVar12 + 0x2298) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar8,*(undefined8 *)(lVar12 + 0x2290),0x158);
      }
      FUN_1802229d8(*plVar11);
      *plVar11 = lVar8;
      *(int *)(lVar12 + 0x2298) = *(int *)(lVar12 + 0x2298) << 1;
    }
  }
  uVar2 = *(uint *)(lVar12 + 0x229c);
  lVar12 = *plVar11;
  if (uVar2 <= uVar13) {
    *(ulonglong *)(lVar12 + (ulonglong)uVar13 * 0x158) = uVar1;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48((ulonglong)uVar13 * 0x158 + *plVar11 + 8,param_3,0x148);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(lVar12 + (ulonglong)uVar2 * 0x158,lVar12 + (ulonglong)(uVar2 - 1) * 0x158,
                      0x158);
}

