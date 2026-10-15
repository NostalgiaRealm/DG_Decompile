/*
 * FUN_1800e1fc8 at 1800e1fc8
 * byte __fastcall FUN_1800e1fc8(longlong param_1, ulonglong param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)
 * Address ranges: 1800e1fc8-1800e202b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800e1fc8(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong *plVar1;
  byte extraout_var;
  
  plVar1 = *(longlong **)((param_2 & 0xffffffff) * 0x20 + param_1);
  (**(code **)(*plVar1 + 0xd8))
            (plVar1,param_3,param_4,param_5,param_6,param_7,&DAT_180103478,param_9);
  return extraout_var >> 7 ^ 1;
}

