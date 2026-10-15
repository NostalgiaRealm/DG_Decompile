/*
 * FUN_1007cb56 at 1007cb56
 * undefined __thiscall FUN_1007cb56(void * this, uint param_1, uint param_2)
 * Address ranges: 1007cb56-1007cc06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007cb56(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  *(void **)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x948) = this;
  piVar1 = (int *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_1,param_2,0,0);
  lVar3 = FUN_100bb258(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304));
  uVar2 = FUN_100baeff((void *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 4),'\0');
  if (((char)uVar2 == '\0') || (lVar3 == 0)) {
    FUN_100c17e3(*(void **)(*(int *)((int)this + 0x1cf00) + 0x172c0),param_1,param_2);
  }
  else {
    FUN_100bb282(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),(uint)lVar3,
                 (uint)((ulonglong)lVar3 >> 0x20));
  }
  return;
}

