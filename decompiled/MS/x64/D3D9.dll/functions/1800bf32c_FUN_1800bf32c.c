/*
 * FUN_1800bf32c at 1800bf32c
 * longlong __fastcall FUN_1800bf32c(longlong param_1, ulonglong param_2)
 * Address ranges: 1800bf32c-1800bf391
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800bf32c(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar7 = 0;
    uVar6 = uVar1;
    do {
      uVar4 = uVar6 + uVar7 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar3 = *(ulonglong *)(lVar2 + uVar5 * 0x248);
      if (uVar3 <= param_2) {
        if (param_2 <= uVar3) break;
        uVar7 = uVar4 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar7);
    if (((uint)uVar5 != uVar1) && (*(ulonglong *)(uVar5 * 0x248 + lVar2) == param_2)) {
      return lVar2 + 0x10 + uVar5 * 0x248;
    }
  }
  return 0;
}

