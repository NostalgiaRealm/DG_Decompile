/*
 * FUN_1001be69 at 1001be69
 * uint __fastcall FUN_1001be69(int param_1, int param_2)
 * Address ranges: 1001be69-1001be8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001be69(int param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x75 + param_2);
  *pbVar1 = *pbVar1 | (&DAT_100627b8)[param_2 * 8];
  return (uint)(byte)(&DAT_100627bb)[param_2 * 8] << 0x14 | (uint)(byte)(&DAT_100627ba)[param_2 * 8]
         | 0x10200;
}

