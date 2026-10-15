/*
 * FUN_100ece70 at 100ece70
 * undefined FUN_100ece70(void)
 * Address ranges: 100ece70-100ecf63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ece70(int param_1)

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
  FUN_1000d260(iVar4,param_1);
  FUN_100ecf68(param_1);
  FUN_100ecab0(param_1);
  FUN_10132260(param_1,0xe0);
  if (bVar3) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

