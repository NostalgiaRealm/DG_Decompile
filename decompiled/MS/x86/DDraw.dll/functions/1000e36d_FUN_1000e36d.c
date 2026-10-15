/*
 * FUN_1000e36d at 1000e36d
 * undefined __thiscall FUN_1000e36d(void * this, int param_1, int param_2)
 * Address ranges: 1000e36d-1000e4bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e36d(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  BOOL BVar6;
  LPRECT lprcDst;
  uint uVar7;
  int iVar8;
  
  if ((*(int *)((int)this + 0xf4) == 0) || (*(int *)((int)this + 0x114) == 0)) {
    FUN_1000d3f5(this);
  }
  if (*(int *)((int)this + 0xf4) != 0) {
    uVar7 = *(int *)((int)this + 0x2c) * param_2 + param_1;
    iVar8 = uVar7 * 0x1c;
    pbVar5 = (byte *)((int)this + ((int)(uVar7 & 0x1f) >> 3) + (uVar7 >> 5) * 4 + 0x160);
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar7 & 7));
    BVar6 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x60) + 0xc + iVar8));
    if (BVar6 == 0) {
      FUN_1000db95(this,param_1,param_2);
      lprcDst = (LPRECT)(*(int *)((int)this + 0x120) + 0xc + iVar8);
      UnionRect(lprcDst,lprcDst,(RECT *)(*(int *)((int)this + 0x60) + 0xc + iVar8));
      SetRectEmpty((LPRECT)(*(int *)((int)this + 0x60) + 0xc + iVar8));
    }
    else if (*(int *)((int)this + 0x80) != 0) {
      BVar6 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x80) + 0xc + iVar8));
      if (BVar6 == 0) {
        iVar1 = *(int *)((int)this + 0x80);
        iVar2 = *(int *)(iVar1 + 0x10 + iVar8);
        iVar3 = *(int *)(iVar1 + 0x14 + iVar8);
        iVar4 = *(int *)(iVar1 + 0x18 + iVar8);
        FUN_1000b205(this,*(int **)((int)this + 0xf4),*(int **)((int)this + 0x74),param_1,param_2,
                     (RECT *)(iVar1 + 0xc + iVar8));
        FUN_1000d99e(this,param_1,param_2,(float)iVar2,(float)iVar3,(float)iVar4,0);
      }
    }
  }
  return;
}

