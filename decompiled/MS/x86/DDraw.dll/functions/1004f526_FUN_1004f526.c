/*
 * FUN_1004f526 at 1004f526
 * bool __thiscall FUN_1004f526(void * this, uint param_1)
 * Address ranges: 1004f526-1004f536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1004f526(void *this,uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + 0x20);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  return (bVar2 >> (param_1 & 7) & 1) != 0;
}

