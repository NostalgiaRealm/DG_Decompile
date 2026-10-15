/*
 * FUN_180141d50 at 180141d50
 * undefined FUN_180141d50(void)
 * Address ranges: 180141d50-180141e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180141d50(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong *plVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      plVar4 = (longlong *)&DAT_00000008;
      plVar7 = (longlong *)&DAT_00000010;
      goto LAB_180141db4;
    }
    do {
      plVar4 = (longlong *)((uVar6 << 5 | 0x10) + *(longlong *)(param_1 + 8));
      plVar7 = (longlong *)((uVar6 << 5 | 0x18) + *(longlong *)(param_1 + 8));
LAB_180141db4:
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        thunk_FUN_1802236f8(param_2 + 0x620);
        lVar3 = param_2 + (ulonglong)param_3 * 0x18c0;
        if (lVar5 == *(longlong *)(lVar3 + 0xba8)) {
          *(undefined8 *)(lVar3 + 0xba8) = 0;
        }
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11)(lVar5);
        thunk_FUN_18022370c(param_2 + 0x620);
      }
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        thunk_FUN_1802236f8(param_2 + 0x620);
        lVar3 = param_2 + (ulonglong)param_3 * 0x18c0;
        if (lVar5 == *(longlong *)(lVar3 + 3000)) {
          *(undefined8 *)(lVar3 + 3000) = 0;
        }
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_00)(lVar5);
        thunk_FUN_18022370c(param_2 + 0x620);
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x10));
  }
  return;
}

