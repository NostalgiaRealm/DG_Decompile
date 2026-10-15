/*
 * FUN_100bebd0 at 100bebd0
 * undefined FUN_100bebd0(void)
 * Address ranges: 100bebd0-100becab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bebd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(int *)(param_1 + -0x44) + 0xb0c) >> 2 & 1) == 0) &&
     (*(int *)(DAT_1013d014 + 0x20) == 0)) {
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
  uVar3 = FUN_100174c8(param_1 + -0x50,param_2,param_3,param_4);
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar3;
}

