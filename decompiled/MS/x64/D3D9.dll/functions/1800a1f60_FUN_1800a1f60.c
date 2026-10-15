/*
 * FUN_1800a1f60 at 1800a1f60
 * ulonglong __fastcall FUN_1800a1f60(longlong param_1, char param_2)
 * Address ranges: 1800a1f60-1800a1fde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a1f60(longlong param_1,char param_2)

{
  ulonglong uVar1;
  
  if ((*(char *)(param_1 + 0x24d) == '\0') || (*(char *)(param_1 + 0x24e) == '\0')) {
    FUN_18009dcd0(param_1,'\0',param_2);
    uVar1 = param_1 + 0x60;
  }
  else {
    if ((*(longlong *)(param_1 + 0x1b8) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
      if (param_2 != '\0') {
        FUN_1800fb1f0(*(longlong *)(param_1 + 0x58) + 0x12c0);
      }
      FUN_18009ff3c(param_1);
    }
    uVar1 = -(ulonglong)(*(longlong *)(param_1 + 0x1b8) != 0) & param_1 + 0x1a4U;
  }
  return uVar1;
}

