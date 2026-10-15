/*
 * FUN_100be998 at 100be998
 * undefined FUN_100be998(void)
 * Address ranges: 100be998-100bea83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100be998(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(*(int *)(param_1 + 0x6c) + 0xb0c) >> 2 & 1) == 0) &&
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
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    FUN_1000c2e0(*(int *)(param_1 + 0x6c),param_1);
  }
  FUN_10018128(param_1);
  FUN_100be690(param_1);
  FUN_100fec90(param_1,0x7c);
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return;
}

