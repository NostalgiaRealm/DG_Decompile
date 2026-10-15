/*
 * FUN_1009f406 at 1009f406
 * int __thiscall FUN_1009f406(void * this, uint * param_1)
 * Address ranges: 1009f406-1009f444
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1009f406(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_1009f71f(this,uVar1,(int)uVar1 >> 0x1f);
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar2 = *(int *)((int)this + 4);
    iVar4 = uVar3 * 0x20;
    if ((*(uint *)(iVar4 + iVar2) == uVar1) && (*(uint *)(iVar4 + 4 + iVar2) == (int)uVar1 >> 0x1f))
    {
      return iVar4 + 0x10 + iVar2;
    }
  }
  return 0;
}

