/*
 * FUN_100a3f60 at 100a3f60
 * undefined FUN_100a3f60(void)
 * Address ranges: 100a3f60-100a4017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a3f60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  
  piVar4 = (int *)(param_1 + -0x80);
  iVar2 = *piVar4;
  piVar1 = (int *)(param_1 + 0x24);
  iVar3 = *piVar1;
  uVar7 = (*(code *)PTR_FUN_10134070)(iVar2 + 0x4a0);
  cVar6 = FUN_100dc570(uVar7,iVar3);
  if ((*(char *)(iVar3 + 0xd5e) != '\0') || (bVar5 = false, *(char *)(iVar3 + 0xd5d) != cVar6)) {
    bVar5 = true;
  }
  (*(code *)PTR_FUN_101340bc)(iVar2 + 0x4a0);
  if (bVar5) {
    FUN_100fd9e8(*piVar4 + *(int *)(*piVar1 + 8) * 0x16c0 + 0x1880);
    FUN_100de738(*piVar4,*piVar1,1);
  }
  return;
}

