/*
 * FUN_180018f70 at 180018f70
 * undefined __cdecl FUN_180018f70(longlong * param_1, byte param_2)
 * Address ranges: 180018f70-180018fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018f70(longlong *param_1,byte param_2)

{
  FUN_180016b90((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  *(uint *)((longlong)param_1 + 0x2afc) = (uint)param_2;
  *(uint *)(param_1 + 0x597) = -(uint)(param_2 != 0);
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined2 *)(param_1 + 0x58f) = 0x101;
  return;
}

