/*
 * FUN_10042db9 at 10042db9
 * bool __thiscall FUN_10042db9(void * this, int param_1, char param_2)
 * Address ranges: 10042db9-10042de9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10042db9(void *this,int param_1,char param_2)

{
  bool bVar1;
  
  if (*(char *)((int)this + 0x9d8) == '\0') {
    if ((*(int *)(param_1 + 4) == 0) || (param_2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = *(int *)(param_1 + 4) == 2;
  }
  return bVar1;
}

