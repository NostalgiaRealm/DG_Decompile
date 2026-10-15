/*
 * FUN_100e8c40 at 100e8c40
 * undefined FUN_100e8c40(void)
 * Address ranges: 100e8c40-100e8d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e8c40(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(int *)(param_1 + -0x44) + 0xdd0) >> 2 & 1) == 0) &&
     (*(int *)(DAT_10175b54 + 0x20) == 0)) {
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
  uVar3 = FUN_1001c8f0(param_1 + -0x50,param_2);
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

