/*
 * FUN_18004bf30 at 18004bf30
 * undefined8 __fastcall FUN_18004bf30(longlong * param_1, uint * param_2)
 * Address ranges: 18004bf30-18004c16d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004bf30(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0;
  uVar14 = (ulonglong)
           (((param_2[9] << 6 | *param_2 & 3) << 2 | param_2[10] << 0x10 |
             -(uint)(param_2[8] != 0) & 0x80 | -(uint)(param_2[7] != 0) & 0x40 |
             -(uint)(param_2[6] != 0) & 0x20 | -(uint)(param_2[2] != 0) & 0x10 | param_2[1] & 3) ^
           param_2[5]) | ((ulonglong)param_2[4] ^ (longlong)(int)param_2[3]) << 0x20;
  if (uVar13 != 0) {
    lVar6 = *param_1;
    uVar9 = 0;
    uVar12 = uVar13;
    do {
      uVar4 = uVar12 + uVar9 >> 1;
      uVar10 = *(ulonglong *)(lVar6 + (ulonglong)uVar4 * 0x40);
      uVar3 = uVar4;
      if (uVar10 <= uVar14) {
        if (uVar14 <= uVar10) break;
        uVar9 = uVar4 + 1;
        uVar3 = uVar12;
        uVar4 = uVar9;
      }
      uVar12 = uVar3;
    } while (uVar12 != uVar9);
    if ((uVar4 != uVar13) && (*(ulonglong *)((ulonglong)uVar4 * 0x40 + lVar6) == uVar14)) {
      return *(undefined8 *)((ulonglong)uVar4 * 0x40 + 0x38 + lVar6);
    }
  }
  if (uVar13 == *(uint *)(param_1 + 1)) {
    auVar2 = ZEXT816(0x40) * ZEXT416(*(uint *)(param_1 + 1) * 2);
    uVar5 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_1800fbccc(uVar5);
    if (lVar6 != 0) {
      uVar13 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar7 = *param_1;
          uVar10 = (ulonglong)uVar13;
          uVar13 = uVar13 + 1;
          lVar11 = uVar10 * 0x40;
          uVar5 = ((undefined8 *)(lVar7 + lVar11))[1];
          *(undefined8 *)(lVar6 + lVar11) = *(undefined8 *)(lVar7 + lVar11);
          ((undefined8 *)(lVar6 + lVar11))[1] = uVar5;
          puVar8 = (undefined8 *)(lVar7 + 0x10 + lVar11);
          uVar5 = puVar8[1];
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar11);
          *puVar1 = *puVar8;
          puVar1[1] = uVar5;
          puVar8 = (undefined8 *)(lVar7 + 0x20 + lVar11);
          uVar5 = puVar8[1];
          puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar11);
          *puVar1 = *puVar8;
          puVar1[1] = uVar5;
          puVar8 = (undefined8 *)(lVar7 + 0x30 + lVar11);
          uVar5 = puVar8[1];
          puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar11);
          *puVar1 = *puVar8;
          puVar1[1] = uVar5;
        } while (uVar13 < *(uint *)(param_1 + 1));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar6;
    }
  }
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  while (uVar4 < uVar13) {
    lVar6 = *param_1;
    lVar11 = (ulonglong)uVar13 * 0x40;
    lVar7 = (ulonglong)(uVar13 - 1) * 0x40;
    uVar5 = ((undefined8 *)(lVar6 + lVar7))[1];
    *(undefined8 *)(lVar6 + lVar11) = *(undefined8 *)(lVar6 + lVar7);
    ((undefined8 *)(lVar6 + lVar11))[1] = uVar5;
    puVar8 = (undefined8 *)(lVar6 + 0x10 + lVar7);
    uVar5 = puVar8[1];
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar11);
    *puVar1 = *puVar8;
    puVar1[1] = uVar5;
    puVar8 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    uVar5 = puVar8[1];
    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar11);
    *puVar1 = *puVar8;
    puVar1[1] = uVar5;
    puVar8 = (undefined8 *)(lVar6 + 0x30 + lVar7);
    uVar5 = puVar8[1];
    puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar11);
    *puVar1 = *puVar8;
    puVar1[1] = uVar5;
    uVar13 = uVar13 - 1;
  }
  lVar7 = (ulonglong)uVar4 * 0x40;
  *(ulonglong *)(lVar7 + *param_1) = uVar14;
  uVar5 = *(undefined8 *)(param_2 + 2);
  lVar6 = *param_1;
  puVar8 = (undefined8 *)(lVar7 + 8 + lVar6);
  *puVar8 = *(undefined8 *)param_2;
  puVar8[1] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 6);
  puVar8 = (undefined8 *)(lVar7 + 0x18 + lVar6);
  *puVar8 = *(undefined8 *)(param_2 + 4);
  puVar8[1] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 9);
  puVar8 = (undefined8 *)(lVar7 + 0x24 + lVar6);
  *puVar8 = *(undefined8 *)(param_2 + 7);
  puVar8[1] = uVar5;
  puVar8 = (undefined8 *)FUN_1800fbccc(0x2c);
  if (puVar8 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(param_2 + 2);
    *puVar8 = *(undefined8 *)param_2;
    puVar8[1] = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 6);
    puVar8[2] = *(undefined8 *)(param_2 + 4);
    puVar8[3] = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 9);
    *(undefined8 *)((longlong)puVar8 + 0x1c) = *(undefined8 *)(param_2 + 7);
    *(undefined8 *)((longlong)puVar8 + 0x24) = uVar5;
  }
  *(undefined8 **)(lVar7 + 0x38 + *param_1) = puVar8;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return *(undefined8 *)(lVar7 + 0x38 + *param_1);
}

