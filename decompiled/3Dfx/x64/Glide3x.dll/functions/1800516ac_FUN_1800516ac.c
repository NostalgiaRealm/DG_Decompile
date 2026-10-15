/*
 * FUN_1800516ac at 1800516ac
 * undefined __fastcall FUN_1800516ac(LARGE_INTEGER param_1, longlong param_2, uint param_3, uint param_4)
 * Address ranges: 1800516ac-18005171f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800516ac(LARGE_INTEGER param_1,longlong param_2,uint param_3,uint param_4)

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

