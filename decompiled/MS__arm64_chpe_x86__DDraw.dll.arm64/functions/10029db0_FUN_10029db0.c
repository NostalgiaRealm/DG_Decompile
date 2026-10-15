/*
 * FUN_10029db0 at 10029db0
 * undefined FUN_10029db0(void)
 * Address ranges: 10029db0-10029e67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029db0(int param_1)

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
  uVar7 = (*(code *)PTR_FUN_100ba0a0)(iVar2 + 0x4a0);
  cVar6 = FUN_1006dec0(uVar7,iVar3);
  if ((*(char *)(iVar3 + 0xd5e) != '\0') || (bVar5 = false, *(char *)(iVar3 + 0xd5d) != cVar6)) {
    bVar5 = true;
  }
  (*(code *)PTR_FUN_100ba0f0)(iVar2 + 0x4a0);
  if (bVar5) {
    FUN_10090418(*piVar4 + *(int *)(*piVar1 + 8) * 0x16c0 + 0x1880);
    FUN_10070088(*piVar4,*piVar1,1);
  }
  return;
}

