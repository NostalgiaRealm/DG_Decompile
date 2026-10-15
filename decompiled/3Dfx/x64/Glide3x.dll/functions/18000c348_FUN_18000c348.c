/*
 * FUN_18000c348 at 18000c348
 * bool __fastcall FUN_18000c348(longlong param_1)
 * Address ranges: 18000c348-18000c3d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000c348(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  lVar3 = *(longlong *)(lVar2 + 0xb88);
  *(longlong *)(lVar2 + 0xb88) = param_1;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0x684);
  *piVar1 = *piVar1 + 1;
  if (param_1 != lVar3) {
    FUN_18004a03c(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(ulonglong *)(param_1 + 0x33a8));
    FUN_18004a580(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(longlong *)(param_1 + 0x33a8));
  }
  return param_1 != lVar3;
}

