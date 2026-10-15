/*
 * FUN_1009f5a5 at 1009f5a5
 * int __thiscall FUN_1009f5a5(void * this, uint * param_1)
 * Address ranges: 1009f5a5-1009f5de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1009f5a5(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_1009f921(this,uVar1,0);
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar2 = *(int *)((int)this + 4);
    iVar4 = uVar3 * 0x28;
    if ((*(uint *)(iVar4 + iVar2) == uVar1) && (*(int *)(iVar4 + 4 + iVar2) == 0)) {
      return iVar4 + 0x10 + iVar2;
    }
  }
  return 0;
}

