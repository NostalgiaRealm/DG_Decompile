/*
 * FUN_100123f8 at 100123f8
 * char __thiscall FUN_100123f8(void * this, int * param_1)
 * Address ranges: 100123f8-10012424
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100123f8(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (*(int *)((int)this + 4) != 0) {
    cVar2 = FUN_10012020(this,param_1);
    if (cVar2 != '\0') {
      piVar1 = (int *)(*(int *)((int)this + 4) + 0xbc);
      *piVar1 = *piVar1 + 1;
    }
  }
  return cVar2;
}

