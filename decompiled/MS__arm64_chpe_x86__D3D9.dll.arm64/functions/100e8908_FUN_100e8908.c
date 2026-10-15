/*
 * FUN_100e8908 at 100e8908
 * undefined FUN_100e8908(void)
 * Address ranges: 100e8908-100e8a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e8908(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x80);
  if (((*(uint *)(*piVar1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar3 == 0) {
      FUN_100071d0(0);
    }
  }
  if ((*(int *)(param_1 + 0x8c) == 0) && (*(int *)(param_1 + 0x88) == 0)) {
    iVar3 = *piVar1;
    FUN_100d31f0(iVar3,param_1);
    FUN_1000d360(iVar3,param_1);
  }
  else {
    FUN_100d31f0(*piVar1,param_1);
  }
  FUN_1001d4a0(param_1);
  FUN_100e85d0(param_1);
  FUN_10132260(param_1,0x90);
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

