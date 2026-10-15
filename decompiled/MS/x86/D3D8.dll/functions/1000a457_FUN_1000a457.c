/*
 * FUN_1000a457 at 1000a457
 * bool __fastcall FUN_1000a457(int param_1, uint param_2)
 * Address ranges: 1000a457-1000a465
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1000a457(int param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  if (-1 < (int)param_2) {
    pbVar1 = (byte *)(param_1 + 0x14 + ((int)param_2 >> 3));
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
    return (bVar2 >> (param_2 & 7) & 1) != 0;
  }
  return false;
}

