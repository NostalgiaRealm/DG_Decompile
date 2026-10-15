/*
 * FUN_1007f1a1 at 1007f1a1
 * int __stdcall FUN_1007f1a1(int param_1)
 * Address ranges: 1007f1a1-1007f208
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007f1a1(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  
  iVar1 = *(int *)(param_1 + -0x4db4) * 0x228;
  if ((*(uint *)(&DAT_100ba918 + iVar1) & 0x80000) == 0) {
    local_c = 0;
  }
  else {
    local_c = 0x100000;
  }
  uVar2 = *(uint *)(&DAT_100ba918 + iVar1) & 0xfff00000;
  iVar3 = uVar2 + local_c;
  if (*(int *)(&DAT_100ba91c + iVar1) + (uint)CARRY4(uVar2,local_c) != 0) {
    iVar3 = -1;
  }
  return iVar3;
}

