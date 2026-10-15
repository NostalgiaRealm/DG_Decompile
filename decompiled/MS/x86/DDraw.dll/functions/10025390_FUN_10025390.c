/*
 * FUN_10025390 at 10025390
 * undefined4 __fastcall FUN_10025390(int param_1)
 * Address ranges: 10025390-100253c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10025390(int param_1)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x11c) * 0x228;
  if (((&DAT_1006c49a)[iVar1] != '\0') &&
     ((in_EAX = *(uint *)(&DAT_1006c448 + iVar1), in_EAX != *(uint *)(&DAT_1006c42c + iVar1) ||
      (in_EAX = *(uint *)(&DAT_1006c44c + iVar1), in_EAX != *(uint *)(&DAT_1006c430 + iVar1))))) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

