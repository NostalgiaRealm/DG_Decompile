/*
 * FUN_1800acdf0 at 1800acdf0
 * undefined __fastcall FUN_1800acdf0(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4, undefined8 * param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, byte param_9, byte param_10, undefined1 param_11, undefined8 param_12, undefined8 param_13, byte param_14)
 * Address ranges: 1800acdf0-1800aceb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800acdf0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  byte param_9,byte param_10,undefined1 param_11,undefined8 param_12,
                  undefined8 param_13,byte param_14)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800c0d70(puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  param_10,param_11,param_12,param_13,param_14);
  }
  return;
}

