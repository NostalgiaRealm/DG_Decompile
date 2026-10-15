/*
 * FUN_10008b06 at 10008b06
 * undefined __thiscall FUN_10008b06(void * this, int param_1)
 * Address ranges: 10008b06-10008b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008b06(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = param_1 - 10;
  iVar2 = (int)(uVar1 & 0x1f) >> 3;
  if ((*(byte *)((int)this + iVar2 + (uVar1 >> 5) * 4 + 0x910) >> (uVar1 & 7) & 1) == 0) {
    FUN_10013929((float *)(param_1 * 0x40 + *(int *)((int)this + 0x9cc)),
                 (undefined4 *)((param_1 + 0xe) * 0x40 + *(int *)((int)this + 0x9cc)),'\x01');
    pbVar3 = (byte *)((int)this + iVar2 + (uVar1 >> 5) * 4 + 0x910);
    *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
  }
  return;
}

