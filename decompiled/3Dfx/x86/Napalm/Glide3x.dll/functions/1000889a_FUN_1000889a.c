/*
 * FUN_1000889a at 1000889a
 * undefined __thiscall FUN_1000889a(void * this, int param_1, uint param_2, undefined4 param_3, int param_4, uint param_5)
 * Address ranges: 1000889a-100088ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000889a(void *this,int param_1,uint param_2,undefined4 param_3,int param_4,uint param_5)

{
  char cVar1;
  
  if (param_4 != 0) {
    (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,2);
    cVar1 = FUN_10007f5b(*(void **)((int)this + 0x3660),param_1,param_2,&param_3,param_4,param_5);
    if (cVar1 != '\0') {
      FUN_1000f326(this);
      (**(code **)(**(int **)((int)this + 0x365c) + 0x48))();
    }
  }
  return;
}

