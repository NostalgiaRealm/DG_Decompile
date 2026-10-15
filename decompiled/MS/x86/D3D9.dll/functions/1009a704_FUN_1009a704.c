/*
 * FUN_1009a704 at 1009a704
 * int __stdcall FUN_1009a704(int param_1)
 * Address ranges: 1009a704-1009a76b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009a704(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  
  iVar1 = *(int *)(param_1 + -0x58c4) * 0x228;
  if ((*(uint *)(&DAT_100df4e0 + iVar1) & 0x80000) == 0) {
    local_c = 0;
  }
  else {
    local_c = 0x100000;
  }
  uVar2 = *(uint *)(&DAT_100df4e0 + iVar1) & 0xfff00000;
  iVar3 = uVar2 + local_c;
  if (*(int *)(&DAT_100df4e4 + iVar1) + (uint)CARRY4(uVar2,local_c) != 0) {
    iVar3 = -1;
  }
  return iVar3;
}

