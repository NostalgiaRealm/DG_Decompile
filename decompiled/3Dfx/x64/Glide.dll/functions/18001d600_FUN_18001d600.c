/*
 * FUN_18001d600 at 18001d600
 * undefined __fastcall FUN_18001d600(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001d600-18001d677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001d600(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18001d3b8(param_1,param_2,param_3,param_4);
  FUN_18001ca30(param_1,'\x01');
  *(undefined4 *)(param_1 + 0x2bb4) = *(undefined4 *)(param_1 + 0x2b84);
  *(undefined4 *)(param_1 + 0x2bb8) = *(undefined4 *)(param_1 + 0x2b88);
  *(undefined8 *)(param_1 + 0x2bc0) = *(undefined8 *)(param_1 + 0x2b90);
  *(undefined4 *)(param_1 + 0x2bc8) = *(undefined4 *)(param_1 + 0x2b98);
  *(undefined4 *)(param_1 + 0x2bcc) = *(undefined4 *)(param_1 + 0x2b9c);
  FUN_18001c9b8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018001d671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

