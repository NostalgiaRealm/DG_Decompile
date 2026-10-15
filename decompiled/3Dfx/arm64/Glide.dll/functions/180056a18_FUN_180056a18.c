/*
 * FUN_180056a18 at 180056a18
 * undefined __cdecl FUN_180056a18(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180056a18-180056b8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056a18(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  SIZE_T SVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    uVar8 = CONCAT44(0,(int)param_1[1] << 1);
    SVar9 = uVar8 * 0x48;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    if (SUB168(auVar4 * ZEXT816(0x48),8) != 0) {
      SVar9 = 0xffffffffffffffff;
    }
    lVar5 = thunk_FUN_1800609d8(SVar9);
    if (lVar5 != 0) {
      uVar8 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar8 + 1;
          puVar2 = (undefined8 *)(*param_1 + uVar8 * 0x48);
          puVar3 = (undefined8 *)(lVar5 + uVar8 * 0x48);
          uVar13 = *puVar2;
          uVar12 = puVar2[3];
          uVar11 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar13;
          puVar3[3] = uVar12;
          puVar3[2] = uVar11;
          uVar13 = puVar2[4];
          uVar12 = puVar2[7];
          uVar11 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar13;
          puVar3[7] = uVar12;
          puVar3[6] = uVar11;
          puVar3[8] = puVar2[8];
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180060a18((LPVOID)*param_1);
      *param_1 = lVar5;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while (param_2 < (uint)uVar8) {
    uVar10 = (ulonglong)((uint)uVar8 - 1);
    puVar2 = (undefined8 *)(*param_1 + uVar8 * 0x48);
    puVar3 = (undefined8 *)(*param_1 + uVar10 * 0x48);
    uVar13 = *puVar3;
    uVar12 = puVar3[3];
    uVar11 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar13;
    puVar2[3] = uVar12;
    puVar2[2] = uVar11;
    uVar13 = puVar3[4];
    uVar12 = puVar3[7];
    uVar11 = puVar3[6];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar13;
    puVar2[7] = uVar12;
    puVar2[6] = uVar11;
    puVar2[8] = puVar3[8];
    uVar8 = uVar10;
  }
  *(undefined8 *)(*param_1 + uVar7 * 0x48) = param_3;
  uVar13 = *param_4;
  uVar12 = param_4[3];
  uVar11 = param_4[2];
  lVar5 = *param_1 + uVar7 * 0x48;
  *(undefined8 *)(lVar5 + 0x10) = param_4[1];
  *(undefined8 *)(lVar5 + 8) = uVar13;
  *(undefined8 *)(lVar5 + 0x20) = uVar12;
  *(undefined8 *)(lVar5 + 0x18) = uVar11;
  uVar11 = param_4[4];
  *(undefined8 *)(lVar5 + 0x30) = param_4[5];
  *(undefined8 *)(lVar5 + 0x28) = uVar11;
  *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(param_4 + 6);
  puVar6 = (undefined1 *)FUN_1800609d8(0x3c0);
  if (puVar6 != (undefined1 *)0x0) {
    FUN_1800611b0(puVar6,0,0x3c0);
  }
  *(undefined1 **)(*param_1 + uVar7 * 0x48 + 0x40) = puVar6;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

