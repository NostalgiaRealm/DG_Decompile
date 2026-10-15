/*
 * FUN_18005d0ac at 18005d0ac
 * undefined __cdecl FUN_18005d0ac(longlong param_1, longlong param_2)
 * Address ranges: 18005d0ac-18005d1d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d0ac(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_2 + 0xd98);
  if (uVar3 != 0xffffffff) {
    lVar6 = *(longlong *)(param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x2238);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
    uVar2 = uVar3 & 0xffff;
    uVar1 = uVar2 + 2;
    if (uVar2 < uVar1) {
      lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + (ulonglong)(uVar3 >> 0x10) * 0x10 + 8);
      do {
        uVar4 = -1L << ((ulonglong)uVar2 & 0x3f);
        uVar3 = (uVar2 & 0xffffffc0) + 0x40;
        if (uVar1 < uVar3) {
          uVar4 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar4;
        }
        *(ulonglong *)(lVar5 + (ulonglong)(uVar2 >> 6) * 8) =
             *(ulonglong *)(lVar5 + (ulonglong)(uVar2 >> 6) * 8) & (uVar4 ^ 0xffffffffffffffff);
        uVar2 = uVar3;
      } while (uVar3 < uVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
    lVar6 = param_2 + 0xd88;
    lVar5 = 0;
    do {
      FUN_180046680(*(longlong **)(param_1 + 0x1b500),*(ulonglong *)(lVar6 + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    lVar5 = 0;
    do {
      FUN_180048d98(param_1,*(longlong **)(lVar6 + lVar5 * 8));
      *(undefined8 *)(lVar6 + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x10))();
    *(undefined8 *)(param_2 + 0xd80) = 0;
    *(undefined4 *)(param_2 + 0xd98) = 0xffffffff;
  }
  return;
}

