/*
 * FUN_10027117 at 10027117
 * undefined __thiscall FUN_10027117(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 10027117-100271af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10027117(void *this,undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  iVar2 = (**(code **)(**(int **)((int)this + 0x31a8) + 0x38))
                    (*(int **)((int)this + 0x31a8),local_18,0);
  if (((-1 < iVar2) && (local_18[0] == 4)) &&
     (cVar1 = FUN_10039ce0(*(void **)(*(int *)((int)this + 0x3180) + 0x172c0)), cVar1 != '\0')) {
    FUN_1003ed72(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),*(int **)((int)this + 0x31a8),
                 param_2,param_3 + param_2,param_1,'\0');
    return;
  }
  FUN_1003eeed(*(void **)(*(int *)((int)this + 0x3188) + 0x1304),*(uint *)((int)this + 0x31a8),
               (void *)(*(int *)((int)this + 0x3188) + 0x1430),param_2,param_3 + param_2,param_1);
  return;
}

