/*
 * FUN_1002a193 at 1002a193
 * char __thiscall FUN_1002a193(void * this, undefined4 param_1)
 * Address ranges: 1002a193-1002a1c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1002a193(void *this,undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (*(int *)((int)this + 4) != 0) {
    cVar2 = FUN_100304ae(this,param_1);
    if (cVar2 != '\0') {
      piVar1 = (int *)(*(int *)((int)this + 4) + 0xcc);
      *piVar1 = *piVar1 + 1;
    }
  }
  return cVar2;
}

