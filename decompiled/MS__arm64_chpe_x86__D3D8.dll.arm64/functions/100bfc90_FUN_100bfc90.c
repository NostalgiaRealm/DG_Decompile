/*
 * FUN_100bfc90 at 100bfc90
 * undefined FUN_100bfc90(void)
 * Address ranges: 100bfc90-100bfd9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bfc90(int param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(int *)(param_1 + 0xec) + 0xb0c) >> 2 & 1) == 0) &&
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
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0x90) && param_4 != 0) && param_3 == 0) {
    uVar3 = FUN_100be7a0(*(int *)(param_1 + param_2 * 4 + 0x3c) + 0x5c,&DAT_10129140,param_4);
  }
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar3;
}

