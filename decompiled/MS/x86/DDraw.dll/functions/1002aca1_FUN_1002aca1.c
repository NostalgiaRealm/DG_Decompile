/*
 * FUN_1002aca1 at 1002aca1
 * undefined4 __thiscall FUN_1002aca1(void * this, int * param_1)
 * Address ranges: 1002aca1-1002ad0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002aca1(void *this,int *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
    uVar2 = 0x887601c2;
    if (*(char *)((int)this + 8) == '\0') {
      uVar2 = 0x8876023c;
      BVar1 = TryEnterCriticalSection(DAT_1006c254);
      if (BVar1 == 0) {
        FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
      }
      if (*(int *)((int)this + 0x108) != 0) {
        *param_1 = *(int *)((int)this + 0x108);
        (**(code **)(**(int **)((int)this + 0x108) + 4))(*(int **)((int)this + 0x108));
        uVar2 = 0;
      }
      LeaveCriticalSection(DAT_1006c254);
    }
  }
  return uVar2;
}

