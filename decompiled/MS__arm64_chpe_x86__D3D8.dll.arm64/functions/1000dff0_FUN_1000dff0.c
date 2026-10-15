/*
 * FUN_1000dff0 at 1000dff0
 * undefined FUN_1000dff0(void)
 * Address ranges: 1000dff0-1000e0fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000dff0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_2 < 8 && param_3 != 0) && param_3 < 0x1d) {
    if (*(char *)(*(int *)(param_1 + 8) + param_3 * 0xc) == '\0') {
      uVar3 = 0x8876086c;
    }
    else {
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
      FUN_1001ff10(param_1,param_2,param_3,param_4);
      if (bVar1) {
        (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
      }
      else {
        *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
      }
    }
  }
  return uVar3;
}

