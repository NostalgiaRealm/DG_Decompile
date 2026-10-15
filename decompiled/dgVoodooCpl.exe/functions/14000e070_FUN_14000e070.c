/*
 * FUN_14000e070 at 14000e070
 * longlong __fastcall FUN_14000e070(longlong * param_1, longlong param_2, int param_3, undefined8 param_4, ulonglong param_5)
 * Address ranges: 14000e070-14000e10f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_14000e070(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,
                      ulonglong param_5)

{
  uint uVar1;
  HWND hWnd;
  longlong lVar2;
  
  if ((short)(param_5 >> 0x10) != 0) {
    return (param_5 >> 0x18) << 8;
  }
  hWnd = GetDlgItem(*(HWND *)(param_2 + 0x18),param_3);
  uVar1 = GetWindowLongW(hWnd,-0x10);
  uVar1 = uVar1 & 0xf;
  if ((uVar1 != 2) && (uVar1 != 3)) {
    if ((uVar1 != 4) && (uVar1 != 9)) {
                    /* WARNING: Could not recover jumptable at 0x00014000e0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)*param_1)(param_1,param_3);
      return lVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014000e0f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
    return lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000e10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*param_1 + 8))(param_1,param_3);
  return lVar2;
}

