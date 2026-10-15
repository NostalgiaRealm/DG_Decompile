/*
 * FUN_180057998 at 180057998
 * undefined __fastcall FUN_180057998(longlong * param_1, uint param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6)
 * Address ranges: 180057998-180057ac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057998(longlong *param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
  if ((char)param_1[3] != '\0') {
    puVar5 = &DAT_180067188;
    if (param_3 != (uint *)0x0) {
      puVar5 = param_3;
    }
    puVar4 = &DAT_180067188;
    if (param_4 != (uint *)0x0) {
      puVar4 = param_4;
    }
    puVar10 = &DAT_180067188;
    if (param_5 != (uint *)0x0) {
      puVar10 = param_5;
    }
    puVar11 = &DAT_180067188;
    if (param_6 != (uint *)0x0) {
      puVar11 = param_6;
    }
    lVar1 = (ulonglong)(*puVar5 + *puVar4 + *puVar10 + *puVar11 + 1) * 4;
    if ((ulonglong)param_1[2] < (ulonglong)((param_1[1] - *param_1) + lVar1)) {
      FUN_180057858(param_1,lVar1);
    }
    puVar8 = (uint *)param_1[1];
    *puVar8 = param_2;
    uVar2 = (ulonglong)*puVar5;
    puVar7 = puVar5;
    puVar6 = puVar8;
    while( true ) {
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      *puVar6 = *puVar7;
    }
    uVar9 = *puVar5;
    puVar7 = puVar8 + (ulonglong)uVar9 + 1;
    puVar5 = puVar4;
    for (uVar2 = (ulonglong)*puVar4; puVar5 = puVar5 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar5;
      puVar7 = puVar7 + 1;
    }
    uVar9 = *puVar4 + uVar9;
    puVar4 = puVar8 + (ulonglong)uVar9 + 1;
    puVar5 = puVar10;
    for (uVar2 = (ulonglong)*puVar10; puVar5 = puVar5 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
    }
    uVar9 = *puVar10 + uVar9;
    puVar4 = puVar8 + (ulonglong)uVar9 + 1;
    puVar5 = puVar11;
    for (uVar2 = (ulonglong)*puVar11; puVar5 = puVar5 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
    }
    puVar8 = puVar8 + (*puVar11 + uVar9);
    puVar4 = &DAT_18006718c;
    puVar5 = puVar8;
    for (lVar3 = 0; puVar5 = puVar5 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
    }
    puVar5 = &DAT_18006718c;
    for (lVar3 = 0; puVar8 = puVar8 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
    }
    param_1[1] = param_1[1] + lVar1;
  }
  return;
}

