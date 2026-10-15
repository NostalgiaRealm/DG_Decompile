/*
 * FUN_100165fe at 100165fe
 * undefined __thiscall FUN_100165fe(void * this, int param_1)
 * Address ranges: 100165fe-1001664a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100165fe(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = param_1 - 10;
  iVar2 = (int)(uVar1 & 0x1f) >> 3;
  if ((*(byte *)((int)this + iVar2 + (uVar1 >> 5) * 4 + 0x9e0) >> (uVar1 & 7) & 1) == 0) {
    FUN_100214ed((float *)(param_1 * 0x40 + *(int *)((int)this + 0xabc)),
                 (undefined4 *)((param_1 + 0x10a) * 0x40 + *(int *)((int)this + 0xabc)),'\x01');
    pbVar3 = (byte *)((int)this + iVar2 + (uVar1 >> 5) * 4 + 0x9e0);
    *pbVar3 = *pbVar3 | '\x01' << (uVar1 & 7);
  }
  return;
}

