/*
 * FUN_1800e1d04 at 1800e1d04
 * longlong * __fastcall FUN_1800e1d04(longlong param_1, longlong * param_2, uint param_3, int param_4)
 * Address ranges: 1800e1d04-1800e1d49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800e1d04(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_3 >> 0x10) * 0x10)
              + 0x48))();
  *param_2 = *param_2 + (ulonglong)(((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x20));
  return param_2;
}

