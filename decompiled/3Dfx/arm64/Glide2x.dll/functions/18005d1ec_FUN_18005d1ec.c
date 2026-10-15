/*
 * FUN_18005d1ec at 18005d1ec
 * undefined __cdecl FUN_18005d1ec(longlong param_1, longlong param_2)
 * Address ranges: 18005d1ec-18005d32b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d1ec(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar6 = 0;
  lVar8 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      plVar4 = *(longlong **)(param_2 + 0xda0 + uVar6 * 8);
      if (plVar4 != (longlong *)0x0) {
        FUN_180048d98(param_1,plVar4);
        *(undefined8 *)(param_2 + 0xda0 + uVar6 * 8) = 0;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  uVar1 = *(uint *)(param_2 + 0xdb0);
  if (uVar1 != 0xffffffff) {
    lVar7 = *(longlong *)(lVar8 + 0x2230);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
    uVar3 = uVar1 & 0xffff;
    uVar2 = uVar3 + 2;
    if (uVar3 < uVar2) {
      lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (ulonglong)(uVar1 >> 0x10) * 0x10 + 8);
      do {
        uVar6 = -1L << ((ulonglong)uVar3 & 0x3f);
        uVar1 = (uVar3 & 0xffffffc0) + 0x40;
        if (uVar2 < uVar1) {
          uVar6 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar2 & 0x3f) & uVar6;
        }
        *(ulonglong *)(lVar5 + (ulonglong)(uVar3 >> 6) * 8) =
             *(ulonglong *)(lVar5 + (ulonglong)(uVar3 >> 6) * 8) & (uVar6 ^ 0xffffffffffffffff);
        uVar3 = uVar1;
      } while (uVar1 < uVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
  }
  uVar1 = *(uint *)(param_2 + 0xdb4);
  if (uVar1 != 0xffffffff) {
    lVar8 = *(longlong *)(lVar8 + 0x2238);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x28));
    FUN_180049988(lVar8,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

