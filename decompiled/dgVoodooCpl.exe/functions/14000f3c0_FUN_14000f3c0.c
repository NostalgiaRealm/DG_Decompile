/*
 * FUN_14000f3c0 at 14000f3c0
 * undefined8 __fastcall FUN_14000f3c0(longlong * param_1, int param_2, short param_3, undefined8 param_4, undefined1 * param_5)
 * Address ranges: 14000f3c0-14000f407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000f3c0(longlong *param_1,int param_2,short param_3,undefined8 param_4,undefined1 *param_5)

{
  if ((param_2 == 0x111) && (param_3 == 2)) {
    (**(code **)(*param_1 + 0x70))();
    EndDialog((HWND)param_1[3],1);
    *param_5 = 1;
    return 1;
  }
  return 0;
}

