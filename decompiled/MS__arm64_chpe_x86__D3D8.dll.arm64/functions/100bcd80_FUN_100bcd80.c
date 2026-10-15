/*
 * FUN_100bcd80 at 100bcd80
 * undefined FUN_100bcd80(void)
 * Address ranges: 100bcd80-100bcea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bcd80(int param_1,uint param_2,uint param_3,undefined4 *param_4)

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
  uVar3 = 0x8876086c;
  if (((param_2 < 8 && param_3 != 0) && param_3 < 0x1d) && param_4 != (undefined4 *)0x0) {
    if (*(char *)(*(int *)(param_1 + -0x58d8) + param_3 * 0xc) == '\0') {
      *param_4 = 0;
    }
    else {
      uVar3 = 0;
      *param_4 = *(undefined4 *)(param_2 * 0x74 + param_3 * 4 + param_1 + -0x539c);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar3;
}

