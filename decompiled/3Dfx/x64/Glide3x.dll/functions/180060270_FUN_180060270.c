/*
 * FUN_180060270 at 180060270
 * ulonglong __fastcall FUN_180060270(longlong param_1)
 * Address ranges: 180060270-1800602a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180060270(longlong param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x204) != '\0') {
    DVar1 = *(DWORD *)(param_1 + 500);
    DVar2 = GetCurrentThreadId();
    uVar3 = CONCAT44(extraout_var,DVar2);
    if (DVar1 != DVar2) {
      return uVar3 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}

