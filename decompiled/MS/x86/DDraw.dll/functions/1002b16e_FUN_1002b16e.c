/*
 * FUN_1002b16e at 1002b16e
 * undefined4 __thiscall FUN_1002b16e(void * this, undefined4 * param_1, int * param_2, SIZE_T param_3, uint param_4)
 * Address ranges: 1002b16e-1002b1b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1002b16e(void *this,undefined4 *param_1,int *param_2,SIZE_T param_3,uint param_4)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = FUN_1002b4f7((void *)((int)this + 0x20),param_1,param_2,param_3,param_4 & 3);
  LeaveCriticalSection(DAT_1006c254);
  return uVar2;
}

