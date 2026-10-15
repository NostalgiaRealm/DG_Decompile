/*
 * FUN_100e3a60 at 100e3a60
 * undefined FUN_100e3a60(void)
 * Address ranges: 100e3a60-100e3b6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e3a60(int param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
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
  if (param_2 < *(uint *)(*(int *)(param_1 + 0x50) + 0xf0)) {
    iVar2 = *(int *)(param_1 + param_2 * 4 + -0x669c);
    if (iVar2 == 0) {
      *param_3 = 0;
      uVar3 = 0x88760866;
    }
    else {
      uVar3 = FUN_100e8700(iVar2 + 0x5c,&DAT_1015e4b0,param_3);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

