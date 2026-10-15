/*
 * FUN_1002b7ea at 1002b7ea
 * bool __thiscall FUN_1002b7ea(void * this, int param_1)
 * Address ranges: 1002b7ea-1002b80c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1002b7ea(void *this,int param_1)

{
  int iVar1;
  
  for (iVar1 = FUN_1002b7cf((int)this); (iVar1 != 0 && (iVar1 != param_1));
      iVar1 = *(int *)(iVar1 + 0x110)) {
  }
  return iVar1 != 0;
}

