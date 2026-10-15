/*
 * FUN_10071430 at 10071430
 * undefined FUN_10071430(void)
 * Address ranges: 10071430-1007147f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071430(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[0xc] = param_7;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
                    /* WARNING: Could not recover jumptable at 0x1007147c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_1009d08c)(param_1 + 3);
  return;
}

