/*
 * FUN_10076868 at 10076868
 * undefined FUN_10076868(void)
 * Address ranges: 10076868-10076997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10076868(int param_1,int param_2)

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
        FUN_1005d6e0(param_1,iVar3);
        *(undefined4 *)(param_2 + uVar6 * 4 + 0xd7c) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar1);
  }
  iVar3 = *(int *)(param_2 + 0xd84);
  if (iVar3 != -1) {
    iVar4 = *(int *)(iVar5 + 0x1c98);
    iVar2 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_1009d03c)(iVar2);
    FUN_1005e718(iVar4,iVar3,2);
    (*(code *)PTR_FUN_1009d090)(iVar2);
  }
  iVar3 = *(int *)(param_2 + 0xd88);
  if (iVar3 != -1) {
    iVar2 = *(int *)(iVar5 + 0x1c9c);
    iVar5 = iVar2 + 0x1c;
    (*(code *)PTR_FUN_1009d03c)(iVar5);
    FUN_1005e718(iVar2,iVar3,2);
    (*(code *)PTR_FUN_1009d090)(iVar5);
  }
  *puVar1 = 0;
  return;
}

