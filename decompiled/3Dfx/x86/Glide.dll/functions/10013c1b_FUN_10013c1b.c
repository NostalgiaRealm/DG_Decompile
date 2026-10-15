/*
 * FUN_10013c1b at 10013c1b
 * bool __thiscall FUN_10013c1b(void * this, int param_1, uint param_2, uint param_3, int param_4, int param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 10013c1b-10013cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10013c1b(void *this,int param_1,uint param_2,uint param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int *this_00;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  cVar2 = '\0';
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    this_00 = *(int **)((int)this + 0xc);
    local_8 = 0;
    local_c = 0;
    FUN_1001a106(this_00,param_1,&local_8,&local_c);
    if (((param_2 < local_8) && (param_3 < local_c)) && (uVar4 = param_4 + param_2, param_2 < uVar4)
       ) {
      if (local_8 < uVar4) {
        uVar4 = local_8;
      }
      uVar3 = param_5 + param_3;
      if (param_3 < uVar3) {
        if (local_c < uVar3) {
          uVar3 = local_c;
        }
        cVar2 = (**(code **)(*this_00 + 0x80))
                          (param_1,param_2,param_3,uVar4 - param_2,uVar3 - param_3,param_6,param_7);
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return cVar2 != '\0';
}

