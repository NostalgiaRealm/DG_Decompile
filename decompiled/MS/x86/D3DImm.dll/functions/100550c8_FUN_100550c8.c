/*
 * FUN_100550c8 at 100550c8
 * bool __thiscall FUN_100550c8(void * this, uint param_1)
 * Address ranges: 100550c8-100550d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100550c8(void *this,uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + 0x20);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  return (bVar2 >> (param_1 & 7) & 1) != 0;
}

