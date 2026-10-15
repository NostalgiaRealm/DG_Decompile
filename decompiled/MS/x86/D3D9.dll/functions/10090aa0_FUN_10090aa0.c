/*
 * FUN_10090aa0 at 10090aa0
 * int __stdcall FUN_10090aa0(int param_1)
 * Address ranges: 10090aa0-10090b0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090aa0(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  int local_8;
  
  local_8 = 0;
  uVar1 = FUN_100910a8((void *)(param_1 + 4),&local_8);
  if ((char)uVar1 != '\0') {
    BVar2 = TryEnterCriticalSection(DAT_100deaa4);
    if (BVar2 == 0) {
      FUN_10003e00((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    puVar3 = (undefined4 *)(param_1 + -0x70);
    FUN_10090539((int)puVar3);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_100901f5(puVar3);
      FUN_100cfd6c(puVar3);
    }
    LeaveCriticalSection(DAT_100deaa4);
  }
  return local_8;
}

