/*
 * FUN_1002cd90 at 1002cd90
 * undefined __thiscall FUN_1002cd90(void * this, int param_1, byte param_2)
 * Address ranges: 1002cd90-1002ce05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cd90(void *this,int param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*(int *)this + 0x98))(0);
  *(uint *)(param_1 * 0x70 + 0x1054 + (int)this) = (uint)param_2;
  *(undefined1 *)((int)this + 0x1d41) = 1;
  bVar1 = *(byte *)((int)this + param_1 + 0x4a0);
  uVar4 = ((int)(char)bVar1 >> 0x1f & 8U) + param_1;
  uVar3 = bVar1 & 3 | 0x104;
  if (param_2 != 0) {
    pbVar2 = (byte *)((int)this + ((int)uVar4 >> 3) + uVar3 * 4 + 0x80);
    *pbVar2 = *pbVar2 | '\x01' << (uVar4 & 7);
    *(undefined1 *)((int)this + 0x1d4a) = 1;
    return;
  }
  pbVar2 = (byte *)((int)this + ((int)uVar4 >> 3) + uVar3 * 4 + 0x80);
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
  *(undefined1 *)((int)this + 0x1d4a) = 1;
  return;
}

