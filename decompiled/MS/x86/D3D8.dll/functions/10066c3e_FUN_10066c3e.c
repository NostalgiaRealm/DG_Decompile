/*
 * FUN_10066c3e at 10066c3e
 * undefined __thiscall FUN_10066c3e(void * this, uint param_1, uint param_2)
 * Address ranges: 10066c3e-10066cee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10066c3e(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  *(void **)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x948) = this;
  piVar1 = (int *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  FUN_100989a6(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),param_1,param_2,0,0);
  lVar3 = FUN_10098c80(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304));
  uVar2 = FUN_10098927((void *)(*(int *)(*(int *)((int)this + 0x1cf04) + 0x1304) + 4),'\0');
  if (((char)uVar2 == '\0') || (lVar3 == 0)) {
    FUN_1009f21b(*(void **)(*(int *)((int)this + 0x1cf00) + 0x172c0),param_1,param_2);
  }
  else {
    FUN_10098caa(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),(uint)lVar3,
                 (uint)((ulonglong)lVar3 >> 0x20));
  }
  return;
}

