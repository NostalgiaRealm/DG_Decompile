/*
 * FUN_100c09d8 at 100c09d8
 * undefined FUN_100c09d8(void)
 * Address ranges: 100c09d8-100c0ab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c09d8(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(*(int *)(param_1 + 0x5c) + 0xb0c) >> 2 & 1) == 0) &&
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
  FUN_100353d0(param_1,0,0);
  FUN_100fed00(*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_100c09a0(param_1);
  FUN_100fec90(param_1,0xa4);
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return;
}

