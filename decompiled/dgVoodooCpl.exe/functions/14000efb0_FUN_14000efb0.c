/*
 * FUN_14000efb0 at 14000efb0
 * undefined8 __fastcall FUN_14000efb0(longlong param_1)
 * Address ranges: 14000efb0-14000f02a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000efb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(LPCDLGTEMPLATEW *)(param_1 + 0x40) != (LPCDLGTEMPLATEW)0x0) {
      CreateDialogIndirectParamW
                ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(param_1 + 0x40),
                 *(HWND *)(*(longlong *)(param_1 + 0x60) + 0x18),FUN_14000d9e0,param_1);
      return *(undefined8 *)(param_1 + 0x18);
    }
    if (*(uint *)(param_1 + 0x48) != 0) {
      CreateDialogParamW(*(HINSTANCE *)(param_1 + 0x50),
                         (LPCWSTR)(ulonglong)(*(uint *)(param_1 + 0x48) & 0xffff),
                         *(HWND *)(*(longlong *)(param_1 + 0x60) + 0x18),FUN_14000d9e0,param_1);
      return *(undefined8 *)(param_1 + 0x18);
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}

