/*
 * FUN_1800195f0 at 1800195f0
 * bool __cdecl FUN_1800195f0(longlong param_1)
 * Address ranges: 1800195f0-18001966f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800195f0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  lVar3 = *(longlong *)(lVar2 + 0xb88);
  *(longlong *)(lVar2 + 0xb88) = param_1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  *(int *)(lVar2 + 0x684) = *(int *)(lVar2 + 0x684) + 1;
  if (param_1 != lVar3) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
    FUN_1800460a8(*(longlong *)(uVar1 + 0xb18),*(ulonglong *)(param_1 + 0x3228),
                  *(ulonglong *)(uVar1 + 0xb10),uVar1,*(ulonglong *)(uVar1 + 0xb78));
    FUN_18004b540(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong *)(param_1 + 0x3228));
  }
  return param_1 != lVar3;
}

