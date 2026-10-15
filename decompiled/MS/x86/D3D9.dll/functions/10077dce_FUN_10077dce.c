/*
 * FUN_10077dce at 10077dce
 * undefined __thiscall FUN_10077dce(void * this, int param_1, int param_2)
 * Address ranges: 10077dce-10077dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077dce(void *this,int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0xdb) = 0;
  uVar2 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  pbVar1 = (byte *)((int)this + ((int)(uVar2 & 0x1f) >> 3) + (uVar2 >> 5) * 4 + 0xcc);
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
  if (*(char *)((int)this + 0x3d) == '\x01') {
    *(undefined1 *)((int)this + 0x3d) = 2;
  }
  return;
}

