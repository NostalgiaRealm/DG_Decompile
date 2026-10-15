/*
 * FUN_18003e13c at 18003e13c
 * undefined8 * __fastcall FUN_18003e13c(longlong param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 18003e13c-18003e184
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003e13c(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  FUN_18003e68c(param_1,param_2,*(longlong *)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x10),
                param_3,*(longlong *)(param_1 + 0x40),*(undefined8 **)(param_1 + 0x38),
                *(longlong *)(param_1 + 0x18) + 0x18,param_1 + 0x50);
  return param_2;
}

