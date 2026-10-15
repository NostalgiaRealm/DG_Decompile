/*
 * FUN_1000e815 at 1000e815
 * undefined __thiscall FUN_1000e815(void * this, uint param_1, RECT * param_2)
 * Address ranges: 1000e815-1000e877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e815(void *this,uint param_1,RECT *param_2)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  LPRECT lprcDst;
  void *this_00;
  uint uVar4;
  
  cVar3 = FUN_1000ce28((int)this);
  if (cVar3 == '\0') {
    FUN_1000b495(this_00,param_1,param_2);
  }
  else {
    lprcDst = (LPRECT)(*(int *)((int)this + 0x60) + param_1 * 0x1c + 0xc);
    UnionRect(lprcDst,lprcDst,param_2);
    uVar4 = param_1 >> 5;
    iVar1 = (int)(param_1 & 0x1f) >> 3;
    pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x154);
    *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
    pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0x178);
    *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
    *(undefined1 *)((int)this + 0xdb) = 0;
    pbVar2 = (byte *)((int)this + iVar1 + uVar4 * 4 + 0xcc);
    *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  }
  return;
}

