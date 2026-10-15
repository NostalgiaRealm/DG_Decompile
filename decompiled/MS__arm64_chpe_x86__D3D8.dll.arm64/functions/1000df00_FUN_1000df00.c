/*
 * FUN_1000df00 at 1000df00
 * undefined FUN_1000df00(void)
 * Address ranges: 1000df00-1000dfdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000df00(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 < 6 && param_3 != 0) {
    if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
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
    FUN_10023710(param_1,param_2,param_3);
    uVar3 = 0;
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar3;
}

