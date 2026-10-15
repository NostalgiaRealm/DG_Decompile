/*
 * FUN_10024f28 at 10024f28
 * byte __stdcall FUN_10024f28(int param_1, int param_2)
 * Address ranges: 10024f28-1002500b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10024f28(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int local_38 [8];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar4 = param_2;
  iVar3 = param_1;
  bVar7 = 1;
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_2 + 4);
    iVar6 = *(int *)(param_1 + 0xc);
    local_18 = *(uint *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 8);
    local_8 = *(int *)(param_1 + 0x18);
    local_14 = *(uint *)(param_1 + 0x6c);
    local_10 = *(uint *)(param_1 + 0x70);
    local_c = *(uint *)(param_1 + 0x74);
    piVar8 = (int *)(param_1 + 0x48);
    piVar9 = local_38;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    if ((bVar1 & 4) != 0) {
      iVar6 = *(int *)(param_2 + 0xc);
    }
    param_2 = iVar6;
    param_1 = iVar2;
    if ((*(byte *)(iVar4 + 4) & 2) != 0) {
      param_1 = *(int *)(iVar4 + 8);
    }
    if ((*(uint *)(iVar4 + 4) & 0x40000) != 0) {
      local_8 = *(int *)(iVar4 + 0x18);
    }
    if ((*(uint *)(iVar4 + 4) & 0x1000) != 0) {
      piVar8 = (int *)(iVar4 + 0x48);
      piVar9 = local_38;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
    }
    bVar10 = true;
    if ((*(byte *)(iVar4 + 4) & 0x20) != 0) {
      bVar10 = *(uint *)(iVar4 + 0x14) < 8;
    }
    if (((((param_2 != *(int *)(iVar3 + 0xc)) || (param_1 != *(int *)(iVar3 + 8))) ||
         (local_8 != *(int *)(iVar3 + 0x18))) ||
        ((local_38[3] != *(int *)(iVar3 + 0x54) ||
         ((*(uint *)(iVar3 + 0x68) & local_18) != local_18)))) ||
       (((*(uint *)(iVar3 + 0x6c) & local_14) != local_14 ||
        (((*(uint *)(iVar3 + 0x70) & local_10) != local_10 ||
         ((*(uint *)(iVar3 + 0x74) & local_c) != local_c)))))) {
      bVar7 = 0;
    }
    bVar7 = bVar7 & bVar10;
  }
  return bVar7;
}

