/*
 * FUN_1001c5b2 at 1001c5b2
 * undefined __thiscall FUN_1001c5b2(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 1001c5b2-1001c64a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001c5b2(void *this,undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x36a8) + 0x38))
                    (*(int **)((int)this + 0x36a8),local_18,0);
  if (((-1 < iVar2) && (local_18[0] == 4)) &&
     (cVar1 = FUN_1003f843(*(void **)(*(int *)((int)this + 0x3680) + 0x172c0)), cVar1 != '\0')) {
    FUN_100448d3(*(void **)(*(int *)((int)this + 0x3688) + 0x1304),*(int **)((int)this + 0x36a8),
                 param_2,param_3 + param_2,param_1,'\0');
    return;
  }
  FUN_10044a4e(*(void **)(*(int *)((int)this + 0x3688) + 0x1304),*(uint *)((int)this + 0x36a8),
               (void *)(*(int *)((int)this + 0x3688) + 0x1430),param_2,param_3 + param_2,param_1);
  return;
}

