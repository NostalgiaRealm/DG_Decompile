/*
 * FUN_18000d0f0 at 18000d0f0
 * undefined __cdecl FUN_18000d0f0(longlong * param_1, int param_2, uint param_3, uint param_4)
 * Address ranges: 18000d0f0-18000d17b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d0f0(longlong *param_1,int param_2,uint param_3,uint param_4)

{
  if (*(int *)((longlong)param_1 + (longlong)param_2 * 4 + 0x2a5c) != 0) {
    (**(code **)(*param_1 + 0x2e0))();
  }
  *(uint *)(param_1 + (longlong)param_2 * 0x34 + 0x5be) = param_3 >> 0x18;
  *(uint *)((longlong)param_1 + (longlong)param_2 * 0x1a0 + 0x2df4) = param_3 >> 0x10 & 0xff;
  *(uint *)(param_1 + (longlong)param_2 * 0x34 + 0x5bf) = param_3 >> 8 & 0xff;
  *(uint *)(param_1 + (longlong)param_2 * 0x34 + 0x5c0) = param_4 >> 0x18;
  *(uint *)((longlong)param_1 + (longlong)param_2 * 0x1a0 + 0x2e04) = param_4 >> 0x10 & 0xff;
  *(uint *)(param_1 + (longlong)param_2 * 0x34 + 0x5c1) = param_4 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

