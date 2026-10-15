/*
 * FUN_10034140 at 10034140
 * undefined FUN_10034140(void)
 * Address ranges: 10034140-10034177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10034140(int param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong extraout_x1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  FUN_10033b30(*(undefined4 *)(param_1 + 0x1c),param_2);
  puVar1 = (undefined8 *)extraout_x1;
  puVar1[1] = uStack_18;
  *puVar1 = local_20;
  *(undefined4 *)(puVar1 + 2) = local_10;
  return extraout_x1 & 0xffffffff;
}

