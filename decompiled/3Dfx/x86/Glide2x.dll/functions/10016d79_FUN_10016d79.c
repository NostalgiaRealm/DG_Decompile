/*
 * FUN_10016d79 at 10016d79
 * undefined __stdcall FUN_10016d79(uint * param_1, uint param_2, uint * param_3, uint * param_4)
 * Address ranges: 10016d79-10016e19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016d79(uint *param_1,uint param_2,uint *param_3,uint *param_4)

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
  
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0xffffffff;
  uVar11 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar13 = 0xffffffff;
  for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    param_1 = param_1 + 4;
    uVar6 = (uVar6 < uVar1) * uVar1 | (uVar6 >= uVar1) * uVar6;
    uVar7 = (uVar7 < uVar2) * uVar2 | (uVar7 >= uVar2) * uVar7;
    uVar8 = (uVar8 < uVar3) * uVar3 | (uVar8 >= uVar3) * uVar8;
    uVar9 = (uVar9 < uVar4) * uVar4 | (uVar9 >= uVar4) * uVar9;
    uVar10 = (uVar1 < uVar10) * uVar1 | (uVar1 >= uVar10) * uVar10;
    uVar11 = (uVar2 < uVar11) * uVar2 | (uVar2 >= uVar11) * uVar11;
    uVar12 = (uVar3 < uVar12) * uVar3 | (uVar3 >= uVar12) * uVar12;
    uVar13 = (uVar4 < uVar13) * uVar4 | (uVar4 >= uVar13) * uVar13;
  }
  uVar6 = (uVar8 < uVar6) * uVar6 | (uVar8 >= uVar6) * uVar8;
  uVar7 = (uVar9 < uVar7) * uVar7 | (uVar9 >= uVar7) * uVar9;
  uVar12 = (uVar10 < uVar12) * uVar10 | (uVar10 >= uVar12) * uVar12;
  uVar11 = (uVar11 < uVar13) * uVar11 | (uVar11 >= uVar13) * uVar13;
  uVar10 = (uVar7 < uVar6) * uVar6 | (uVar7 >= uVar6) * uVar7;
  uVar11 = (uVar12 < uVar11) * uVar12 | (uVar12 >= uVar11) * uVar11;
  for (uVar12 = param_2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    uVar13 = *param_1;
    param_1 = param_1 + 1;
    uVar10 = (uVar10 < uVar13) * uVar13 | (uVar10 >= uVar13) * uVar10;
    uVar11 = (uVar13 < uVar11) * uVar13 | (uVar13 >= uVar11) * uVar11;
  }
  *param_3 = uVar11;
  *param_4 = uVar10;
  return;
}

