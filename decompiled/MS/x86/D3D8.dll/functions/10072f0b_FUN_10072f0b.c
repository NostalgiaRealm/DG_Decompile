/*
 * FUN_10072f0b at 10072f0b
 * uint __fastcall FUN_10072f0b(int param_1, int param_2)
 * Address ranges: 10072f0b-10072f30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10072f0b(int param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 0x75 + param_2);
  *pbVar1 = *pbVar1 | (&DAT_100b0488)[param_2 * 8];
  return (uint)(byte)(&DAT_100b048b)[param_2 * 8] << 0x14 | (uint)(byte)(&DAT_100b048a)[param_2 * 8]
         | 0x10200;
}

