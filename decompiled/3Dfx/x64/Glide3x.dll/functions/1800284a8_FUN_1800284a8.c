/*
 * FUN_1800284a8 at 1800284a8
 * undefined __fastcall FUN_1800284a8(longlong param_1, ulonglong param_2)
 * Address ranges: 1800284a8-1800284ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800284a8(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1a0;
  uVar1 = *(uint *)(lVar2 + 0x2dd8 + param_1);
  if (((byte)uVar1 & 5) == 4) {
    uVar1 = uVar1 & 0xfffffffd;
    *(uint *)(lVar2 + 0x2dd8 + param_1) = uVar1;
    if ((*(int *)(lVar2 + 0x2d94 + param_1) == 0xd) || (*(int *)(lVar2 + 0x2da4 + param_1) == 0xd))
    {
      *(uint *)(lVar2 + 0x2dd8 + param_1) = uVar1 | 2;
    }
  }
  return;
}

