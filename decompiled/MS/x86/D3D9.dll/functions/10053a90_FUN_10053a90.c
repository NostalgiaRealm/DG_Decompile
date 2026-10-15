/*
 * FUN_10053a90 at 10053a90
 * undefined __thiscall FUN_10053a90(void * this, uint param_1, byte param_2)
 * Address ranges: 10053a90-10053af0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053a90(void *this,uint param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  (**(code **)(*(int *)this + 0xec))(0);
  *(uint *)(param_1 * 0x70 + 0x6ff4 + (int)this) = (uint)param_2;
  *(undefined1 *)((int)this + 0xf671) = 1;
  uVar2 = (uint)*(byte *)((int)this + param_1 + 0xfb8);
  if (param_2 != 0) {
    pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + uVar2 * 4 + 0xfa8);
    *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
    *(undefined1 *)((int)this + 0xf6a5) = 1;
    return;
  }
  pbVar1 = (byte *)((int)this + ((int)param_1 >> 3) + uVar2 * 4 + 0xfa8);
  *pbVar1 = *pbVar1 & ~('\x01' << (param_1 & 7));
  *(undefined1 *)((int)this + 0xf6a5) = 1;
  return;
}

