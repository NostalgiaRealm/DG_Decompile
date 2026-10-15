/*
 * FUN_1006865b at 1006865b
 * int * __thiscall FUN_1006865b(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5, uint param_6)
 * Address ranges: 1006865b-100686c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_1006865b(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,uint param_6)

{
  char cVar1;
  void *this_00;
  int *piVar2;
  uint local_8;
  
  this_00 = (void *)FUN_100ad475(0x130);
  if (this_00 != (void *)0x0) {
    local_8 = CONCAT31((int3)((uint)this >> 8),*(int *)(*(int *)((int)this + 4) + 0x7c) != 2);
    piVar2 = FUN_1006bf91(this_00,(int)this,param_1,param_2,param_3,param_4,param_5,param_6,local_8)
    ;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0x6c))();
      if (cVar1 != '\0') {
        return piVar2 + 0x30;
      }
      (**(code **)piVar2[0x30])(1);
    }
  }
  return (int *)0x0;
}

