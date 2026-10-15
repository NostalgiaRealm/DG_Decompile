/*
 * FUN_100890c8 at 100890c8
 * uint __fastcall FUN_100890c8(int param_1, int param_2)
 * Address ranges: 100890c8-100890ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100890c8(int param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x75 + param_2);
  *pbVar1 = *pbVar1 | (&DAT_100d2608)[param_2 * 8];
  return (uint)(byte)(&DAT_100d260b)[param_2 * 8] << 0x14 | (uint)(byte)(&DAT_100d260a)[param_2 * 8]
         | 0x10200;
}

