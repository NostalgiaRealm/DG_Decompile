/*
 * FUN_18000fea8 at 18000fea8
 * undefined __cdecl FUN_18000fea8(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 18000fea8-180010027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000fea8(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  SIZE_T SVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    uVar7 = CONCAT44(0,(int)param_1[1] << 1);
    SVar8 = uVar7 * 0x48;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
    if (SUB168(auVar3 * ZEXT816(0x48),8) != 0) {
      SVar8 = 0xffffffffffffffff;
    }
    lVar4 = thunk_FUN_1800636c0(SVar8);
    if (lVar4 != 0) {
      uVar7 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar7 + 1;
          puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x48);
          puVar2 = (undefined8 *)(lVar4 + uVar7 * 0x48);
          uVar12 = *puVar5;
          uVar11 = puVar5[3];
          uVar10 = puVar5[2];
          puVar2[1] = puVar5[1];
          *puVar2 = uVar12;
          puVar2[3] = uVar11;
          puVar2[2] = uVar10;
          uVar12 = puVar5[4];
          uVar11 = puVar5[7];
          uVar10 = puVar5[6];
          puVar2[5] = puVar5[5];
          puVar2[4] = uVar12;
          puVar2[7] = uVar11;
          puVar2[6] = uVar10;
          puVar2[8] = puVar5[8];
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180063700((LPVOID)*param_1);
      *param_1 = lVar4;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while (param_2 < (uint)uVar7) {
    uVar9 = (ulonglong)((uint)uVar7 - 1);
    puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x48);
    puVar2 = (undefined8 *)(*param_1 + uVar9 * 0x48);
    uVar12 = *puVar2;
    uVar11 = puVar2[3];
    uVar10 = puVar2[2];
    puVar5[1] = puVar2[1];
    *puVar5 = uVar12;
    puVar5[3] = uVar11;
    puVar5[2] = uVar10;
    uVar12 = puVar2[4];
    uVar11 = puVar2[7];
    uVar10 = puVar2[6];
    puVar5[5] = puVar2[5];
    puVar5[4] = uVar12;
    puVar5[7] = uVar11;
    puVar5[6] = uVar10;
    puVar5[8] = puVar2[8];
    uVar7 = uVar9;
  }
  *(undefined8 *)(*param_1 + uVar6 * 0x48) = param_3;
  uVar12 = *param_4;
  uVar11 = param_4[3];
  uVar10 = param_4[2];
  lVar4 = *param_1 + uVar6 * 0x48;
  *(undefined8 *)(lVar4 + 0x10) = param_4[1];
  *(undefined8 *)(lVar4 + 8) = uVar12;
  *(undefined8 *)(lVar4 + 0x20) = uVar11;
  *(undefined8 *)(lVar4 + 0x18) = uVar10;
  uVar10 = param_4[4];
  *(undefined8 *)(lVar4 + 0x30) = param_4[5];
  *(undefined8 *)(lVar4 + 0x28) = uVar10;
  *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(param_4 + 6);
  puVar5 = (undefined8 *)FUN_1800636c0(0x34);
  if (puVar5 != (undefined8 *)0x0) {
    uVar12 = *param_4;
    uVar11 = param_4[3];
    uVar10 = param_4[2];
    puVar5[1] = param_4[1];
    *puVar5 = uVar12;
    puVar5[3] = uVar11;
    puVar5[2] = uVar10;
    uVar10 = param_4[4];
    puVar5[5] = param_4[5];
    puVar5[4] = uVar10;
    *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(param_4 + 6);
  }
  *(undefined8 **)(*param_1 + uVar6 * 0x48 + 0x40) = puVar5;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

