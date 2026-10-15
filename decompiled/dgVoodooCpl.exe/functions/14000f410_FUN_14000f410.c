/*
 * FUN_14000f410 at 14000f410
 * undefined __fastcall FUN_14000f410(longlong param_1)
 * Address ranges: 14000f410-14000f462
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f410(longlong param_1)

{
  if (*(LPCDLGTEMPLATEW *)(param_1 + 0x40) != (LPCDLGTEMPLATEW)0x0) {
    DialogBoxIndirectParamW
              ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(param_1 + 0x40),*(HWND *)(param_1 + 0x58),
               FUN_14000d9e0,param_1);
    return;
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    DialogBoxParamW(*(HINSTANCE *)(param_1 + 0x50),
                    (LPCWSTR)(ulonglong)(*(uint *)(param_1 + 0x48) & 0xffff),
                    *(HWND *)(param_1 + 0x58),FUN_14000d9e0,param_1);
  }
  return;
}

