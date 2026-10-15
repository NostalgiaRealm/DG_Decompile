/*
 * FUN_1004ef80 at 1004ef80
 * undefined FUN_1004ef80(void)
 * Address ranges: 1004ef80-1004f04b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1004ef80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10081cb0(0x17e8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_10050530(puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *(undefined8 *)(puVar1 + 0x5f7) = 0;
    puVar1[0x5f9] = 0;
    *puVar1 = &DAT_1009c940;
    puVar1[0x5f6] = &PTR_FUN_1009c93c;
  }
  return puVar1;
}

