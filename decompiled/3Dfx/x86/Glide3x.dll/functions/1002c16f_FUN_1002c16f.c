/*
 * FUN_1002c16f at 1002c16f
 * undefined4 __thiscall FUN_1002c16f(void * this, undefined4 * param_1)
 * Address ranges: 1002c16f-1002c1dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002c16f(void *this,undefined4 *param_1)

{
  SIZE_T SVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar3) {
    if (iVar3 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = iVar3 * 2;
    }
    SVar1 = (SIZE_T)((ulonglong)uVar4 * 0xc);
    if ((int)((ulonglong)uVar4 * 0xc >> 0x20) != 0) {
      SVar1 = 0xffffffff;
    }
    puVar2 = (undefined4 *)FUN_10052293(SVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_10052930(puVar2,*(undefined4 **)this,*(int *)((int)this + 8) * 0xc);
    iVar3 = thunk_FUN_10052276(*(LPVOID *)this);
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 8) = uVar4;
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) * 0xc + *(int *)this);
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  puVar2[2] = param_1[2];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

