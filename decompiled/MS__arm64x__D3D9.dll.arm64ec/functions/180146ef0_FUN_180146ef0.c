/*
 * FUN_180146ef0 at 180146ef0
 * undefined FUN_180146ef0(void)
 * Address ranges: 180146ef0-180146f83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180146ef0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int in_w6;
  
  FUN_18014c840();
  *(byte *)(param_1 + 0xf68f) =
       (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0x10180) ^ 0xffffffff)) != 0 |
       *(byte *)(param_1 + 0xf68f);
  *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
  *(bool *)(param_1 + 0x10184) = in_w6 != 0;
  return;
}

