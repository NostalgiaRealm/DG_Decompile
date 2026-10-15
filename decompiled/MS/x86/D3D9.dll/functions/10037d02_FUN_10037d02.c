/*
 * FUN_10037d02 at 10037d02
 * undefined4 __thiscall FUN_10037d02(void * this, uint * param_1)
 * Address ranges: 10037d02-10037d44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10037d02(void *this,uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1 = (uint *)*param_1;
  uVar2 = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
  iVar1 = FUN_100382bb((void *)((int)this + 0x70),(uint *)&param_1);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x250);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
  return uVar2;
}

