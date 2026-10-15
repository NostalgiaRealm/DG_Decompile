/*
 * FUN_18001a440 at 18001a440
 * bool __cdecl FUN_18001a440(longlong param_1)
 * Address ranges: 18001a440-18001a4bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18001a440(longlong param_1)

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
    FUN_180046ef8(*(longlong *)(uVar1 + 0xb18),*(ulonglong *)(param_1 + 0x3228),
                  *(ulonglong *)(uVar1 + 0xb10),uVar1,*(ulonglong *)(uVar1 + 0xb78));
    FUN_18004c390(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong *)(param_1 + 0x3228));
  }
  return param_1 != lVar3;
}

