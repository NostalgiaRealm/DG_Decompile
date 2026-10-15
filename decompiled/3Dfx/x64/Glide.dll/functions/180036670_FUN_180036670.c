/*
 * FUN_180036670 at 180036670
 * undefined __fastcall FUN_180036670(longlong * param_1, uint param_2)
 * Address ranges: 180036670-1800366c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036670(longlong *param_1,uint param_2)

{
  if ((int)param_1[0x532] != 0) {
    (**(code **)(*param_1 + 0x2a0))();
  }
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(uint *)(param_1 + 0x586) = param_2 >> 0x18;
  *(uint *)((longlong)param_1 + 0x2c34) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x587) = param_2 >> 8 & 0xff;
  return;
}

