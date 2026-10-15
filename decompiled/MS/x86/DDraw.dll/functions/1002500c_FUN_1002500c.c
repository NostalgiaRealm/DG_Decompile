/*
 * FUN_1002500c at 1002500c
 * undefined4 __stdcall FUN_1002500c(int param_1, int param_2)
 * Address ranges: 1002500c-100251fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002500c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  
  bVar9 = 0;
  piVar7 = *(int **)(param_1 + 4);
  piVar5 = (int *)((uint)piVar7 & *(uint *)(param_2 + 4));
  if (piVar5 == piVar7) {
    bVar9 = 1;
    if ((((uint)piVar7 & 1) != 0) &&
       ((((*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68) ||
          (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c))) ||
         (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) ||
        (*(int *)(param_1 + 0x74) != *(int *)(param_2 + 0x74))))) {
      bVar9 = 0;
    }
    bVar8 = bVar9;
    if (((uint)piVar7 & 2) != 0) {
      piVar7 = *(int **)(param_1 + 4);
      bVar8 = 0;
      if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
        bVar8 = bVar9;
      }
    }
    bVar4 = bVar8;
    if (((uint)piVar7 & 4) != 0) {
      piVar7 = *(int **)(param_1 + 4);
      bVar4 = 0;
      if (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) {
        bVar4 = bVar8;
      }
    }
    bVar9 = bVar4;
    if (((uint)piVar7 & 8) != 0) {
      piVar7 = *(int **)(param_1 + 4);
      bVar9 = 0;
      if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
        bVar9 = bVar4;
      }
    }
    if (((uint)piVar7 & 0x20) != 0) {
      bVar9 = bVar9 & *(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14);
    }
    if ((char)piVar7 < '\0') {
      bVar9 = bVar9 & *(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c);
    }
    if (((uint)piVar7 & 0x800) != 0) {
      bVar9 = bVar9 & *(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24);
    }
    if (((uint)piVar7 & 0x1000) != 0) {
      uVar6 = FUN_10031a59((uint *)(param_1 + 0x48),(uint *)(param_2 + 0x48),0);
      piVar7 = *(int **)(param_1 + 4);
      bVar9 = bVar9 & (byte)uVar6;
    }
    if (((uint)piVar7 & 0x2000) != 0) {
      if ((*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c)) &&
         (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) {
        bVar8 = 1;
      }
      else {
        bVar8 = 0;
      }
      bVar9 = bVar9 & bVar8;
    }
    bVar8 = 1;
    if (((uint)piVar7 & 0x4000) != 0) {
      if ((*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34)) &&
         (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      bVar9 = bVar9 & bVar4;
    }
    if (((uint)piVar7 & 0x8000) != 0) {
      if ((*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c)) &&
         (*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38))) {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      bVar9 = bVar9 & bVar4;
    }
    if (((uint)piVar7 & 0x10000) != 0) {
      if ((*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44)) ||
         (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
        bVar8 = 0;
      }
      bVar9 = bVar9 & bVar8;
    }
    piVar1 = (int *)(param_2 + 0x18);
    piVar2 = (int *)(param_1 + 0x18);
    piVar5 = piVar1;
    if (((uint)piVar7 & 0x20000) != 0) {
      iVar3 = *piVar2;
      bVar10 = iVar3 == *(int *)(param_2 + 0x18);
      bVar9 = bVar9 & bVar10;
      piVar5 = (int *)CONCAT31((int3)((uint)iVar3 >> 8),bVar10);
    }
    if (((uint)piVar7 & 0x40000) != 0) {
      iVar3 = *piVar2;
      piVar5 = (int *)CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *piVar1);
      bVar9 = bVar9 & iVar3 == *piVar1;
    }
    if (((uint)piVar7 & 0x80000) != 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      bVar10 = iVar3 == *(int *)(param_2 + 0x10);
      piVar5 = (int *)CONCAT31((int3)((uint)iVar3 >> 8),bVar10);
      bVar9 = bVar9 & bVar10;
    }
    if (((uint)piVar7 & 0x100000) != 0) {
      iVar3 = *(int *)(param_1 + 0x78);
      bVar10 = iVar3 == *(int *)(param_2 + 0x78);
      piVar5 = (int *)CONCAT31((int3)((uint)iVar3 >> 8),bVar10);
      bVar9 = bVar9 & bVar10;
    }
    if (((uint)piVar7 & 0x200000) != 0) {
      iVar3 = *(int *)(param_1 + 0x48);
      bVar10 = iVar3 == *(int *)(param_2 + 0x48);
      piVar5 = (int *)CONCAT31((int3)((uint)iVar3 >> 8),bVar10);
      bVar9 = bVar9 & bVar10;
    }
    if (((uint)piVar7 & 0x400000) != 0) {
      bVar9 = bVar9 & *piVar2 == *piVar1;
      piVar5 = piVar1;
    }
  }
  return CONCAT31((int3)((uint)piVar5 >> 8),bVar9);
}

