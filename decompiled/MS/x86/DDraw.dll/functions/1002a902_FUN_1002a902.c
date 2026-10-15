/*
 * FUN_1002a902 at 1002a902
 * undefined4 __thiscall FUN_1002a902(void * this, int param_1, int param_2)
 * Address ranges: 1002a902-1002a986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002a902(void *this,int param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = 0x80070057;
  if (((param_1 == 0) && (param_2 != 0)) &&
     (uVar2 = 0x88760082, (*(uint *)((int)this + 0x1b8) & 0x200) != 0)) {
    (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x4c) + 0x50))
              (*(undefined4 *)(*(int *)((int)this + 0xfc) + 0x120),param_2,param_2 + 0x200,
               param_2 + 0x400,0x477fff00);
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar2;
}

