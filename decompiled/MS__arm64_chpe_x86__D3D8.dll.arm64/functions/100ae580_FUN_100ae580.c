/*
 * FUN_100ae580 at 100ae580
 * undefined FUN_100ae580(void)
 * Address ranges: 100ae580-100ae5b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100ae580(int param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong extraout_x1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  FUN_100adf70(*(undefined4 *)(param_1 + 0x1c),param_2);
  puVar1 = (undefined8 *)extraout_x1;
  puVar1[1] = uStack_18;
  *puVar1 = local_20;
  *(undefined4 *)(puVar1 + 2) = local_10;
  return extraout_x1 & 0xffffffff;
}

