/*
 * FUN_100b4650 at 100b4650
 * undefined FUN_100b4650(void)
 * Address ranges: 100b4650-100b4733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b4650(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
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
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_2 + -0x4c;
  }
  iVar2 = FUN_100090b0(param_1 + -0x58e0,iVar2);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x68) = param_3;
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar2;
}

