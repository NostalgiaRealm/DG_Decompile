/*
 * FUN_18002f8c0 at 18002f8c0
 * undefined __fastcall FUN_18002f8c0(uint * param_1, longlong * param_2, undefined8 param_3, undefined8 param_4, uint param_5)
 * Address ranges: 18002f8c0-18002f945
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f8c0(uint *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  if (*param_1 == 0x51) {
    FUN_180057838(param_1,param_2,0x81,(ulonglong)param_5);
  }
  else {
    FUN_180057838(param_1,param_2,0xe,(ulonglong)param_5);
  }
  return;
}

