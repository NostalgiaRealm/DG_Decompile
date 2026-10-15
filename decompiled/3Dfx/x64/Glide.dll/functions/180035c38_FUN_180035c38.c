/*
 * FUN_180035c38 at 180035c38
 * undefined __fastcall FUN_180035c38(longlong param_1, ulonglong param_2)
 * Address ranges: 180035c38-180035c7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035c38(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x180;
  uVar1 = *(uint *)(lVar2 + 0x2d38 + param_1);
  if (((byte)uVar1 & 5) == 4) {
    uVar1 = uVar1 & 0xfffffffd;
    *(uint *)(lVar2 + 0x2d38 + param_1) = uVar1;
    if ((*(int *)(lVar2 + 0x2cf4 + param_1) == 0xd) || (*(int *)(lVar2 + 0x2d04 + param_1) == 0xd))
    {
      *(uint *)(lVar2 + 0x2d38 + param_1) = uVar1 | 2;
    }
  }
  return;
}

