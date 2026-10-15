/*
 * FUN_180054790 at 180054790
 * undefined __fastcall FUN_180054790(longlong param_1, uint param_2)
 * Address ranges: 180054790-1800547bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054790(longlong param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((ulonglong)(byte)param_2 + *(longlong *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(param_2 >> 0x14) & 7)) + -1 <<
                         ((byte)(param_2 >> 0x12) & 3));
  }
  return;
}

