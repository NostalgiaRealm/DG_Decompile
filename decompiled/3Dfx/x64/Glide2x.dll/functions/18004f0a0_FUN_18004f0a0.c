/*
 * FUN_18004f0a0 at 18004f0a0
 * undefined __fastcall FUN_18004f0a0(LARGE_INTEGER param_1, longlong param_2, uint param_3, uint param_4)
 * Address ranges: 18004f0a0-18004f113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f0a0(LARGE_INTEGER param_1,longlong param_2,uint param_3,uint param_4)

{
  LARGE_INTEGER local_res8;
  
  if ((param_3 != 0xffffffff) || (param_4 != 0xffffffff)) {
    *(undefined8 *)(param_2 + 0xd60) = 0;
    *(undefined8 *)(param_2 + 0xd58) = 0;
    if (param_3 != 0) {
      local_res8 = param_1;
      QueryPerformanceFrequency(&local_res8);
      *(longlong *)(param_2 + 0xd58) =
           (longlong)((ulonglong)param_4 * local_res8.QuadPart) / (longlong)(ulonglong)param_3;
    }
  }
  return;
}

