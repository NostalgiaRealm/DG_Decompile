/*
 * FUN_100b2ca0 at 100b2ca0
 * undefined FUN_100b2ca0(void)
 * Address ranges: 100b2ca0-100b2d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b2ca0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
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
  uVar3 = FUN_1000db40(param_1 + -0x58e0,param_2);
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar3;
}

