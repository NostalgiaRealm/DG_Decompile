/*
 * FUN_180092e68 at 180092e68
 * ulonglong __fastcall FUN_180092e68(longlong param_1)
 * Address ranges: 180092e68-180092ecc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180092e68(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(char *)(param_1 + 0x249) == '\0') || (*(char *)(param_1 + 0x24a) == '\0')) {
    FUN_18008ee3c(param_1,'\0');
    uVar1 = param_1 + 0x60;
  }
  else {
    if ((*(longlong *)(param_1 + 0x198) == 0) || (*(longlong *)(param_1 + 0x1d8) == 0)) {
      FUN_180091434(param_1);
    }
    uVar1 = -(ulonglong)(*(longlong *)(param_1 + 0x198) != 0) & param_1 + 0x180U;
  }
  return uVar1;
}

