/*
 * FUN_18005f6f0 at 18005f6f0
 * int __fastcall FUN_18005f6f0(int param_1)
 * Address ranges: 18005f6f0-18005f6fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18005f6f0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if (0x19 < (ushort)((short)param_1 - 0x61U)) {
    iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),(short)param_1);
  }
  return iVar1;
}

