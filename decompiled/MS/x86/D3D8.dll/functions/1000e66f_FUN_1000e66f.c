/*
 * FUN_1000e66f at 1000e66f
 * char __thiscall FUN_1000e66f(void * this, int * param_1)
 * Address ranges: 1000e66f-1000e69b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1000e66f(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (*(int *)((int)this + 4) != 0) {
    cVar2 = FUN_1000e2fc(this,param_1);
    if (cVar2 != '\0') {
      piVar1 = (int *)(*(int *)((int)this + 4) + 0xbc);
      *piVar1 = *piVar1 + 1;
    }
  }
  return cVar2;
}

