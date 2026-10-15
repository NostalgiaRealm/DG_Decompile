/*
 * FUN_100082a7 at 100082a7
 * undefined __thiscall FUN_100082a7(void * this, int param_1, uint param_2, int * param_3, uint param_4)
 * Address ranges: 100082a7-100082ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100082a7(void *this,int param_1,uint param_2,int *param_3,uint param_4)

{
  char cVar1;
  
  (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,2);
  cVar1 = FUN_100079b1(*(void **)((int)this + 0x32e0),param_1,param_2,param_3,0,param_4);
  if (cVar1 != '\0') {
    FUN_1000e06c(this);
    (**(code **)(**(int **)((int)this + 0x32dc) + 0x48))();
  }
  return;
}

