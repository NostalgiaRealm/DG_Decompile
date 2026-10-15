/*
 * FUN_100b3660 at 100b3660
 * undefined FUN_100b3660(void)
 * Address ranges: 100b3660-100b3743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b3660(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar3 == 0) {
      FUN_10006560(0);
    }
  }
  uVar4 = 0x8876086c;
  if ((*(char *)(param_1 + -0x56c0) == '\0') &&
     (cVar2 = FUN_10007ea0(param_1 + -0x58e0,param_2), cVar2 != '\0')) {
    uVar4 = 0;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar4;
}

