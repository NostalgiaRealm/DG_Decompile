/*
 * FUN_1001d22f at 1001d22f
 * undefined __stdcall FUN_1001d22f(int * param_1, int param_2, int param_3, int param_4, uint param_5, int param_6)
 * Address ranges: 1001d22f-1001d3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d22f(int *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  
  iVar4 = param_1[1];
  puVar14 = (undefined4 *)(iVar4 * param_6 + *param_1);
  puVar1 = (undefined4 *)(param_3 + (uint)*(byte *)(param_2 + 3) * 4);
  cVar3 = *(char *)(param_2 + 1);
  if (cVar3 == '\x01') {
    for (uVar13 = param_5 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar1 = *puVar14;
      puVar2 = (undefined4 *)((int)puVar14 + iVar4);
      puVar14 = (undefined4 *)((int)puVar14 + iVar4 * 2);
      *(undefined4 *)((int)puVar1 + param_4) = *puVar2;
      puVar1 = (undefined4 *)((int)puVar1 + param_4 * 2);
    }
    if ((param_5 & 1) != 0) {
      *puVar1 = *puVar14;
    }
  }
  else if (cVar3 == '\x02') {
    for (uVar13 = param_5 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar1 = *puVar14;
      puVar1[1] = puVar14[1];
      *(undefined4 *)((int)puVar1 + param_4) = *(undefined4 *)((int)puVar14 + iVar4);
      puVar2 = (undefined4 *)((int)puVar14 + iVar4 + 4);
      puVar14 = (undefined4 *)((int)puVar14 + iVar4 * 2);
      *(undefined4 *)((int)puVar1 + param_4 + 4) = *puVar2;
      puVar1 = (undefined4 *)((int)puVar1 + param_4 * 2);
    }
    if ((param_5 & 1) != 0) {
      *puVar1 = *puVar14;
      puVar1[1] = puVar14[1];
    }
  }
  else if (cVar3 == '\x03') {
    for (uVar13 = param_5 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar1 = *puVar14;
      puVar1[1] = puVar14[1];
      puVar1[2] = puVar14[2];
      *(undefined4 *)((int)puVar1 + param_4) = *(undefined4 *)((int)puVar14 + iVar4);
      *(undefined4 *)((int)puVar1 + param_4 + 4) = *(undefined4 *)((int)puVar14 + iVar4 + 4);
      puVar2 = (undefined4 *)((int)puVar14 + iVar4 + 8);
      puVar14 = (undefined4 *)((int)puVar14 + iVar4 * 2);
      *(undefined4 *)((int)puVar1 + param_4 + 8) = *puVar2;
      puVar1 = (undefined4 *)((int)puVar1 + param_4 * 2);
    }
    if ((param_5 & 1) != 0) {
      *puVar1 = *puVar14;
      puVar1[1] = puVar14[1];
      puVar1[2] = puVar14[2];
    }
  }
  else if (cVar3 == '\x04') {
    for (uVar13 = param_5 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      puVar2 = (undefined4 *)((int)puVar14 + iVar4);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar14 = (undefined4 *)((int)puVar14 + iVar4 * 2);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      puVar2 = (undefined4 *)((int)puVar1 + param_4);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar1 = (undefined4 *)((int)puVar1 + param_4 * 2);
    }
    if ((param_5 & 1) != 0) {
      uVar5 = puVar14[1];
      uVar6 = puVar14[2];
      uVar7 = puVar14[3];
      *puVar1 = *puVar14;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
  }
  return;
}

