/*
 * FUN_18004bd10 at 18004bd10
 * undefined8 __fastcall FUN_18004bd10(longlong * param_1, longlong * param_2)
 * Address ranges: 18004bd10-18004bf29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004bd10(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte local_828 [2048];
  
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = 0;
  uVar14 = -(ulonglong)((char)param_2[1] != '\0') & 0x8000000000000000 |
           (ulonglong)*(uint *)*param_2;
  plVar7 = param_1;
  if (uVar13 != 0) {
    lVar8 = *param_1;
    plVar7 = (longlong *)0x0;
    uVar12 = uVar13;
    do {
      uVar6 = uVar12 + (int)plVar7 >> 1;
      uVar15 = *(ulonglong *)(lVar8 + (ulonglong)uVar6 * 0x20);
      uVar5 = uVar6;
      if (uVar15 <= uVar14) {
        if (uVar14 <= uVar15) break;
        uVar6 = uVar6 + 1;
        plVar7 = (longlong *)(ulonglong)uVar6;
        uVar5 = uVar12;
      }
      uVar12 = uVar5;
    } while (uVar12 != (uint)plVar7);
    if ((uVar6 != uVar13) && (*(ulonglong *)((ulonglong)uVar6 * 0x20 + lVar8) == uVar14)) {
      return *(undefined8 *)((ulonglong)uVar6 * 0x20 + 0x18 + lVar8);
    }
  }
  if (uVar13 == *(uint *)(param_1 + 1)) {
    uVar13 = *(uint *)(param_1 + 1) * 2;
    uVar15 = CONCAT44(0,uVar13);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar15;
    plVar7 = SUB168(ZEXT816(0x20) * auVar3,0);
    if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
      plVar7 = (longlong *)0xffffffffffffffff;
    }
    lVar8 = thunk_FUN_1800fbccc(plVar7);
    if (lVar8 != 0) {
      lVar9 = lVar8;
      if (uVar13 != 0) {
        do {
          *(undefined8 *)(lVar9 + 8) = 0;
          *(undefined4 *)(lVar9 + 0x10) = 0;
          *(undefined1 *)(lVar9 + 0x14) = 0;
          uVar15 = uVar15 - 1;
          lVar9 = lVar9 + 0x20;
        } while (uVar15 != 0);
      }
      uVar15 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar9 = *param_1;
          uVar13 = (int)uVar15 + 1;
          lVar11 = uVar15 * 0x20;
          puVar10 = (undefined8 *)(lVar9 + lVar11);
          uVar4 = puVar10[1];
          *(undefined8 *)(lVar8 + lVar11) = *puVar10;
          ((undefined8 *)(lVar8 + lVar11))[1] = uVar4;
          puVar10 = (undefined8 *)(lVar9 + 0x10 + lVar11);
          uVar4 = puVar10[1];
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar11);
          *puVar1 = *puVar10;
          puVar1[1] = uVar4;
          uVar15 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 1));
      }
      plVar7 = (longlong *)*param_1;
      FUN_1800fbcf0(plVar7);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar8;
    }
  }
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  while (uVar6 < uVar13) {
    lVar8 = *param_1;
    plVar7 = (longlong *)((ulonglong)uVar13 * 0x20);
    lVar9 = (ulonglong)(uVar13 - 1) * 0x20;
    puVar10 = (undefined8 *)(lVar8 + lVar9);
    uVar4 = puVar10[1];
    *(undefined8 *)(lVar8 + (longlong)plVar7) = *puVar10;
    ((undefined8 *)(lVar8 + (longlong)plVar7))[1] = uVar4;
    puVar10 = (undefined8 *)(lVar8 + 0x10 + lVar9);
    uVar4 = puVar10[1];
    puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)plVar7);
    *puVar1 = *puVar10;
    puVar1[1] = uVar4;
    uVar13 = uVar13 - 1;
  }
  lVar9 = (ulonglong)uVar6 * 0x20;
  *(ulonglong *)(lVar9 + *param_1) = uVar14;
  lVar8 = param_2[1];
  plVar2 = (longlong *)(lVar9 + 8 + *param_1);
  *plVar2 = *param_2;
  plVar2[1] = lVar8;
  uVar14 = FUN_180064018(plVar7,*param_2,(longlong)local_828,(char)param_2[1]);
  puVar10 = FUN_1800e6780((longlong *)(param_1[2] + 0x19c0),local_828,(uint)uVar14);
  *(undefined8 **)(lVar9 + 0x18 + *param_1) = puVar10;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return *(undefined8 *)(lVar9 + 0x18 + *param_1);
}

