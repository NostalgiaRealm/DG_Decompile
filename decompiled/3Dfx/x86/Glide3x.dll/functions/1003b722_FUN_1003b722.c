/*
 * FUN_1003b722 at 1003b722
 * bool __thiscall FUN_1003b722(void * this, uint param_1)
 * Address ranges: 1003b722-1003b732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1003b722(void *this,uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + 0x20);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  return (bVar2 >> (param_1 & 7) & 1) != 0;
}

