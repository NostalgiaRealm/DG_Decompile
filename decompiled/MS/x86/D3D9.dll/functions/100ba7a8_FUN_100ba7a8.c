/*
 * FUN_100ba7a8 at 100ba7a8
 * undefined __thiscall FUN_100ba7a8(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100ba7a8-100ba855
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100ba7a8(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x8f0);
  if (*(int *)((int)this + 0x8ec) == iVar1) {
    if (iVar1 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar1 * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar5 * 0x18);
    if ((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_100cfd89(SVar2);
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    FUN_100cff00(puVar3,*(undefined4 **)((int)this + 0x8e8),*(int *)((int)this + 0x8f0) * 0x18);
    thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x8e8));
    *(undefined4 **)((int)this + 0x8e8) = puVar3;
    *(uint *)((int)this + 0x8f0) = uVar5;
  }
  iVar4 = *(int *)((int)this + 0x8ec) * 0x18;
  iVar1 = *(int *)((int)this + 0x8e8);
  *(undefined4 *)(iVar4 + iVar1) = 0;
  *(undefined4 *)(iVar4 + 4 + iVar1) = 0;
  *(undefined4 *)(iVar4 + 8 + iVar1) = param_1;
  *(undefined4 *)(iVar4 + 0xc + iVar1) = param_2;
  *(undefined4 *)(iVar4 + 0x10 + iVar1) = param_3;
  *(undefined4 *)(iVar4 + 0x14 + iVar1) = param_4;
  *(int *)((int)this + 0x8ec) = *(int *)((int)this + 0x8ec) + 1;
  return;
}

