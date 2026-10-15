/*
 * FUN_1800278a8 at 1800278a8
 * undefined __cdecl FUN_1800278a8(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 1800278a8-1800279f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800278a8(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  SIZE_T SVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    uVar7 = CONCAT44(0,(int)param_1[1] << 1);
    SVar8 = uVar7 * 0x30;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar7;
    if (SUB168(auVar5 * ZEXT816(0x30),8) != 0) {
      SVar8 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_1800636c0(SVar8);
    if (lVar6 != 0) {
      uVar7 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar7 + 1;
          puVar2 = (undefined8 *)(*param_1 + uVar7 * 0x30);
          puVar3 = (undefined8 *)(lVar6 + uVar7 * 0x30);
          uVar13 = *puVar2;
          uVar12 = puVar2[3];
          uVar11 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar13;
          puVar3[3] = uVar12;
          puVar3[2] = uVar11;
          uVar11 = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar11;
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180063700((LPVOID)*param_1);
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while (param_2 < (uint)uVar7) {
    uVar9 = (ulonglong)((uint)uVar7 - 1);
    puVar2 = (undefined8 *)(*param_1 + uVar7 * 0x30);
    puVar3 = (undefined8 *)(*param_1 + uVar9 * 0x30);
    uVar13 = *puVar3;
    uVar12 = puVar3[3];
    uVar11 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar13;
    puVar2[3] = uVar12;
    puVar2[2] = uVar11;
    uVar11 = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar11;
    uVar7 = uVar9;
  }
  uVar14 = param_4[1];
  uVar13 = *param_4;
  uVar12 = param_4[3];
  uVar11 = param_4[2];
  lVar10 = (ulonglong)param_2 * 0x30;
  *(undefined8 *)(*param_1 + lVar10) = param_3;
  lVar6 = lVar10 + *param_1;
  *(undefined8 *)(lVar6 + 0x10) = uVar14;
  *(undefined8 *)(lVar6 + 8) = uVar13;
  *(undefined8 *)(lVar6 + 0x20) = uVar12;
  *(undefined8 *)(lVar6 + 0x18) = uVar11;
  iVar4 = *(int *)param_1[2];
  *(int *)param_1[2] = iVar4 + 1;
  *(int *)(lVar10 + *param_1 + 0x28) = iVar4;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

