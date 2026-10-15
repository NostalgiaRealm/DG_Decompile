/*
 * FUN_100bc0e0 at 100bc0e0
 * undefined FUN_100bc0e0(void)
 * Address ranges: 100bc0e0-100bc1d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc0e0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar2 == 0) {
        FUN_10006560(0);
      }
    }
    if (*(int *)(param_1 + -0x58b8) == 0) {
      *param_2 = 0;
      uVar3 = 0x88760866;
    }
    else {
      FUN_100be7a0(*(int *)(param_1 + -0x58b8) + 0x5c,&DAT_10129140,param_2);
      uVar3 = 0;
    }
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar3;
}

