/*
 * FUN_18007affc at 18007affc
 * undefined __fastcall FUN_18007affc(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4, byte param_5)
 * Address ranges: 18007affc-18007b0b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007affc(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4,byte param_5)

{
  uint local_38 [12];
  
  if ((param_5 & 0xf) != 0) {
    FUN_1800850c0(param_1,param_2,*(uint *)(param_2 + 0x1c0 + (ulonglong)param_4 * 4),param_5 & 0xf,
                  local_38);
    FUN_1800edd10((uint *)(param_2 + 0x20),param_3,0x36,local_38);
  }
  return;
}

