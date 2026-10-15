/*
 * FUN_180033e00 at 180033e00
 * undefined FUN_180033e00(void)
 * Address ranges: 180033e00-180033f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033e00(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    lVar7 = param_2 + (ulonglong)param_3 * 0x18c0;
    lVar6 = param_2 + (ulonglong)param_3 * 0x18c0;
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar2 = (undefined8 *)&DAT_00000008;
      puVar5 = (undefined8 *)&DAT_00000010;
      goto LAB_180033e74;
    }
    do {
      puVar2 = (undefined8 *)((uVar4 << 5 | 0x10) + *(longlong *)(param_1 + 8));
      puVar5 = (undefined8 *)((uVar4 << 5 | 0x18) + *(longlong *)(param_1 + 8));
LAB_180033e74:
      plVar3 = (longlong *)*puVar2;
      if (plVar3 != (longlong *)0x0) {
        (*__imp_KERNEL32_dll_EnterCriticalSection)(param_2 + 0x620);
        if (plVar3 == *(longlong **)(lVar7 + 0xba8)) {
          *(undefined8 *)(lVar7 + 0xba8) = 0;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_2 + 0x620);
      }
      plVar3 = (longlong *)*puVar5;
      if (plVar3 != (longlong *)0x0) {
        (*__imp_KERNEL32_dll_EnterCriticalSection)(param_2 + 0x620);
        if (plVar3 == *(longlong **)(lVar6 + 3000)) {
          *(undefined8 *)(lVar6 + 3000) = 0;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_2 + 0x620);
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  return;
}

