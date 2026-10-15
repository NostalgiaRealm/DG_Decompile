/*
 * FUN_100ba430 at 100ba430
 * undefined FUN_100ba430(void)
 * Address ranges: 100ba430-100ba547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100ba430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
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
    uVar3 = FUN_100b8a20(param_1 + -0x58e0,param_2,param_3,param_4,0,2,0,1,param_5);
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar3;
}

