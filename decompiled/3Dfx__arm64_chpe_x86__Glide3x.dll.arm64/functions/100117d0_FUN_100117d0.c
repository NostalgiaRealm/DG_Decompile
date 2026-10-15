/*
 * FUN_100117d0 at 100117d0
 * undefined FUN_100117d0(void)
 * Address ranges: 100117d0-1001189b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100117d0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x32dc);
  FUN_1001bac0(iVar1);
  iVar2 = *(int *)(iVar1 + 8);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x29d8) + 0x4a0;
  uVar5 = (*(code *)PTR_FUN_100a003c)(iVar1);
  cVar4 = FUN_1006db50(uVar5,iVar2);
  if ((*(char *)(iVar2 + 0xd5e) != '\0') || (bVar3 = false, *(char *)(iVar2 + 0xd5d) != cVar4)) {
    bVar3 = true;
  }
  (*(code *)PTR_FUN_100a0090)(iVar1);
  if (bVar3) {
    FUN_100462b8(*(int *)(param_1 + 0x3308) + 0x11c0);
    FUN_10017228(param_1,1);
  }
  return;
}

