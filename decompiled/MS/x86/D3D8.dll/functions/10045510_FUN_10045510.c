/*
 * FUN_10045510 at 10045510
 * undefined __thiscall FUN_10045510(void * this, uint param_1, byte param_2)
 * Address ranges: 10045510-10045570
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045510(void *this,uint param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  (**(code **)(*(int *)this + 0xc0))(0);
  *(uint *)(param_1 * 0x70 + 0x5364 + (int)this) = (uint)param_2;
  *(undefined1 *)((int)this + 0xd981) = 1;
  uVar2 = (uint)*(byte *)((int)this + param_1 + 0x694);
  if (param_2 != 0) {
    pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + uVar2 * 4 + 0x684);
    *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
    *(undefined1 *)((int)this + 0xd9aa) = 1;
    return;
  }
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + uVar2 * 4 + 0x684);
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  *(undefined1 *)((int)this + 0xd9aa) = 1;
  return;
}

