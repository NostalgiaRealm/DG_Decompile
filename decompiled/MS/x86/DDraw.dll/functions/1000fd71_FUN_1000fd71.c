/*
 * FUN_1000fd71 at 1000fd71
 * undefined __thiscall FUN_1000fd71(void * this, uint param_1, uint param_2)
 * Address ranges: 1000fd71-1000fe21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000fd71(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  *(void **)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 0x948) = this;
  piVar1 = (int *)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  FUN_10052bd4(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),param_1,param_2,0,0);
  lVar3 = FUN_10052e8d(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304));
  uVar2 = FUN_10052b55((void *)(*(int *)(*(int *)((int)this + 0xcf04) + 0x1304) + 4),'\0');
  if (((char)uVar2 == '\0') || (lVar3 == 0)) {
    FUN_1005050b(*(void **)(*(int *)((int)this + 0xcf00) + 0x172c0),param_1,param_2);
  }
  else {
    FUN_10052ecc(*(void **)(*(int *)((int)this + 0xcf04) + 0x1304),(uint)lVar3,
                 (uint)((ulonglong)lVar3 >> 0x20));
  }
  return;
}

