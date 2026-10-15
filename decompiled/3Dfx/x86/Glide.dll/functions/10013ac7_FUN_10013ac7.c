/*
 * FUN_10013ac7 at 10013ac7
 * bool __thiscall FUN_10013ac7(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6)
 * Address ranges: 10013ac7-10013b0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10013ac7(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    cVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x74))
                      (param_1,param_2,param_3,param_4,param_5 != 0,param_6,0);
    bVar3 = cVar2 != '\0';
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return bVar3;
}

