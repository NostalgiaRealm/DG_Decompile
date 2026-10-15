/*
 * FUN_1003f50e at 1003f50e
 * int __thiscall FUN_1003f50e(void * this, uint param_1)
 * Address ranges: 1003f50e-1003f576
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003f50e(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *local_8;
  
  local_8 = this;
  piVar2 = (int *)FUN_100273a3((void *)((int)this + 0x17b8),&param_1);
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
    iVar1 = *(int *)(*(int *)((int)this + 0xa70) + 0xc);
    do {
      if (*(uint *)(iVar1 + 0xa0) <= uVar4) {
        return 0;
      }
      iVar3 = 0;
      local_8 = (void *)param_1;
      piVar2 = (int *)FUN_100273a3((void *)(*(int *)(*(int *)(iVar1 + 0x9c) + uVar4 * 4) + 0x17b8),
                                   (uint *)&local_8);
      if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
      }
      uVar4 = uVar4 + 1;
    } while (iVar3 == 0);
  }
  else {
    iVar3 = *piVar2;
  }
  return iVar3;
}

