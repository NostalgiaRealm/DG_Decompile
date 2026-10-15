/*
 * FUN_10046017 at 10046017
 * undefined __thiscall FUN_10046017(void * this, int param_1)
 * Address ranges: 10046017-100460c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046017(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  LPRECT lprcDst;
  RECT local_18;
  
  if (*(char *)((int)this + 0x1671) != '\0') {
    *(uint *)(param_1 + 0x78) = *(int *)((int)this + 0x1644) << 0xc | *(uint *)((int)this + 0x1640);
    lprcDst = (LPRECT)(param_1 + 0x7c);
    fVar2 = *(float *)((int)this + 0x164c);
    fVar3 = *(float *)((int)this + 0x1650);
    fVar4 = *(float *)((int)this + 0x1654);
    lprcDst->left = (int)(*(float *)((int)this + 0x1648) + -1.0);
    *(int *)(param_1 + 0x80) = (int)(fVar3 + -1.0);
    *(int *)(param_1 + 0x84) = (int)(fVar2 + 1.0);
    *(int *)(param_1 + 0x88) = (int)(fVar4 + 1.0);
    iVar1 = *(int *)((int)this + 0x151c);
    *(undefined1 *)(iVar1 + 0xd2) = 0;
    local_18.left = *(LONG *)(iVar1 + 0xa8);
    local_18.top = *(LONG *)(iVar1 + 0xac);
    local_18.right = *(int *)(iVar1 + 0xb0) + *(int *)(iVar1 + 0xa8);
    local_18.bottom = *(int *)(iVar1 + 0xb4) + *(int *)(iVar1 + 0xac);
    IntersectRect(lprcDst,lprcDst,&local_18);
  }
  *(int *)((int)this + 0x151c) = *(int *)((int)this + 0x166c);
  *(undefined1 *)((int)this + 0x1754) = 1;
  return;
}

