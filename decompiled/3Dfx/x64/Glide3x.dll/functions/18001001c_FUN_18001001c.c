/*
 * FUN_18001001c at 18001001c
 * undefined __fastcall FUN_18001001c(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001001c-180010085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001001c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000fd5c(param_1,param_2,param_3,param_4);
  FUN_18000f41c(param_1,'\x01');
  *(undefined4 *)(param_1 + 0x2c44) = *(undefined4 *)(param_1 + 0x2c14);
  *(undefined4 *)(param_1 + 0x2c40) = *(undefined4 *)(param_1 + 0x2c10);
  *(undefined4 *)(param_1 + 0x2c48) = *(undefined4 *)(param_1 + 0x2c18);
  *(undefined4 *)(param_1 + 0x2c68) = *(undefined4 *)(param_1 + 0x2c38);
  FUN_18000f3a4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00018001007f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

