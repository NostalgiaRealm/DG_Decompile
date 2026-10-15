/*
 * FUN_10039b90 at 10039b90
 * int __thiscall FUN_10039b90(void * this, uint * param_1)
 * Address ranges: 10039b90-10039bc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10039b90(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_10039f0c(this,uVar1,0);
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar2 = *(int *)((int)this + 4);
    iVar4 = uVar3 * 0x28;
    if ((*(uint *)(iVar4 + iVar2) == uVar1) && (*(int *)(iVar4 + 4 + iVar2) == 0)) {
      return iVar4 + 0x10 + iVar2;
    }
  }
  return 0;
}

