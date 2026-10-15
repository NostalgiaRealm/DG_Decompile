/*
 * FUN_1007f728 at 1007f728
 * undefined FUN_1007f728(void)
 * Address ranges: 1007f728-1007f857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f728(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = (uint *)(param_2 + 0x20);
  uVar6 = 0;
  iVar5 = param_1 + *(int *)(param_2 + 8) * 0x16c0;
  if (*puVar1 != 0) {
    do {
      iVar3 = *(int *)(param_2 + 0xd7c + uVar6 * 4);
      if (iVar3 != 0) {
        FUN_10066590(param_1,iVar3);
        *(undefined4 *)(param_2 + uVar6 * 4 + 0xd7c) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  iVar3 = *(int *)(param_2 + 0xd84);
  if (iVar3 != -1) {
    iVar4 = *(int *)(iVar5 + 0x1c98);
    iVar2 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_100a803c)(iVar2);
    FUN_100675c8(iVar4,iVar3,2);
    (*(code *)PTR_FUN_100a8090)(iVar2);
  }
  iVar3 = *(int *)(param_2 + 0xd88);
  if (iVar3 != -1) {
    iVar2 = *(int *)(iVar5 + 0x1c9c);
    iVar5 = iVar2 + 0x1c;
    (*(code *)PTR_FUN_100a803c)(iVar5);
    FUN_100675c8(iVar2,iVar3,2);
    (*(code *)PTR_FUN_100a8090)(iVar5);
  }
  *puVar1 = 0;
  return;
}

