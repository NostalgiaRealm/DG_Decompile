/*
 * FUN_180015e98 at 180015e98
 * undefined8 __fastcall FUN_180015e98(longlong param_1, undefined8 param_2, undefined4 * param_3)
 * Address ranges: 180015e98-180015f01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180015e98(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  undefined4 uVar3;
  POINT local_res8;
  
  GetCursorPos(&local_res8);
  pHVar1 = WindowFromPoint(local_res8);
  uVar3 = 0;
  if (pHVar1 != (HWND)0x0) {
    pHVar2 = (HWND)(**(code **)(*(longlong *)(param_1 + -0x48) + 0x28))();
    uVar3 = 0;
    if (pHVar1 == pHVar2) {
      *(undefined8 *)(param_1 + -0x20) = param_2;
      uVar3 = 1;
    }
  }
  *param_3 = uVar3;
  return 0;
}

