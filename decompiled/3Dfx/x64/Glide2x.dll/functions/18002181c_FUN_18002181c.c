/*
 * FUN_18002181c at 18002181c
 * uint __fastcall FUN_18002181c(longlong param_1)
 * Address ranges: 18002181c-18002186c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18002181c(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x3180) + 0x18);
  uVar2 = (uint)(((ulonglong)(*(uint *)(param_1 + 0xac) + 1) *
                 ((local_res8[0].QuadPart - *(longlong *)(*(longlong *)(param_1 + 0x3180) + 0x20)) %
                 (longlong)uVar1)) / uVar1);
  return -(uint)(uVar2 < *(uint *)(param_1 + 0xac)) & uVar2;
}

