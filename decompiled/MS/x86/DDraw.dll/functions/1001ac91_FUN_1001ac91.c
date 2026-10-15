/*
 * FUN_1001ac91 at 1001ac91
 * undefined __thiscall FUN_1001ac91(void * this, uint param_1, RECT * param_2)
 * Address ranges: 1001ac91-1001acdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ac91(void *this,uint param_1,RECT *param_2)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  LPRECT lprcDst;
  void *this_00;
  
  cVar3 = FUN_100188b4((int)this);
  if (cVar3 == '\0') {
    FUN_10015d56(this_00,param_1,param_2);
  }
  else {
    lprcDst = (LPRECT)((param_1 << 5 | 0x10) + *(int *)((int)this + 0x5c));
    UnionRect(lprcDst,lprcDst,param_2);
    iVar1 = (int)(param_1 & 0x1f) >> 3;
    pbVar2 = (byte *)((int)this + iVar1 + (param_1 >> 5) * 4 + 0x1c0);
    *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
    pbVar2 = (byte *)((int)this + iVar1 + (param_1 >> 5) * 4 + 0x1e4);
    *pbVar2 = *pbVar2 & ~('\x01' << (param_1 & 7));
  }
  return;
}

