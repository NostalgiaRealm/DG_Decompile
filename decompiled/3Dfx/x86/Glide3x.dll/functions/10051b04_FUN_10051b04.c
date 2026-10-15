/*
 * FUN_10051b04 at 10051b04
 * undefined __thiscall FUN_10051b04(void * this, int param_1)
 * Address ranges: 10051b04-10051b8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10051b04(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == *(int *)((int)this + 0xc)) {
    FUN_10051a87(this);
  }
  else {
    iVar1 = *(int *)((int)this + 0x10);
    iVar3 = param_1 * 0xc;
    *(undefined4 *)(iVar3 + *(int *)this) = 0;
    iVar2 = *(int *)this;
    if (param_1 == iVar1) {
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar3 + 4 + iVar2);
    }
    else {
      *(undefined4 *)(*(int *)(iVar3 + 4 + iVar2) * 0xc + 8 + iVar2) =
           *(undefined4 *)(iVar3 + 8 + iVar2);
      iVar1 = *(int *)this;
      *(undefined4 *)(*(int *)(iVar3 + 8 + iVar1) * 0xc + 4 + iVar1) =
           *(undefined4 *)(iVar3 + 4 + iVar1);
      *(undefined4 *)(iVar3 + 8 + *(int *)this) =
           *(undefined4 *)(*(int *)((int)this + 0x10) * 0xc + 8 + *(int *)this);
      *(undefined4 *)(iVar3 + 4 + *(int *)this) = *(undefined4 *)((int)this + 0x10);
      *(int *)(*(int *)((int)this + 0x10) * 0xc + 8 + *(int *)this) = param_1;
      iVar1 = *(int *)(iVar3 + 8 + *(int *)this);
      if (iVar1 != -1) {
        *(int *)(iVar1 * 0xc + 4 + *(int *)this) = param_1;
      }
    }
  }
  return;
}

