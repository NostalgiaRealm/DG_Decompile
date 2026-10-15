/*
 * FUN_1008eefb at 1008eefb
 * bool __thiscall FUN_1008eefb(void * this, int * param_1, HMONITOR param_2, int param_3, int param_4)
 * Address ranges: 1008eefb-1008ef47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1008eefb(void *this,int *param_1,HMONITOR param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = FUN_100b8df0(*(void **)((int)this + 0x10),param_1);
  if (bVar1) {
    param_4 = param_3;
  }
  cVar2 = FUN_100b8e33(*(void **)((int)this + 0x10),param_1,param_4,param_2);
  if (cVar2 != '\0') {
    FUN_1008e1fb(this,(int)param_2,(int)param_1);
  }
  return cVar2 != '\0';
}

