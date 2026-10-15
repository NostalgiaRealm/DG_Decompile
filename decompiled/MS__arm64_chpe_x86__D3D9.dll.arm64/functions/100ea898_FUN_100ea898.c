/*
 * FUN_100ea898 at 100ea898
 * undefined FUN_100ea898(void)
 * Address ranges: 100ea898-100ea993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ea898(int param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  puVar1 = (uint *)&DAT_00000dd0;
  if (iVar4 != 0) {
    puVar1 = (uint *)(iVar4 + -0x58e4);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar4 == 0) {
      FUN_100071d0(0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar2 + -0x66b4;
  }
  FUN_1000d0a0(iVar4,param_1);
  FUN_100216d0(param_1);
  FUN_10020c10(param_1);
  FUN_100ea820(param_1);
  FUN_10132260(param_1,0xe0);
  if (bVar3) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

