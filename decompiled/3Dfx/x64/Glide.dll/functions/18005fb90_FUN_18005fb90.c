/*
 * FUN_18005fb90 at 18005fb90
 * int __fastcall FUN_18005fb90(int param_1)
 * Address ranges: 18005fb90-18005fb9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005fb90(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if (0x19 < (ushort)((short)param_1 - 0x61U)) {
    iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),(short)param_1);
  }
  return iVar1;
}

