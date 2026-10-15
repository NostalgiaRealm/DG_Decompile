/*
 * FUN_1800fa118 at 1800fa118
 * undefined FUN_1800fa118(void)
 * Address ranges: 1800fa118-1800fa24f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fa118(longlong param_1,longlong param_2)

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
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
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
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
    lVar6 = param_2 + 0xd88;
    lVar5 = 0;
    do {
      FUN_1800f2030(*(undefined8 *)(param_1 + 0x1b500),*(undefined8 *)(lVar6 + lVar5 * 8),0);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    lVar5 = 0;
    do {
      FUN_1800ed018(param_1,*(undefined8 *)(lVar6 + lVar5 * 8));
      *(undefined8 *)(lVar6 + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x10))();
    *(undefined8 *)(param_2 + 0xd80) = 0;
    *(undefined4 *)(param_2 + 0xd98) = 0xffffffff;
  }
  return;
}

