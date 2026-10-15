/*
 * FUN_180057788 at 180057788
 * undefined __cdecl FUN_180057788(undefined8 param_1, longlong param_2, ulonglong param_3, ulonglong param_4, undefined4 param_5)
 * Address ranges: 180057788-180057803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057788(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  FUN_18004ec28(*(ulonglong *)(param_2 + 0x1508),param_4,0,0,0x2000);
  FUN_18004ec28(*(ulonglong *)(param_2 + 0x1508),param_3,0,0,0x1000);
  FUN_18004fcf8(*(longlong *)(param_2 + 0x1508),param_3,0,param_4,0,param_5);
  return;
}

