/*
 * FUN_10026d8d at 10026d8d
 * undefined __thiscall FUN_10026d8d(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 10026d8d-10026e25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10026d8d(void *this,undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x31a8) + 0x38))
                    (*(int **)((int)this + 0x31a8),local_18,0);
  if (((-1 < iVar2) && (local_18[0] == 4)) &&
     (cVar1 = FUN_10039950(*(void **)(*(int *)((int)this + 0x3180) + 0x172c0)), cVar1 != '\0')) {
    FUN_1003e9e2(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),*(int **)((int)this + 0x31a8),
                 param_2,param_3 + param_2,param_1,'\0');
    return;
  }
  FUN_1003eb5d(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),*(uint *)((int)this + 0x31a8),
               (void *)(*(int *)((int)this + 0x3188) + 0x1430),param_2,param_3 + param_2,param_1);
  return;
}

