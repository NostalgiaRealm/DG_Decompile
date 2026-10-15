/*
 * FUN_1005591c at 1005591c
 * undefined4 __stdcall FUN_1005591c(int param_1)
 * Address ranges: 1005591c-10055940
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005591c(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = FUN_100a15c6(*(uint *)(param_1 + 0x18));
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 == 0x51) || (*(char *)(param_1 + 0x65) == '\0')) {
    iVar1 = (uint)uVar2 << 8;
  }
  else {
    iVar1 = CONCAT31(uVar2,1);
  }
  return iVar1;
}

