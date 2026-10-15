/*
 * FUN_18000d018 at 18000d018
 * undefined __cdecl FUN_18000d018(longlong * param_1, uint param_2, uint param_3)
 * Address ranges: 18000d018-18000d093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d018(longlong *param_1,uint param_2,uint param_3)

{
  if ((int)param_1[0x546] != 0) {
    (**(code **)(*param_1 + 0x2e0))();
  }
  *(uint *)(param_1 + 0x65a) = param_2 >> 0x18;
  *(uint *)((longlong)param_1 + 0x32d4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x65b) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x65c) = param_3 >> 0x18;
  *(uint *)((longlong)param_1 + 0x32e4) = param_3 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x65d) = param_3 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

