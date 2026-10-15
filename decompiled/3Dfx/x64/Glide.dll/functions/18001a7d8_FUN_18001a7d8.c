/*
 * FUN_18001a7d8 at 18001a7d8
 * undefined __fastcall FUN_18001a7d8(undefined8 param_1, uint * param_2, uint param_3, uint * param_4, uint * param_5)
 * Address ranges: 18001a7d8-18001a861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001a7d8(undefined8 param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar10 = 0xffffffff;
  uVar11 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar13 = 0xffffffff;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    param_2 = param_2 + 4;
    uVar6 = (uVar6 < uVar1) * uVar1 | (uVar6 >= uVar1) * uVar6;
    uVar7 = (uVar7 < uVar2) * uVar2 | (uVar7 >= uVar2) * uVar7;
    uVar8 = (uVar8 < uVar3) * uVar3 | (uVar8 >= uVar3) * uVar8;
    uVar9 = (uVar9 < uVar4) * uVar4 | (uVar9 >= uVar4) * uVar9;
    uVar10 = (uVar1 < uVar10) * uVar1 | (uVar1 >= uVar10) * uVar10;
    uVar11 = (uVar2 < uVar11) * uVar2 | (uVar2 >= uVar11) * uVar11;
    uVar12 = (uVar3 < uVar12) * uVar3 | (uVar3 >= uVar12) * uVar12;
    uVar13 = (uVar4 < uVar13) * uVar4 | (uVar4 >= uVar13) * uVar13;
  }
  uVar5 = (uVar8 < uVar6) * uVar6 | (uVar8 >= uVar6) * uVar8;
  uVar8 = (uVar9 < uVar7) * uVar7 | (uVar9 >= uVar7) * uVar9;
  uVar6 = (uVar10 < uVar12) * uVar10 | (uVar10 >= uVar12) * uVar12;
  uVar7 = (uVar11 < uVar13) * uVar11 | (uVar11 >= uVar13) * uVar13;
  uVar5 = (uVar8 < uVar5) * uVar5 | (uVar8 >= uVar5) * uVar8;
  uVar6 = (uVar6 < uVar7) * uVar6 | (uVar6 >= uVar7) * uVar7;
  for (uVar7 = param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar8 = *param_2;
    param_2 = param_2 + 1;
    uVar5 = (uVar5 < uVar8) * uVar8 | (uVar5 >= uVar8) * uVar5;
    uVar6 = (uVar8 < uVar6) * uVar8 | (uVar8 >= uVar6) * uVar6;
  }
  *param_4 = uVar6;
  *param_5 = uVar5;
  return;
}

