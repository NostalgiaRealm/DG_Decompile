/*
 * FUN_100082f0 at 100082f0
 * undefined __thiscall FUN_100082f0(void * this, int param_1, uint param_2, undefined4 param_3, int param_4, uint param_5)
 * Address ranges: 100082f0-10008340
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100082f0(void *this,int param_1,uint param_2,undefined4 param_3,int param_4,uint param_5)

{
  char cVar1;
  
  if (param_4 != 0) {
    (**(code **)(**(int **)((int)this + 0x32dc) + 0x28))(0,2);
    cVar1 = FUN_100079b1(*(void **)((int)this + 0x32e0),param_1,param_2,&param_3,param_4,param_5);
    if (cVar1 != '\0') {
      FUN_1000e06c(this);
      (**(code **)(**(int **)((int)this + 0x32dc) + 0x48))();
    }
  }
  return;
}

