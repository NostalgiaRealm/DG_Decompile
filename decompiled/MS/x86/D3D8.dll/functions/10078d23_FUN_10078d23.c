/*
 * FUN_10078d23 at 10078d23
 * bool __thiscall FUN_10078d23(void * this, int * param_1, HMONITOR param_2, int param_3, int param_4)
 * Address ranges: 10078d23-10078d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10078d23(void *this,int *param_1,HMONITOR param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = FUN_1009679d(*(void **)((int)this + 0x10),param_1);
  if (bVar1) {
    param_4 = param_3;
  }
  cVar2 = FUN_100967e0(*(void **)((int)this + 0x10),param_1,param_4,param_2);
  if (cVar2 != '\0') {
    FUN_10078023(this,(int)param_2,(int)param_1);
  }
  return cVar2 != '\0';
}

