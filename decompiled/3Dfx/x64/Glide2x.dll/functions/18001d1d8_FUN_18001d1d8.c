/*
 * FUN_18001d1d8 at 18001d1d8
 * undefined __fastcall FUN_18001d1d8(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d1d8-18001d241
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d1d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001cf18(param_1,param_2,param_3,param_4);
  FUN_18001c590(param_1,'\x01');
  *(undefined4 *)(param_1 + 0x2bac) = *(undefined4 *)(param_1 + 0x2b7c);
  *(undefined4 *)(param_1 + 0x2ba8) = *(undefined4 *)(param_1 + 0x2b78);
  *(undefined4 *)(param_1 + 0x2bb0) = *(undefined4 *)(param_1 + 0x2b80);
  *(undefined4 *)(param_1 + 0x2bd0) = *(undefined4 *)(param_1 + 0x2ba0);
  FUN_18001c518(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018001d23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

