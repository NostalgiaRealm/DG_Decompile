/*
 * FUN_180012b04 at 180012b04
 * undefined __fastcall FUN_180012b04(longlong * param_1, uint param_2)
 * Address ranges: 180012b04-180012b5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012b04(longlong *param_1,uint param_2)

{
  if ((int)param_1[0x541] != 0) {
    (**(code **)(*param_1 + 0x2e0))();
  }
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(uint *)(param_1 + 0x59a) = param_2 >> 0x18;
  *(uint *)((longlong)param_1 + 0x2cd4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x59b) = param_2 >> 8 & 0xff;
  return;
}

