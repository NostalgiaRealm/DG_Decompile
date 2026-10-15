/*
 * FUN_100f4e68 at 100f4e68
 * undefined FUN_100f4e68(void)
 * Address ranges: 100f4e68-100f4f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f4e68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_2 + 0xd8c + uVar4 * 4);
    if (iVar2 != 0) {
      FUN_100f86c8(param_1 + iVar1 * 0x16c0 + 0x1c40,iVar2);
      *(undefined4 *)(param_2 + uVar4 * 4 + 0xd8c) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  iVar1 = *(int *)(param_2 + 0xd94);
  if (iVar1 != -1) {
    iVar3 = *(int *)(param_1 + *(int *)(param_2 + 8) * 0x16c0 + 0x1c98);
    iVar2 = iVar3 + 0x1c;
    (*(code *)PTR_FUN_10134070)(iVar2);
    FUN_100df258(iVar3,iVar1,2);
    (*(code *)PTR_FUN_101340bc)(iVar2);
    *(int *)(param_2 + 0xd94) = -1;
  }
  return;
}

