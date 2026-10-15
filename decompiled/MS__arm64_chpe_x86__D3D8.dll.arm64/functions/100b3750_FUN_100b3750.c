/*
 * FUN_100b3750 at 100b3750
 * undefined FUN_100b3750(void)
 * Address ranges: 100b3750-100b38c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b3750(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int local_40 [4];
  
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
  local_40[0] = 0;
  iVar2 = FUN_10007ba0(param_1 + -0x58e0,param_2,param_3,local_40,0x1012d0e0,0x1012d170,0x21,0x26,
                       &DAT_1012d208);
  if (-1 < iVar2) {
    if ((param_2 - 1U & 0xfffffffd) == 0) {
      *(undefined4 *)(local_40[0] + 0x49b0) = *(undefined4 *)(param_1 + 0x60);
    }
    if (param_2 - 1U < 2) {
      *(undefined4 *)(local_40[0] + 0x49ac) = *(undefined4 *)(param_1 + 100);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar2;
}

