/*
 * FUN_1000903f at 1000903f
 * int __thiscall FUN_1000903f(void * this, uint * param_1)
 * Address ranges: 1000903f-100090e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1000903f(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = 0;
  uVar1 = *param_1;
  uVar4 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar2 = *(int *)this;
    uVar6 = *(uint *)((int)this + 8);
    do {
      uVar4 = uVar6 + uVar5 >> 1;
      iVar3 = uVar4 * 0xc0;
      uVar7 = uVar4;
      if ((*(int *)(iVar2 + 4 + iVar3) == 0) && (*(uint *)(iVar2 + iVar3) <= uVar1)) {
        if ((*(int *)(iVar2 + 4 + iVar3) != 0) || (uVar1 <= *(uint *)(iVar2 + iVar3))) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
        uVar7 = uVar6;
      }
      uVar6 = uVar7;
    } while (uVar7 != uVar5);
  }
  uVar5 = uVar4 * 0xc0;
  if (((uVar4 == *(uint *)((int)this + 8)) || (*(uint *)(uVar5 + *(int *)this) != uVar1)) ||
     (*(int *)(uVar5 + 4 + *(int *)this) != 0)) {
    FUN_100090e6(this,uVar4,uVar1,0,param_1);
  }
  return (uVar5 | 0xc) + *(int *)this;
}

