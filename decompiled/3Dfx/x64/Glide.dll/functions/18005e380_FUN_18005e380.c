/*
 * FUN_18005e380 at 18005e380
 * undefined4 * __fastcall FUN_18005e380(undefined4 * param_1)
 * Address ranges: 18005e380-18005e3ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_18005e380(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)((longlong)param_1 + 0x205) = 0;
  *(undefined1 *)((longlong)param_1 + 0x206) = 0;
  *(undefined1 *)((longlong)param_1 + 0x207) = 0;
  FUN_18005f814((undefined1 *)(param_1 + 0x22),0,0x140);
  return param_1;
}

