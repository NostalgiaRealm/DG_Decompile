/*
 * FUN_1001a76c at 1001a76c
 * undefined __thiscall FUN_1001a76c(void * this, int param_1, int param_2)
 * Address ranges: 1001a76c-1001a87d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a76c(void *this,int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  BOOL BVar3;
  LPRECT lprcDst;
  uint uVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0x148) == 0) || (*(int *)((int)this + 0x184) == 0)) {
    FUN_100190c2(this);
  }
  if (*(int *)((int)this + 0x148) != 0) {
    uVar4 = *(int *)((int)this + 0x2c) * param_2 + param_1;
    iVar5 = uVar4 * 0x20;
    iVar1 = (int)(uVar4 & 0x1f) >> 3;
    pbVar2 = (byte *)((int)this + iVar1 + (uVar4 >> 5) * 4 + 0x1cc);
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
    BVar3 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x5c) + 0x10 + iVar5));
    if (BVar3 == 0) {
      FUN_10019e3b(this,param_1,param_2);
      lprcDst = (LPRECT)(*(int *)((int)this + 0x18c) + 0x10 + iVar5);
      UnionRect(lprcDst,lprcDst,(RECT *)(*(int *)((int)this + 0x5c) + 0x10 + iVar5));
      SetRectEmpty((LPRECT)(*(int *)((int)this + 0x5c) + 0x10 + iVar5));
    }
    else {
      BVar3 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x150) + 0x10 + iVar5));
      if ((BVar3 == 0) &&
         ((*(byte *)((int)this + iVar1 + (uVar4 >> 5) * 4 + 0x1cc) >> (uVar4 & 7) & 1) != 0)) {
        iVar1 = *(int *)((int)this + 0x150);
        FUN_10019a64(this,param_1,param_2,(float)*(int *)(iVar1 + 0x14 + iVar5),
                     (float)*(int *)(iVar1 + 0x18 + iVar5),(float)*(int *)(iVar1 + 0x1c + iVar5),0);
      }
    }
  }
  return;
}

