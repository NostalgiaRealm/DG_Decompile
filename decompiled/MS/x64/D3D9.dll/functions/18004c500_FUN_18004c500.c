/*
 * FUN_18004c500 at 18004c500
 * undefined8 __fastcall FUN_18004c500(longlong * param_1, int * param_2)
 * Address ranges: 18004c500-18004c788
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004c500(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar12 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = 0;
  uVar11 = ((ulonglong)
            ((((param_2[6] & 0xfU) << 4 | param_2[6] & 0xfU) << 4 | param_2[7] & 0xfU) << 4 |
            param_2[8] & 0xfU) << 0x10 |
            (ulonglong)
            ((param_2[0xb] & 0xfU | ((param_2[10] & 0xfU) << 4 | param_2[10] & 0xfU) << 4) << 4) |
           (ulonglong)(param_2[0xc] & 0xf)) << 0x20 |
           (ulonglong)
           ((((uint)*(ushort *)(param_2 + 4) << 5 | param_2[2] & 0xfU) * 2 | param_2[1] & 1U) * 2) |
           (ulonglong)(-(uint)(param_2[3] != 0) & 0x40) | (ulonglong)(*param_2 != 0);
  if (uVar12 != 0) {
    uVar9 = 0;
    uVar10 = uVar12;
    do {
      uVar5 = uVar10 + uVar9 >> 1;
      uVar15 = *(ulonglong *)(*param_1 + (ulonglong)uVar5 * 0x48);
      uVar4 = uVar5;
      if (uVar15 <= uVar11) {
        if (uVar11 <= uVar15) break;
        uVar9 = uVar5 + 1;
        uVar4 = uVar10;
        uVar5 = uVar9;
      }
      uVar10 = uVar4;
    } while (uVar10 != uVar9);
  }
  if ((uVar5 == uVar12) || (*(ulonglong *)(*param_1 + (ulonglong)uVar5 * 0x48) != uVar11)) {
    uVar15 = (ulonglong)uVar5;
    if (uVar12 == *(uint *)(param_1 + 1)) {
      auVar3 = ZEXT816(0x48) * ZEXT416(*(uint *)(param_1 + 1) * 2);
      uVar6 = auVar3._0_8_;
      if (auVar3._8_8_ != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      lVar7 = thunk_FUN_1800fbccc(uVar6);
      if (lVar7 != 0) {
        uVar13 = 0;
        if ((int)param_1[1] != 0) {
          do {
            lVar2 = *param_1;
            uVar12 = (int)uVar13 + 1;
            puVar8 = (undefined8 *)(lVar2 + uVar13 * 0x48);
            uVar6 = puVar8[1];
            puVar1 = (undefined8 *)(lVar7 + uVar13 * 0x48);
            *puVar1 = *puVar8;
            puVar1[1] = uVar6;
            puVar8 = (undefined8 *)(lVar2 + 0x10 + uVar13 * 0x48);
            uVar6 = puVar8[1];
            puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar13 * 0x48);
            *puVar1 = *puVar8;
            puVar1[1] = uVar6;
            puVar8 = (undefined8 *)(lVar2 + 0x20 + uVar13 * 0x48);
            uVar6 = puVar8[1];
            puVar1 = (undefined8 *)(lVar7 + 0x20 + uVar13 * 0x48);
            *puVar1 = *puVar8;
            puVar1[1] = uVar6;
            puVar8 = (undefined8 *)(lVar2 + 0x30 + uVar13 * 0x48);
            uVar6 = puVar8[1];
            puVar1 = (undefined8 *)(lVar7 + 0x30 + uVar13 * 0x48);
            *puVar1 = *puVar8;
            puVar1[1] = uVar6;
            *(undefined8 *)(lVar7 + 0x40 + uVar13 * 0x48) =
                 *(undefined8 *)(lVar2 + 0x40 + uVar13 * 0x48);
            uVar13 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + 1));
        }
        FUN_1800fbcf0((LPVOID)*param_1);
        *(int *)(param_1 + 1) = (int)param_1[1] << 1;
        *param_1 = lVar7;
      }
    }
    uVar12 = *(uint *)((longlong)param_1 + 0xc);
    uVar13 = (ulonglong)uVar12;
    while (uVar5 < uVar12) {
      lVar7 = *param_1;
      uVar12 = (int)uVar13 - 1;
      uVar14 = (ulonglong)uVar12;
      puVar8 = (undefined8 *)(lVar7 + uVar14 * 0x48);
      uVar6 = puVar8[1];
      puVar1 = (undefined8 *)(lVar7 + uVar13 * 0x48);
      *puVar1 = *puVar8;
      puVar1[1] = uVar6;
      puVar8 = (undefined8 *)(lVar7 + 0x10 + uVar14 * 0x48);
      uVar6 = puVar8[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar13 * 0x48);
      *puVar1 = *puVar8;
      puVar1[1] = uVar6;
      puVar8 = (undefined8 *)(lVar7 + 0x20 + uVar14 * 0x48);
      uVar6 = puVar8[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + uVar13 * 0x48);
      *puVar1 = *puVar8;
      puVar1[1] = uVar6;
      puVar8 = (undefined8 *)(lVar7 + 0x30 + uVar14 * 0x48);
      uVar6 = puVar8[1];
      puVar1 = (undefined8 *)(lVar7 + 0x30 + uVar13 * 0x48);
      *puVar1 = *puVar8;
      puVar1[1] = uVar6;
      *(undefined8 *)(lVar7 + 0x40 + uVar13 * 0x48) = *(undefined8 *)(lVar7 + 0x40 + uVar14 * 0x48);
      uVar13 = uVar14;
    }
    *(ulonglong *)(*param_1 + uVar15 * 0x48) = uVar11;
    lVar7 = *param_1;
    uVar6 = *(undefined8 *)(param_2 + 2);
    puVar8 = (undefined8 *)(lVar7 + 8 + uVar15 * 0x48);
    *puVar8 = *(undefined8 *)param_2;
    puVar8[1] = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 6);
    puVar8 = (undefined8 *)(lVar7 + 0x18 + uVar15 * 0x48);
    *puVar8 = *(undefined8 *)(param_2 + 4);
    puVar8[1] = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 10);
    puVar8 = (undefined8 *)(lVar7 + 0x28 + uVar15 * 0x48);
    *puVar8 = *(undefined8 *)(param_2 + 8);
    puVar8[1] = uVar6;
    *(int *)(lVar7 + 0x38 + uVar15 * 0x48) = param_2[0xc];
    puVar8 = (undefined8 *)FUN_1800fbccc(0x34);
    if (puVar8 != (undefined8 *)0x0) {
      uVar6 = *(undefined8 *)(param_2 + 2);
      *puVar8 = *(undefined8 *)param_2;
      puVar8[1] = uVar6;
      uVar6 = *(undefined8 *)(param_2 + 6);
      puVar8[2] = *(undefined8 *)(param_2 + 4);
      puVar8[3] = uVar6;
      uVar6 = *(undefined8 *)(param_2 + 10);
      puVar8[4] = *(undefined8 *)(param_2 + 8);
      puVar8[5] = uVar6;
      *(int *)(puVar8 + 6) = param_2[0xc];
    }
    *(undefined8 **)(*param_1 + 0x40 + uVar15 * 0x48) = puVar8;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  }
  return *(undefined8 *)(*param_1 + 0x40 + (ulonglong)uVar5 * 0x48);
}

