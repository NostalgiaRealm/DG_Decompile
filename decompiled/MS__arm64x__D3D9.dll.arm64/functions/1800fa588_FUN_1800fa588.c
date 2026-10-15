/*
 * FUN_1800fa588 at 1800fa588
 * undefined FUN_1800fa588(void)
 * Address ranges: 1800fa588-1800fa6d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fa588(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar6 = 0;
  lVar8 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      if (*(longlong *)(param_2 + 0xda0 + uVar6 * 8) != 0) {
        FUN_1800ed018(param_1);
        *(undefined8 *)(param_2 + 0xda0 + uVar6 * 8) = 0;
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  uVar1 = *(uint *)(param_2 + 0xdb0);
  if (uVar1 != 0xffffffff) {
    lVar7 = *(longlong *)(lVar8 + 0x2230);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar7 + 0x28);
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
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar7 + 0x28);
  }
  iVar4 = *(int *)(param_2 + 0xdb4);
  if (iVar4 != -1) {
    lVar8 = *(longlong *)(lVar8 + 0x2238);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar8 + 0x28);
    FUN_1800e70e0(lVar8,iVar4,2);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar8 + 0x28);
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

