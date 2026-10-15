/*
 * FUN_1001a87e at 1001a87e
 * undefined __thiscall FUN_1001a87e(void * this, uint param_1, RECT * param_2)
 * Address ranges: 1001a87e-1001a8e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a87e(void *this,uint param_1,RECT *param_2)

{
  int iVar1;
  byte *pbVar2;
  LPRECT ptVar3;
  uint uVar4;
  
  ptVar3 = (LPRECT)((param_1 << 5 | 0x10) + *(int *)((int)this + 0x150));
  UnionRect(ptVar3,ptVar3,param_2);
  ptVar3 = (LPRECT)((param_1 << 5 | 0x10) + *(int *)((int)this + 0x18c));
  UnionRect(ptVar3,ptVar3,param_2);
  uVar4 = param_1 >> 5;
  iVar1 = (int)(param_1 & 0x1f) >> 3;
  pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x1c0);
  *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x1e4);
  *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x1cc);
  *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  return;
}

