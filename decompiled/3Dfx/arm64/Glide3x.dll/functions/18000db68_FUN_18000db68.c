/*
 * FUN_18000db68 at 18000db68
 * bool __cdecl FUN_18000db68(longlong param_1)
 * Address ranges: 18000db68-18000dbe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000db68(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  lVar3 = *(longlong *)(lVar2 + 0xb88);
  *(longlong *)(lVar2 + 0xb88) = param_1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  *(int *)(lVar2 + 0x684) = *(int *)(lVar2 + 0x684) + 1;
  if (param_1 != lVar3) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
    FUN_180049c38(*(longlong *)(uVar1 + 0xb18),*(ulonglong *)(param_1 + 0x33a8),
                  *(ulonglong *)(uVar1 + 0xb10),uVar1,*(ulonglong *)(uVar1 + 0xb78));
    FUN_18004f0d0(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                  *(longlong *)(param_1 + 0x33a8));
  }
  return param_1 != lVar3;
}

