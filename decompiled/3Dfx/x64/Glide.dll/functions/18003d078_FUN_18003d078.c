/*
 * FUN_18003d078 at 18003d078
 * undefined __fastcall FUN_18003d078(uint * param_1, longlong * param_2, undefined8 param_3, undefined8 param_4, uint param_5)
 * Address ranges: 18003d078-18003d0fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003d078(uint *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  if (*param_1 == 0x51) {
    FUN_1800556d4(param_1,param_2,0x81,(ulonglong)param_5);
  }
  else {
    FUN_1800556d4(param_1,param_2,0xe,(ulonglong)param_5);
  }
  return;
}

