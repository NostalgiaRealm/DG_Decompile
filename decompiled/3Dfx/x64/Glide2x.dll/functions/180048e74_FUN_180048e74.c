/*
 * FUN_180048e74 at 180048e74
 * undefined __fastcall FUN_180048e74(longlong param_1, undefined8 param_2)
 * Address ranges: 180048e74-180048eda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048e74(longlong param_1,undefined8 param_2)

{
  FUN_18005f374((undefined1 *)(param_1 + 0x20),0,0x660);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x66c) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x668) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
                    /* WARNING: Could not recover jumptable at 0x000180048ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x58))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

