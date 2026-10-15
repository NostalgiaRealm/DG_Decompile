/*
 * FUN_10005029 at 10005029
 * uint __fastcall FUN_10005029(int param_1)
 * Address ranges: 10005029-10005046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10005029(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 8);
  uVar2 = (uint)*(byte *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = ((uVar1 - 1) + uVar2 & -uVar2) / uVar2;
  }
  return uVar1;
}

