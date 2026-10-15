/*
 * FUN_1800162c0 at 1800162c0
 * char __fastcall FUN_1800162c0(longlong * param_1, byte param_2)
 * Address ranges: 1800162c0-180016316
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800162c0(longlong *param_1,byte param_2)

{
  FUN_1800144d0((longlong *)param_1[0x660]);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  *(uint *)((longlong)param_1 + 0x2afc) = (uint)param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined2 *)(param_1 + 0x58f) = 0x101;
  *(uint *)(param_1 + 0x597) = -(uint)(param_2 != 0);
  return -param_2;
}

