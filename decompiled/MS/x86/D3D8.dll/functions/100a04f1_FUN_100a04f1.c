/*
 * FUN_100a04f1 at 100a04f1
 * undefined __thiscall FUN_100a04f1(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100a04f1-100a0536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a04f1(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  LPCSTR lpOutputString;
  int *local_8;
  
  if (*(code **)((int)this + 0x2b4) != (code *)0x0) {
    local_8 = (int *)0x0;
    iVar1 = (**(code **)((int)this + 0x2b4))(param_1,param_2,2,0,&local_8);
    if (-1 < iVar1) {
      lpOutputString = (LPCSTR)(**(code **)(*local_8 + 0xc))(local_8);
      OutputDebugStringA(lpOutputString);
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return;
}

