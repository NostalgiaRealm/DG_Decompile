/*
 * FUN_100e4aa0 at 100e4aa0
 * undefined FUN_100e4aa0(void)
 * Address ranges: 100e4aa0-100e4bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100e4aa0(int param_1,uint param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 < 0x10) {
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
    param_1 = param_1 + param_2 * 4;
    if (*(int *)(param_1 + -0x124) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + -0x124) + 0x68;
      if (iVar2 != 0) {
        FUN_100eaf50(iVar2);
      }
    }
    *param_3 = iVar2;
    *param_5 = *(undefined4 *)(param_1 + -0xe4);
    *param_4 = *(undefined4 *)(param_1 + -0xa4);
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  else {
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  return 0;
}

