/*
 * FUN_18000b9a0 at 18000b9a0
 * undefined __cdecl FUN_18000b9a0(longlong param_1, longlong param_2, ulonglong param_3, undefined4 param_4, uint param_5)
 * Address ranges: 18000b9a0-18000ba17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b9a0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                  uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = param_3 & 0xffffffff;
  puVar1 = (undefined4 *)(param_1 + uVar5 * 0x18);
  bVar3 = (&DAT_180066988)[uVar5];
  *puVar1 = param_4;
  *(ulonglong *)(puVar1 + 4) = param_2 + (ulonglong)bVar3 * 4;
  uVar4 = *(ushort *)(&DAT_180066958 + uVar5 * 2);
  uVar6 = *(uint *)(param_1 + 0x150);
  uVar2 = uVar6 & uVar4;
  if ((param_5 & 1) == 0) {
    if (uVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + puVar1[2] * -4;
    uVar6 = uVar6 & (uVar4 ^ 0xffffffff);
  }
  else {
    if (uVar2 != 0) {
      return;
    }
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + puVar1[2] * 4;
    uVar6 = uVar6 | uVar4;
  }
  *(uint *)(param_1 + 0x150) = uVar6;
  return;
}

