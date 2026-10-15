/*
 * FUN_100c2ed2 at 100c2ed2
 * undefined __fastcall FUN_100c2ed2(int param_1, uint param_2)
 * Address ranges: 100c2ed2-100c2efd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c2ed2(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(param_2 >> 0x14) & 7)) + -1 <<
                         ((byte)(param_2 >> 0x12) & 3));
  }
  return;
}

