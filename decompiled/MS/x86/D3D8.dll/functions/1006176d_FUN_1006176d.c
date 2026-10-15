/*
 * FUN_1006176d at 1006176d
 * bool __thiscall FUN_1006176d(void * this, int param_1, int param_2)
 * Address ranges: 1006176d-100617b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1006176d(void *this,int param_1,int param_2)

{
  longlong lVar1;
  SIZE_T SVar2;
  int *piVar3;
  bool bVar4;
  
  bVar4 = false;
  if (*(int *)((int)this + 0x18) == 0) {
    lVar1 = (ulonglong)(uint)(param_1 * param_2) * 0x1c;
    SVar2 = (SIZE_T)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    piVar3 = (int *)FUN_100ad4a9(SVar2);
    *(int **)((int)this + 0x18) = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_100ada8e(piVar3,0,param_1 * param_2 * 0x1c);
    }
    bVar4 = *(int *)((int)this + 0x18) == 0;
  }
  return !bVar4;
}

