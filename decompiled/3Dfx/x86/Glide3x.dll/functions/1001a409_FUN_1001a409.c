/*
 * FUN_1001a409 at 1001a409
 * undefined __thiscall FUN_1001a409(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 1001a409-1001a4a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001a409(void *this,undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x3328) + 0x38))
                    (*(int **)((int)this + 0x3328),local_18,0);
  if (((-1 < iVar2) && (local_18[0] == 4)) &&
     (cVar1 = FUN_1003c435(*(void **)(*(int *)((int)this + 0x3300) + 0x172c0)), cVar1 != '\0')) {
    FUN_100414ca(*(void **)(*(int *)((int)this + 0x3308) + 0x1304),*(int **)((int)this + 0x3328),
                 param_2,param_3 + param_2,param_1,'\0');
    return;
  }
  FUN_10041645(*(void **)(*(int *)((int)this + 0x3308) + 0x1304),*(uint *)((int)this + 0x3328),
               (void *)(*(int *)((int)this + 0x3308) + 0x1430),param_2,param_3 + param_2,param_1);
  return;
}

