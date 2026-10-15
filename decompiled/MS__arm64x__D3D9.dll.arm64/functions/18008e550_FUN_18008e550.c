/*
 * FUN_18008e550 at 18008e550
 * undefined FUN_18008e550(void)
 * Address ranges: 18008e550-18008e7d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18008e550(longlong *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar10 = 0x800;
  if (param_2[1] == 0) {
    uVar10 = 0;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)
           (param_2[4] & 0x1fU |
           (param_2[5] & 0x1fU | (param_2[6] & 7U | (param_2[7] & 0x1fU) << 3) << 5) << 5) << 10 |
           ((ulonglong)(uint)param_2[8] & 0x1f |
           ((ulonglong)(uint)param_2[9] & 7 |
           ((ulonglong)(uint)param_2[10] & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0xb) & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0x15) & 0xf |
           ((ulonglong)*(byte *)(param_2 + 0x1f) & 0xf |
           (uVar10 | (ulonglong)(*param_2 != 0) << 10 | (ulonglong)*(byte *)(param_2 + 0x29) & 0xf)
           << 4) << 4) << 4) << 4) << 3) << 5) << 0x1c | (ulonglong)(param_2[0x21] != 0) << 9 |
           (ulonglong)(param_2[0x20] != 0) << 8 | (ulonglong)(param_2[0x17] != 0) << 7 |
           (ulonglong)(param_2[0x16] != 0) << 6 | (ulonglong)(param_2[0xd] != 0) << 5 |
           (ulonglong)(param_2[0xc] != 0) << 4 | (ulonglong)(param_2[3] != 0) << 3 |
           (ulonglong)(param_2[2] != 0) << 2;
  if (uVar3 != 0) {
    uVar7 = 0;
    uVar4 = uVar3;
    do {
      uVar9 = uVar4 + uVar7 >> 1;
      uVar8 = *(ulonglong *)(*param_1 + (ulonglong)uVar9 * 0x158);
      uVar2 = uVar9;
      if (uVar8 <= uVar10) {
        if (uVar10 <= uVar8) break;
        uVar7 = uVar9 + 1;
        uVar9 = uVar9 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar4 != uVar7);
    if ((uVar9 != uVar3) &&
       (lVar5 = (ulonglong)uVar9 * 0x158, *(ulonglong *)(*param_1 + lVar5) == uVar10))
    goto LAB_18008e7b4;
  }
  if (uVar3 == *(uint *)(param_1 + 1)) {
    uVar8 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar5 = uVar8 * 0x158;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    if (SUB168(auVar1 * ZEXT816(0x158),8) != 0) {
      lVar5 = -1;
    }
    lVar5 = thunk_FUN_180102f80(lVar5);
    if (lVar5 != 0) {
      uVar8 = 0;
      if ((int)param_1[1] != 0) {
        do {
          thunk_FUN_180001218(lVar5 + uVar8 * 0x158,*param_1 + uVar8 * 0x158,0x158);
          uVar3 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar5;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  while (lVar6 = *param_1, uVar9 < uVar3) {
    thunk_FUN_180001218(lVar6 + (ulonglong)uVar3 * 0x158,lVar6 + (ulonglong)(uVar3 - 1) * 0x158,
                        0x158);
    uVar3 = uVar3 - 1;
  }
  lVar5 = (ulonglong)uVar9 * 0x158;
  *(ulonglong *)(lVar6 + lVar5) = uVar10;
  thunk_FUN_180001218(lVar5 + *param_1 + 8,param_2,0x148);
  lVar6 = FUN_180102f80(0x148);
  if (lVar6 != 0) {
    thunk_FUN_180001218(lVar6,param_2,0x148);
  }
  *(longlong *)(lVar5 + *param_1 + 0x150) = lVar6;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18008e7b4:
  return *(undefined8 *)(lVar5 + *param_1 + 0x150);
}

