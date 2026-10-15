/*
 * FUN_1008075b at 1008075b
 * int __thiscall FUN_1008075b(void * this, uint * param_1)
 * Address ranges: 1008075b-10080797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1008075b(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = FUN_1002e9f5(this,uVar2,uVar1);
  if (uVar4 != *(uint *)((int)this + 8)) {
    iVar3 = *(int *)((int)this + 4);
    iVar5 = uVar4 * 0x18;
    if ((*(uint *)(iVar5 + iVar3) == uVar2) && (*(uint *)(iVar5 + 4 + iVar3) == uVar1)) {
      return iVar5 + 0x10 + iVar3;
    }
  }
  return 0;
}

