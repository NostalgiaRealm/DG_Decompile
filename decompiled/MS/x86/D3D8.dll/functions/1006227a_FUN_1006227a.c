/*
 * FUN_1006227a at 1006227a
 * uint __thiscall FUN_1006227a(void * this, int param_1, int param_2)
 * Address ranges: 1006227a-100622df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1006227a(void *this,int param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  LPRECT lprcDst;
  int iVar2;
  
  if (*(int *)((int)this + 0x74) == 0) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    iVar2 = (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x1c;
    if (*(int *)((int)this + 0xc4) != 0) {
      lprcDst = (LPRECT)(*(int *)((int)this + 0xc4) + 0xc + iVar2);
      UnionRect(lprcDst,lprcDst,(RECT *)(*(int *)((int)this + 0x80) + 0xc + iVar2));
    }
    uVar1 = FUN_10062071(this,*(int **)((int)this + 0x54),*(int **)((int)this + 0x74),param_1,
                         param_2,(RECT *)(*(int *)((int)this + 0x80) + 0xc + iVar2));
  }
  return uVar1;
}

