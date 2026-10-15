/*
 * FUN_18008c268 at 18008c268
 * undefined FUN_18008c268(void)
 * Address ranges: 18008c268-18008c593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008c268(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (*(longlong *)(param_1 + 0x1cf10) != 0) {
    uVar8 = 0;
    uVar3 = *(uint *)(param_1 + 0x1d148);
    lVar6 = *(longlong *)(param_1 + 0x1d140);
    if (*(int *)(param_1 + 0x1d138) != 0) {
      if (*(int *)(param_1 + 0x1d138) == 0) {
        puVar9 = (undefined8 *)&DAT_00000008;
        goto LAB_18008c2ec;
      }
      do {
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x1d130) + uVar8 * 0x18 + 0x10);
LAB_18008c2ec:
        FUN_1800ee4f8(lVar6 + (ulonglong)uVar3 * 0x1ac0 + 0x22d8,*puVar9);
        (**(code **)(*(longlong *)*puVar9 + 0x10))();
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x1d138));
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x1d128));
    *(undefined4 *)(param_1 + 0x1d138) = 0;
    *(undefined8 *)(param_1 + 0x1d128) = 0;
    *(undefined8 *)(param_1 + 0x1d130) = 0;
    *(undefined4 *)(param_1 + 0x1d13c) = 0;
    FUN_180101df0(*(longlong *)(param_1 + 0x1cf18) + 0x12c0);
    FUN_1800e8548(*(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1508) + 8,0);
    FUN_1800ed018(*(undefined8 *)(param_1 + 0x1cf10),*(undefined8 *)(param_1 + 0x1d150));
    *(undefined8 *)(param_1 + 0x1d150) = 0;
    uVar3 = *(uint *)(param_1 + 0x1d158);
    if (uVar3 != 0xffffffff) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
      uVar2 = uVar3 & 0xffff;
      uVar1 = uVar2 + 1;
      if (uVar2 < uVar1) {
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + (ulonglong)(uVar3 >> 0x10) * 0x10 + 8);
        do {
          uVar8 = -1L << ((ulonglong)uVar2 & 0x3f);
          uVar3 = (uVar2 & 0xffffffc0) + 0x40;
          if (uVar1 < uVar3) {
            uVar8 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar8;
          }
          *(ulonglong *)(lVar7 + (ulonglong)(uVar2 >> 6) * 8) =
               *(ulonglong *)(lVar7 + (ulonglong)(uVar2 >> 6) * 8) & (uVar8 ^ 0xffffffffffffffff);
          uVar2 = uVar3;
        } while (uVar3 < uVar1);
      }
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
    }
    FUN_1800ed018(*(undefined8 *)(param_1 + 0x1cf10),*(undefined8 *)(param_1 + 0x1cf20));
    *(undefined8 *)(param_1 + 0x1cf20) = 0;
    lVar6 = *(longlong *)(param_1 + 0x1cf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x1ac0;
    *(longlong *)(param_1 + 0x1cf18) = lVar6 + 0x900;
    FUN_1800ee848(lVar6 + 0x22d8,*(undefined8 *)(param_1 + 0x1d120));
    FUN_180102fc0(*(undefined8 *)(param_1 + 0x1d120),0x10);
    *(undefined8 *)(param_1 + 0x1d120) = 0;
    if (*(longlong *)(param_1 + 0x1cfc8) != 0) {
      FUN_1800380e0(*(longlong *)(param_1 + 0x1cfc8),1);
    }
    *(undefined8 *)(param_1 + 0x1cfc8) = 0;
    if (*(longlong *)(param_1 + 0x1cfd0) != 0) {
      FUN_1800380e0(*(longlong *)(param_1 + 0x1cfd0),1);
    }
    *(undefined8 *)(param_1 + 0x1cfd0) = 0;
    if (*(longlong *)(param_1 + 0x1d118) != 0) {
      FUN_1800ee4f8(*(longlong *)(param_1 + 0x1cf18) + 0x19d8);
    }
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1 + 0x1cfd8 + lVar6 * 8) != 0) {
        FUN_1800ee4f8(*(longlong *)(param_1 + 0x1cf18) + 0x19d8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x28);
    FUN_1800ee430(*(longlong *)(param_1 + 0x1cf18) + 0x19d8,*(undefined8 *)(param_1 + 0x1cf28));
    if (*(longlong *)(param_1 + 0x1cf28) != 0) {
      FUN_1800f1380(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf10) + 0x1b500),
                    *(longlong *)(param_1 + 0x1cf28),0,1);
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1cf28) + 0x10))();
    *(undefined8 *)(param_1 + 0x1cf28) = 0;
    uVar5 = FUN_1800ed150(uVar5,1,param_1 + 0x1d118);
    FUN_1800ed150(uVar5,0x28,param_1 + 0x1cfd8);
    FUN_180001550(*(longlong *)(param_1 + 0x1cf10) + 0x618,0,param_1);
    FUN_1800f9060(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
    FUN_1800e12c8(*(undefined8 *)(param_1 + 0x1cf10));
    pcVar4 = __imp_KERNEL32_dll_CloseHandle;
    *(undefined8 *)(param_1 + 0x1cf10) = 0;
    (*pcVar4)(*(undefined8 *)(param_1 + 0x1d170));
    *(undefined8 *)(param_1 + 0x1d170) = 0;
  }
  return;
}

