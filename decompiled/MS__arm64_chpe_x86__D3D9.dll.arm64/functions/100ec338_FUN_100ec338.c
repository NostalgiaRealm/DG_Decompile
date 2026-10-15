/*
 * FUN_100ec338 at 100ec338
 * undefined FUN_100ec338(void)
 * Address ranges: 100ec338-100ec417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ec338(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(*(int *)(param_1 + 0x5c) + 0xdd0) >> 2 & 1) == 0) &&
     (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar2 == 0) {
      FUN_100071d0(0);
    }
  }
  FUN_1003f210(param_1,0,0);
  FUN_101322d0(*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_100ec300(param_1);
  FUN_10132260(param_1,0xa0);
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

