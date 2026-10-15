/*
 * FUN_1002684c at 1002684c
 * uint __thiscall FUN_1002684c(void * this, undefined4 param_1, undefined4 * param_2)
 * Address ranges: 1002684c-100268bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002684c(void *this,undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EDX;
  uint uVar4;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar4 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    piVar2 = (int *)thunk_FUN_100321e9(*(int *)((int)this + 0xf4));
    uVar4 = 0x887600ff;
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x34))(param_1,extraout_EDX,0);
      uVar4 = iVar3 >> 0x1f & 0x80004005;
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar4;
}

