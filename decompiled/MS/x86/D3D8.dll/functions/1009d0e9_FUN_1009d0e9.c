/*
 * FUN_1009d0e9 at 1009d0e9
 * bool __thiscall FUN_1009d0e9(void * this, uint param_1)
 * Address ranges: 1009d0e9-1009d0f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1009d0e9(void *this,uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + 0x20);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  return (bVar2 >> (param_1 & 7) & 1) != 0;
}

