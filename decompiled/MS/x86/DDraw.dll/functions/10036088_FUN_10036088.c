/*
 * FUN_10036088 at 10036088
 * undefined4 __stdcall FUN_10036088(int param_1, undefined4 * param_2)
 * Address ranges: 10036088-100360dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10036088(int param_1,undefined4 *param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x80070057;
  if ((param_2 != (undefined4 *)0x0) && ((*(byte *)(iVar1 + 0x1bc) & 0x10) != 0)) {
    uVar3 = 0;
    *param_2 = *(undefined4 *)(iVar1 + 0x1e0);
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

