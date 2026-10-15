/*
 * FUN_1800fccb0 at 1800fccb0
 * int __fastcall FUN_1800fccb0(int param_1)
 * Address ranges: 1800fccb0-1800fccbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800fccb0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if (0x19 < (ushort)((short)param_1 - 0x61U)) {
    iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),(short)param_1);
  }
  return iVar1;
}

