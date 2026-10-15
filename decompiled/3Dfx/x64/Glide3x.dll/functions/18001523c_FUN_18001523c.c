/*
 * FUN_18001523c at 18001523c
 * uint __fastcall FUN_18001523c(longlong param_1)
 * Address ranges: 18001523c-18001528c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18001523c(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x3300) + 0x18);
  uVar2 = (uint)(((ulonglong)(*(uint *)(param_1 + 0xac) + 1) *
                 ((local_res8[0].QuadPart - *(longlong *)(*(longlong *)(param_1 + 0x3300) + 0x20)) %
                 (longlong)uVar1)) / uVar1);
  return -(uint)(uVar2 < *(uint *)(param_1 + 0xac)) & uVar2;
}

