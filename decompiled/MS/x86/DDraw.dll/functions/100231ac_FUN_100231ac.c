/*
 * FUN_100231ac at 100231ac
 * undefined4 __stdcall FUN_100231ac(int param_1, undefined4 * param_2)
 * Address ranges: 100231ac-100231fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100231ac(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = 0x88760082;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uVar2 = 0x80070057;
    if (param_2 != (undefined4 *)0x0) {
      uVar2 = 0;
      *param_2 = *(undefined4 *)(param_1 + 0x4c);
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar2;
}

