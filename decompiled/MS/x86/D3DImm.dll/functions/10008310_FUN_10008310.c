/*
 * FUN_10008310 at 10008310
 * int __thiscall FUN_10008310(void * this, uint * param_1)
 * Address ranges: 10008310-10008349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10008310(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_100087ac(this,uVar1,0);
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar2 = *(int *)((int)this + 4);
    iVar4 = uVar3 * 0x80;
    if ((*(uint *)(iVar4 + iVar2) == uVar1) && (*(int *)(iVar4 + 4 + iVar2) == 0)) {
      return iVar4 + 0xc + iVar2;
    }
  }
  return 0;
}

