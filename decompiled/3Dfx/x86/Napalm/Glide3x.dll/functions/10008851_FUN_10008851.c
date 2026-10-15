/*
 * FUN_10008851 at 10008851
 * undefined __thiscall FUN_10008851(void * this, int param_1, uint param_2, int * param_3, uint param_4)
 * Address ranges: 10008851-10008899
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008851(void *this,int param_1,uint param_2,int *param_3,uint param_4)

{
  char cVar1;
  
  (**(code **)(**(int **)((int)this + 0x365c) + 0x28))(0,2);
  cVar1 = FUN_10007f5b(*(void **)((int)this + 0x3660),param_1,param_2,param_3,0,param_4);
  if (cVar1 != '\0') {
    FUN_1000f326(this);
    (**(code **)(**(int **)((int)this + 0x365c) + 0x48))();
  }
  return;
}

