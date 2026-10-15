/*
 * FUN_100195a0 at 100195a0
 * undefined FUN_100195a0(void)
 * Address ranges: 100195a0-1001967b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100195a0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((*(uint *)(*(int *)(param_1 + 4) + 0xb8) >> 0xb & 1) != 0) {
    if (((*(uint *)(*(int *)(param_1 + 0x18) + 0xb0c) >> 2 & 1) == 0) &&
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
    uVar3 = FUN_10019130(param_1,0);
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar3;
}

