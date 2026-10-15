/*
 * FUN_18007b9d0 at 18007b9d0
 * undefined __fastcall FUN_18007b9d0(undefined8 param_1, longlong param_2, longlong * param_3, undefined8 param_4, byte param_5, uint param_6, uint param_7, uint param_8, uint param_9)
 * Address ranges: 18007b9d0-18007babd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007b9d0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  byte param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  if (((*(int *)(param_2 + 0x280 + (ulonglong)param_6 * 4) != 0 |
        -(*(int *)(param_2 + 0x280 + (ulonglong)param_7 * 4) != 0) & 2U |
        -(*(int *)(param_2 + 0x280 + (ulonglong)param_8 * 4) != 0) & 4U |
       -(*(int *)(param_2 + 0x280 + (ulonglong)param_9 * 4) != 0) & 8U) & param_5) != 0) {
    FUN_1800edbe0((uint *)(param_2 + 0x20),param_3,1,param_4);
  }
  return;
}

