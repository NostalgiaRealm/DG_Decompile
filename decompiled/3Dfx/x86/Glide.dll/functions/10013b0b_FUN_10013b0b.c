/*
 * FUN_10013b0b at 10013b0b
 * bool __thiscall FUN_10013b0b(void * this, undefined4 param_1, int param_2)
 * Address ranges: 10013b0b-10013b61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10013b0b(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *extraout_ECX;
  bool bVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar3 = false;
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_c = 0;
    local_8 = 0;
    FUN_1001a106(*(void **)((int)this + 0xc),param_2,&local_c,&local_8);
    cVar2 = (**(code **)(*extraout_ECX + 0x78))(param_1,param_2,1,0,0,local_c,local_8,0);
    bVar3 = cVar2 != '\0';
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return bVar3;
}

