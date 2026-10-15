/*
 * FUN_1400013a4 at 1400013a4
 * bool __cdecl FUN_1400013a4(longlong param_1, int param_2)
 * Address ranges: 1400013a4-1400013f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1400013a4(longlong param_1,int param_2)

{
  if (param_2 == 1) {
    (**(code **)(*(longlong *)(param_1 + -0x68) + 0x70))(param_1 + -0x68);
    EndDialog(*(HWND *)(param_1 + -0x50),1);
  }
  return param_2 == 1;
}

