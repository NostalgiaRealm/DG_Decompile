/*
 * FUN_1800150c0 at 1800150c0
 * undefined __cdecl FUN_1800150c0(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, char param_7)
 * Address ranges: 1800150c0-180015143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800150c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)(param_1 + 0x5ac) = param_6;
  *(undefined4 *)(param_1 + 0x5aa) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2d54) = param_3;
  *(undefined4 *)(param_1 + 0x5ab) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2d5c) = param_5;
  *(uint *)(param_1 + 0x5a0) = -(uint)(param_7 != '\0');
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

