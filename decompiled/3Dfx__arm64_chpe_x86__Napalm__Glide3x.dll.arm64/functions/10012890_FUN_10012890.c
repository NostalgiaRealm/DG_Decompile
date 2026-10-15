/*
 * FUN_10012890 at 10012890
 * undefined FUN_10012890(void)
 * Address ranges: 10012890-1001295b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012890(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x365c);
  FUN_1001c088(iVar1);
  iVar2 = *(int *)(iVar1 + 8);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x2b14) + 0x4a0;
  uVar5 = (*(code *)PTR_FUN_100a803c)(iVar1);
  cVar4 = FUN_100731f0(uVar5,iVar2);
  if ((*(char *)(iVar2 + 0xd5e) != '\0') || (bVar3 = false, *(char *)(iVar2 + 0xd5d) != cVar4)) {
    bVar3 = true;
  }
  (*(code *)PTR_FUN_100a8090)(iVar1);
  if (bVar3) {
    FUN_1004b978(*(int *)(param_1 + 0x3688) + 0x11c0);
    FUN_100176d0(param_1,1);
  }
  return;
}

