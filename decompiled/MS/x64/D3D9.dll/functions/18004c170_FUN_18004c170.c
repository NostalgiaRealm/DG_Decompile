/*
 * FUN_18004c170 at 18004c170
 * undefined8 __fastcall FUN_18004c170(longlong * param_1, int * param_2)
 * Address ranges: 18004c170-18004c4f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004c170(longlong *param_1,int *param_2)

{
  LPVOID pvVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar6 = FUN_1800e64ac(param_1,param_2);
  uVar17 = *(uint *)((longlong)param_1 + 0xc);
  uVar16 = 0;
  if (uVar17 != 0) {
    uVar13 = 0;
    uVar11 = uVar17;
    do {
      uVar15 = uVar11 + uVar13 >> 1;
      uVar16 = (ulonglong)uVar15;
      uVar10 = *(ulonglong *)(*param_1 + uVar16 * 0x158);
      if (uVar10 <= uVar6) {
        if (uVar6 <= uVar10) break;
        uVar13 = uVar15 + 1;
        uVar16 = (ulonglong)uVar13;
        uVar15 = uVar11;
      }
      uVar11 = uVar15;
    } while (uVar11 != uVar13);
  }
  if ((uint)uVar16 != uVar17) {
    lVar8 = *param_1;
    lVar14 = uVar16 * 0x158;
    if (*(ulonglong *)(lVar8 + lVar14) == uVar6) {
      if ((((*param_2 == *(int *)(lVar8 + 8 + lVar14)) &&
           (param_2[1] == *(int *)(lVar8 + 0xc + lVar14))) &&
          (iVar5 = FUN_1800fbe7c((byte *)(param_2 + 2),(byte *)(lVar8 + 0x10 + lVar14),0x28),
          iVar5 == 0)) &&
         (((iVar5 = FUN_1800fbe7c((byte *)(param_2 + 0xc),(byte *)(lVar8 + 0x38 + lVar14),0x28),
           iVar5 == 0 &&
           (iVar5 = FUN_1800fbe7c((byte *)(param_2 + 0x16),(byte *)(lVar8 + 0x60 + lVar14),0x28),
           iVar5 == 0)) &&
          (iVar5 = FUN_1800fbe7c((byte *)(param_2 + 0x20),(byte *)(lVar8 + 0x88 + lVar14),0x28),
          iVar5 == 0)))) {
        return *(undefined8 *)(lVar8 + 0x150 + lVar14);
      }
      pvVar1 = *(LPVOID *)(lVar8 + 0x150 + lVar14);
      FUN_1800e76c4((longlong *)param_1[2],(longlong)pvVar1);
      FUN_1800fbcf0(pvVar1);
      FUN_18004c790(param_1,uVar16,uVar6,(undefined8 *)param_2);
      return *(undefined8 *)(*param_1 + 0x150 + lVar14);
    }
  }
  if (uVar17 == *(uint *)(param_1 + 1)) {
    auVar2 = ZEXT816(0x158) * ZEXT416(*(uint *)(param_1 + 1) * 2);
    uVar7 = auVar2._0_8_;
    if (auVar2._8_8_ != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar8 = thunk_FUN_1800fbccc(uVar7);
    if (lVar8 != 0) {
      uVar17 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar14 = 2;
          puVar3 = (undefined8 *)(*param_1 + (ulonglong)uVar17 * 0x158);
          puVar4 = (undefined8 *)((ulonglong)uVar17 * 0x158 + lVar8);
          do {
            puVar12 = puVar4;
            puVar9 = puVar3;
            uVar7 = puVar9[1];
            *puVar12 = *puVar9;
            puVar12[1] = uVar7;
            uVar7 = puVar9[3];
            puVar12[2] = puVar9[2];
            puVar12[3] = uVar7;
            uVar7 = puVar9[5];
            puVar12[4] = puVar9[4];
            puVar12[5] = uVar7;
            uVar7 = puVar9[7];
            puVar12[6] = puVar9[6];
            puVar12[7] = uVar7;
            uVar7 = puVar9[9];
            puVar12[8] = puVar9[8];
            puVar12[9] = uVar7;
            uVar7 = puVar9[0xb];
            puVar12[10] = puVar9[10];
            puVar12[0xb] = uVar7;
            uVar7 = puVar9[0xd];
            puVar12[0xc] = puVar9[0xc];
            puVar12[0xd] = uVar7;
            uVar7 = puVar9[0xf];
            puVar12[0xe] = puVar9[0xe];
            puVar12[0xf] = uVar7;
            lVar14 = lVar14 + -1;
            puVar3 = puVar9 + 0x10;
            puVar4 = puVar12 + 0x10;
          } while (lVar14 != 0);
          uVar7 = puVar9[0x11];
          uVar17 = uVar17 + 1;
          puVar12[0x10] = puVar9[0x10];
          puVar12[0x11] = uVar7;
          uVar7 = puVar9[0x13];
          puVar12[0x12] = puVar9[0x12];
          puVar12[0x13] = uVar7;
          uVar7 = puVar9[0x15];
          puVar12[0x14] = puVar9[0x14];
          puVar12[0x15] = uVar7;
          uVar7 = puVar9[0x17];
          puVar12[0x16] = puVar9[0x16];
          puVar12[0x17] = uVar7;
          uVar7 = puVar9[0x19];
          puVar12[0x18] = puVar9[0x18];
          puVar12[0x19] = uVar7;
          puVar12[0x1a] = puVar9[0x1a];
        } while (uVar17 < *(uint *)(param_1 + 1));
      }
      FUN_1800fbcf0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar8;
    }
  }
  uVar17 = *(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar16 < uVar17) {
    uVar10 = (ulonglong)uVar17;
    uVar17 = uVar17 - 1;
    lVar8 = 2;
    puVar3 = (undefined8 *)((ulonglong)uVar17 * 0x158 + *param_1);
    puVar4 = (undefined8 *)(uVar10 * 0x158 + *param_1);
    do {
      puVar12 = puVar4;
      puVar9 = puVar3;
      uVar7 = puVar9[1];
      *puVar12 = *puVar9;
      puVar12[1] = uVar7;
      uVar7 = puVar9[3];
      puVar12[2] = puVar9[2];
      puVar12[3] = uVar7;
      uVar7 = puVar9[5];
      puVar12[4] = puVar9[4];
      puVar12[5] = uVar7;
      uVar7 = puVar9[7];
      puVar12[6] = puVar9[6];
      puVar12[7] = uVar7;
      uVar7 = puVar9[9];
      puVar12[8] = puVar9[8];
      puVar12[9] = uVar7;
      uVar7 = puVar9[0xb];
      puVar12[10] = puVar9[10];
      puVar12[0xb] = uVar7;
      uVar7 = puVar9[0xd];
      puVar12[0xc] = puVar9[0xc];
      puVar12[0xd] = uVar7;
      uVar7 = puVar9[0xf];
      puVar12[0xe] = puVar9[0xe];
      puVar12[0xf] = uVar7;
      lVar8 = lVar8 + -1;
      puVar3 = puVar9 + 0x10;
      puVar4 = puVar12 + 0x10;
    } while (lVar8 != 0);
    uVar7 = puVar9[0x11];
    puVar12[0x10] = puVar9[0x10];
    puVar12[0x11] = uVar7;
    uVar7 = puVar9[0x13];
    puVar12[0x12] = puVar9[0x12];
    puVar12[0x13] = uVar7;
    uVar7 = puVar9[0x15];
    puVar12[0x14] = puVar9[0x14];
    puVar12[0x15] = uVar7;
    uVar7 = puVar9[0x17];
    puVar12[0x16] = puVar9[0x16];
    puVar12[0x17] = uVar7;
    uVar7 = puVar9[0x19];
    puVar12[0x18] = puVar9[0x18];
    puVar12[0x19] = uVar7;
    puVar12[0x1a] = puVar9[0x1a];
  }
  FUN_18004c790(param_1,uVar16,uVar6,(undefined8 *)param_2);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return *(undefined8 *)(uVar16 * 0x158 + 0x150 + *param_1);
}

