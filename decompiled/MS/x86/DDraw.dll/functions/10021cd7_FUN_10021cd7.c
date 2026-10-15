/*
 * FUN_10021cd7 at 10021cd7
 * bool __thiscall FUN_10021cd7(void * this, int * param_1, HMONITOR param_2, int param_3, int param_4)
 * Address ranges: 10021cd7-10021d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10021cd7(void *this,int *param_1,HMONITOR param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = FUN_1004950b(*(void **)((int)this + 0x10),param_1);
  if (bVar1) {
    param_4 = param_3;
  }
  cVar2 = FUN_1004954e(*(void **)((int)this + 0x10),param_1,param_4,param_2);
  if (cVar2 != '\0') {
    FUN_10021037(this,(int)param_2,(int)param_1);
  }
  return cVar2 != '\0';
}

