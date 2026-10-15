/*
 * FUN_140010b28 at 140010b28
 * bool __cdecl FUN_140010b28(longlong * param_1, int param_2, short param_3, undefined8 param_4, undefined1 * param_5)
 * Address ranges: 140010b28-140010b2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140010b28(longlong *param_1,int param_2,short param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  if (param_2 == 0x111 && param_3 == 2) {
    (**(code **)(*param_1 + 0x70))();
    EndDialog((HWND)param_1[3],1);
    *param_5 = 1;
  }
  return param_2 == 0x111 && param_3 == 2;
}

