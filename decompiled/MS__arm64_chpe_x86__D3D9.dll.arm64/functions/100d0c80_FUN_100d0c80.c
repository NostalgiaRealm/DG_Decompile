/*
 * FUN_100d0c80 at 100d0c80
 * undefined FUN_100d0c80(void)
 * Address ranges: 100d0c80-100d0d17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d0c80(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  uVar2 = FUN_100d1560(param_1 + 4,local_20);
  if ((uVar2 & 1) != 0) {
    iVar1 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar1 == 0) {
      FUN_100071d0(0);
    }
    param_1 = param_1 + -0x70;
    FUN_10001910(param_1);
    FUN_100d0340(param_1);
    FUN_100060e0(param_1);
    if (param_1 != 0) {
      FUN_100d0040(param_1);
      FUN_10132260(param_1,0xc0);
    }
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  return local_20[0];
}

