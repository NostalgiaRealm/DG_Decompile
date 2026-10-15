/*
 * FUN_100220b0 at 100220b0
 * undefined FUN_100220b0(void)
 * Address ranges: 100220b0-1002217b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100220b0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x315c);
  FUN_1002b3d8(iVar1);
  iVar2 = *(int *)(iVar1 + 8);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x295c) + 0x4a0;
  uVar5 = (*(code *)PTR_FUN_1009d03c)(iVar1);
  cVar4 = FUN_10069eb0(uVar5,iVar2);
  if ((*(char *)(iVar2 + 0xd5e) != '\0') || (bVar3 = false, *(char *)(iVar2 + 0xd5d) != cVar4)) {
    bVar3 = true;
  }
  (*(code *)PTR_FUN_1009d090)(iVar1);
  if (bVar3) {
    FUN_10055558(*(int *)(param_1 + 0x3188) + 0x11c0);
    FUN_1002e1d8(param_1,1);
  }
  return;
}

