/*
 * FUN_18001d160 at 18001d160
 * undefined __fastcall FUN_18001d160(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d160-18001d1d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001cf18(param_1,param_2,param_3,param_4);
  FUN_18001c590(param_1,'\x01');
  *(undefined4 *)(param_1 + 0x2bb4) = *(undefined4 *)(param_1 + 0x2b84);
  *(undefined4 *)(param_1 + 0x2bb8) = *(undefined4 *)(param_1 + 0x2b88);
  *(undefined8 *)(param_1 + 0x2bc0) = *(undefined8 *)(param_1 + 0x2b90);
  *(undefined4 *)(param_1 + 0x2bc8) = *(undefined4 *)(param_1 + 0x2b98);
  *(undefined4 *)(param_1 + 0x2bcc) = *(undefined4 *)(param_1 + 0x2b9c);
  FUN_18001c518(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018001d1d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

