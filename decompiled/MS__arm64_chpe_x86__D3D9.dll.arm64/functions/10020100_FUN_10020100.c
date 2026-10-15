/*
 * FUN_10020100 at 10020100
 * undefined FUN_10020100(void)
 * Address ranges: 10020100-100201e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10020100(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != 0) {
    if (((*(uint *)(*(int *)(param_1 + 0x2c) + 0xdd0) >> 2 & 1) == 0) &&
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
    FUN_10004f50(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xd90),*(undefined4 *)(param_1 + 0xa4),
                 param_2);
    uVar3 = 0;
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar3;
}

