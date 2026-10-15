/*
 * FUN_18000ffa4 at 18000ffa4
 * undefined __fastcall FUN_18000ffa4(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000ffa4-18001001b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ffa4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000fd5c(param_1,param_2,param_3,param_4);
  FUN_18000f41c(param_1,'\x01');
  *(undefined4 *)(param_1 + 0x2c4c) = *(undefined4 *)(param_1 + 0x2c1c);
  *(undefined4 *)(param_1 + 0x2c50) = *(undefined4 *)(param_1 + 0x2c20);
  *(undefined8 *)(param_1 + 0x2c58) = *(undefined8 *)(param_1 + 0x2c28);
  *(undefined4 *)(param_1 + 0x2c60) = *(undefined4 *)(param_1 + 0x2c30);
  *(undefined4 *)(param_1 + 0x2c64) = *(undefined4 *)(param_1 + 0x2c34);
  FUN_18000f3a4(param_1);
                    /* WARNING: Could not recover jumptable at 0x000180010015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

