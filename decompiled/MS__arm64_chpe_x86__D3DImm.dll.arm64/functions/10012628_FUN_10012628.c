/*
 * FUN_10012628 at 10012628
 * undefined FUN_10012628(void)
 * Address ranges: 10012628-100126d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012628(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  iVar6 = 4;
  do {
    uVar8 = 0;
    do {
      iVar1 = uVar8 * 0x10;
      iVar2 = uVar8 * 0x10;
      iVar3 = uVar8 * 0x10;
      iVar4 = uVar8 * 0x10;
      iVar5 = uVar8 * 0x10;
      uVar8 = uVar8 + 1;
      *(float *)(iVar7 + param_3 + iVar5) =
           *(float *)(param_2 + iVar1) * *(float *)(iVar7 + param_1) +
           *(float *)(param_2 + 4 + iVar2) * *(float *)(iVar7 + param_1 + 0x10) +
           *(float *)(param_2 + 8 + iVar3) * *(float *)(iVar7 + param_1 + 0x20) +
           *(float *)(param_2 + 0xc + iVar4) * *(float *)(iVar7 + param_1 + 0x30);
    } while (uVar8 < 4);
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

