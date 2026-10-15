/*
 * FUN_18004b480 at 18004b480
 * undefined __fastcall FUN_18004b480(longlong param_1, undefined8 param_2)
 * Address ranges: 18004b480-18004b4e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b480(longlong param_1,undefined8 param_2)

{
  FUN_180060f94((undefined1 *)(param_1 + 0x20),0,0x660);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x66c) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x668) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
                    /* WARNING: Could not recover jumptable at 0x00018004b4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x58))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

