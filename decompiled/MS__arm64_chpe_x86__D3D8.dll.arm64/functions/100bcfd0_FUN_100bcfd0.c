/*
 * FUN_100bcfd0 at 100bcfd0
 * undefined FUN_100bcfd0(void)
 * Address ranges: 100bcfd0-100bd0df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100bcfd0(int param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 < 0x10) {
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
    param_1 = param_1 + param_2 * 4;
    iVar2 = *(int *)(param_1 + -0x124);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x68;
      if (iVar2 != 0) {
        FUN_100c03c0(iVar2);
      }
    }
    *param_3 = iVar2;
    *param_4 = *(undefined4 *)(param_1 + -0xe4);
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
  }
  return 0;
}

