/*
 * FUN_1001a63e at 1001a63e
 * undefined __thiscall FUN_1001a63e(void * this, int param_1)
 * Address ranges: 1001a63e-1001a68a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a63e(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = param_1 - 10;
  iVar2 = (int)(uVar1 & 0x1f) >> 3;
  if ((*(byte *)((int)this + iVar2 + (uVar1 >> 5) * 4 + 0xca4) >> (uVar1 & 7) & 1) == 0) {
    FUN_10028b85((float *)(param_1 * 0x40 + *(int *)((int)this + 0xd80)),
                 (undefined4 *)((param_1 + 0x10a) * 0x40 + *(int *)((int)this + 0xd80)),'\x01');
    pbVar3 = (byte *)((int)this + iVar2 + (uVar1 >> 5) * 4 + 0xca4);
    *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
  }
  return;
}

