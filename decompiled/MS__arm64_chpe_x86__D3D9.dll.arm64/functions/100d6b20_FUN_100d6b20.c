/*
 * FUN_100d6b20 at 100d6b20
 * undefined FUN_100d6b20(void)
 * Address ranges: 100d6b20-100d6beb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d6b20(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar2 == 0) {
      FUN_100071d0(0);
    }
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_2 + -0x5c;
  }
  uVar3 = FUN_100d45c8(param_1 + -0x66b4,iVar2);
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

