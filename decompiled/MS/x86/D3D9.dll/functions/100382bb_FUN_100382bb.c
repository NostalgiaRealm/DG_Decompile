/*
 * FUN_100382bb at 100382bb
 * int __thiscall FUN_100382bb(void * this, uint * param_1)
 * Address ranges: 100382bb-100382f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100382bb(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_100383e6(this,uVar1,0);
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar2 = *(int *)((int)this + 4);
    iVar4 = uVar3 * 0x2a0;
    if ((*(uint *)(iVar4 + iVar2) == uVar1) && (*(int *)(iVar4 + 4 + iVar2) == 0)) {
      return iVar4 + 0xc + iVar2;
    }
  }
  return 0;
}

