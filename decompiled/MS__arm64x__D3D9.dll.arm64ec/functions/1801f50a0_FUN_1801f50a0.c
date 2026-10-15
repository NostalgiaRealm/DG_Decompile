/*
 * FUN_1801f50a0 at 1801f50a0
 * undefined FUN_1801f50a0(void)
 * Address ranges: 1801f50a0-1801f51d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1801f50a0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  *param_1 = *param_2;
  lVar10 = *(longlong *)(param_1 + 2);
  if (lVar10 != 0) {
    lVar8 = *(longlong *)(lVar10 + -8);
    lVar5 = lVar10 + lVar8 * 0x28;
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      FUN_1802229d8(*(undefined8 *)(lVar5 + -0x10));
      FUN_1802229d8(*(undefined8 *)(lVar5 + -0x20));
      lVar5 = lVar5 + -0x28;
    }
    FUN_1802229d8(lVar10 + -8,*(longlong *)(lVar10 + -8) * 0x28 + 8);
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_2[4] != 0) {
    uVar3 = param_2[5];
    uVar9 = CONCAT44(0,uVar3);
    uVar7 = uVar9 * 0x28;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar9;
    if (SUB168(auVar4 * ZEXT816(0x28),8) != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar10 = uVar7 + 8;
    if (0xfffffffffffffff7 < uVar7) {
      lVar10 = -1;
    }
    puVar6 = (ulonglong *)FUN_1802229a8(lVar10);
    if (puVar6 == (ulonglong *)0x0) {
      *(undefined8 *)(param_1 + 2) = 0;
    }
    else {
      puVar2 = puVar6 + 1;
      *puVar6 = uVar9;
      puVar6 = puVar2;
      if (uVar3 != 0) {
        do {
          puVar6[1] = 0;
          puVar6[2] = 0;
          uVar9 = uVar9 - 1;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6 = puVar6 + 5;
        } while (uVar9 != 0);
      }
      *(ulonglong **)(param_1 + 2) = puVar2;
      if (puVar2 != (ulonglong *)0x0) {
        uVar3 = param_2[4];
        uVar7 = 0;
        lVar10 = *(longlong *)(param_2 + 2);
        if (uVar3 != 0) {
          do {
            FUN_1801f5278(puVar2 + uVar7 * 5,lVar10 + uVar7 * 0x28);
            uVar1 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar1;
          } while (uVar1 < uVar3);
        }
        param_1[4] = param_2[4];
        param_1[5] = param_2[5];
      }
    }
  }
  return param_1;
}

