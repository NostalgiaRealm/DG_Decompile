/*
 * FUN_10003d30 at 10003d30
 * undefined4 __thiscall FUN_10003d30(void * this, undefined1 * param_1)
 * Address ranges: 10003d30-10003d8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10003d30(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  SIZE_T SVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar1) {
    if (iVar1 == 0) {
      SVar3 = 0x10;
    }
    else {
      SVar3 = iVar1 * 2;
    }
    puVar2 = (undefined4 *)FUN_100cfd89(SVar3);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_100cff00(puVar2,*(undefined4 **)this,*(uint *)((int)this + 8));
    thunk_FUN_100cfd6c(*(LPVOID *)this);
    *(undefined4 **)this = puVar2;
    *(SIZE_T *)((int)this + 8) = SVar3;
  }
  *(undefined1 *)(*(int *)((int)this + 4) + *(int *)this) = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

