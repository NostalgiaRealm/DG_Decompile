/*
 * FUN_1800ec7d0 at 1800ec7d0
 * undefined __fastcall FUN_1800ec7d0(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800ec7d0-1800ec82f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ec7d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  LPCSTR lpOutputString;
  longlong *local_res8 [4];
  
  if (*(code **)(param_1 + 0x2d0) != (code *)0x0) {
    local_res8[0] = (longlong *)0x0;
    iVar1 = (**(code **)(param_1 + 0x2d0))(param_2,param_3,2,0,local_res8);
    if (-1 < iVar1) {
      lpOutputString = (LPCSTR)(**(code **)(*local_res8[0] + 0x18))();
      OutputDebugStringA(lpOutputString);
      (**(code **)(*local_res8[0] + 0x10))();
    }
  }
  return;
}

