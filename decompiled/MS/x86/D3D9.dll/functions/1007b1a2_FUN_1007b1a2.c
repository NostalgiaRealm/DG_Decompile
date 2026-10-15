/*
 * FUN_1007b1a2 at 1007b1a2
 * undefined __thiscall FUN_1007b1a2(void * this, uint param_1, RECT * param_2)
 * Address ranges: 1007b1a2-1007b219
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007b1a2(void *this,uint param_1,RECT *param_2)

{
  int iVar1;
  byte *pbVar2;
  LPRECT ptVar3;
  uint uVar4;
  
  ptVar3 = (LPRECT)(*(int *)((int)this + 0x100) + 0xc + param_1 * 0x1c);
  UnionRect(ptVar3,ptVar3,param_2);
  ptVar3 = (LPRECT)(*(int *)((int)this + 0x120) + param_1 * 0x1c + 0xc);
  UnionRect(ptVar3,ptVar3,param_2);
  uVar4 = param_1 >> 5;
  iVar1 = (int)(param_1 & 0x1f) >> 3;
  pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x154);
  *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x178);
  *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x160);
  *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  *(undefined1 *)((int)this + 0xdb) = 0;
  pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0xcc);
  *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  return;
}

