/*
 * FUN_1004da7f at 1004da7f
 * undefined4 __thiscall FUN_1004da7f(void * this, uint * param_1)
 * Address ranges: 1004da7f-1004dac1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004da7f(void *this,uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1 = (uint *)*param_1;
  uVar2 = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x90));
  iVar1 = FUN_1004e034((void *)((int)this + 0x78),(uint *)&param_1);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x248);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x90));
  return uVar2;
}

