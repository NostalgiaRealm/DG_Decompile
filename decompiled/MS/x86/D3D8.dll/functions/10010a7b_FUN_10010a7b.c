/*
 * FUN_10010a7b at 10010a7b
 * int __thiscall FUN_10010a7b(void * this, int param_1, int param_2, RECT * param_3)
 * Address ranges: 10010a7b-10010b49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10010a7b(void *this,int param_1,int param_2,RECT *param_3)

{
  BOOL BVar1;
  LPRECT ptVar2;
  uint *puVar3;
  int iVar4;
  tagRECT local_28;
  RECT local_18;
  char local_5;
  
  puVar3 = (uint *)(*(int *)((int)this + 0x14) + -0x4dd4);
  if (*(int *)((int)this + 0x14) == 0) {
    puVar3 = (uint *)&DAT_00000b0c;
  }
  FUN_10003838(&local_5,(byte)(*puVar3 >> 2) & 1);
  local_18.right = *(LONG *)((int)this + 0x4c);
  local_18.bottom = *(LONG *)((int)this + 0x50);
  local_18.left = 0;
  local_18.top = 0;
  if (param_3 == (RECT *)0x0) {
    ptVar2 = (LPRECT)(param_2 + param_1 * 0x10);
    UnionRect(ptVar2,ptVar2,&local_18);
    iVar4 = 0;
  }
  else {
    iVar4 = -0x7789f794;
    BVar1 = IntersectRect(&local_28,param_3,&local_18);
    if ((BVar1 != 0) && (BVar1 = EqualRect(param_3,&local_28), BVar1 != 0)) {
      ptVar2 = (LPRECT)(param_2 + param_1 * 0x10);
      UnionRect(ptVar2,ptVar2,param_3);
      iVar4 = 0;
    }
    if (iVar4 < 0) goto LAB_10010b39;
  }
  if (*(int *)((int)this + 0x60) == 1) {
    FUN_100101c1(this,param_1);
  }
LAB_10010b39:
  FUN_10003881(&local_5);
  return iVar4;
}

