/*
 * FUN_1801421e0 at 1801421e0
 * undefined FUN_1801421e0(void)
 * Address ranges: 1801421e0-180142343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801421e0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lVar9 = param_1[3];
  *param_1 = &PTR_FUN_18022b0f0;
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(lVar9 + 0x10) != 0) {
    uVar8 = 0;
    uVar2 = *(uint *)(param_1 + 2);
    lVar7 = param_1[1];
    if (*(int *)(lVar9 + 0x10) == 0) {
      plVar5 = (longlong *)&DAT_00000008;
      plVar10 = (longlong *)&DAT_00000010;
      goto LAB_180142258;
    }
    do {
      plVar5 = (longlong *)((uVar8 << 5 | 0x10) + *(longlong *)(lVar9 + 8));
      plVar10 = (longlong *)((uVar8 << 5 | 0x18) + *(longlong *)(lVar9 + 8));
LAB_180142258:
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        thunk_FUN_1802236f8(lVar7 + 0x620);
        lVar4 = lVar7 + (ulonglong)uVar2 * 0x18c0;
        if (lVar6 == *(longlong *)(lVar4 + 0xba8)) {
          *(undefined8 *)(lVar4 + 0xba8) = 0;
        }
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11)(lVar6);
        thunk_FUN_18022370c(lVar7 + 0x620);
      }
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        thunk_FUN_1802236f8(lVar7 + 0x620);
        lVar4 = lVar7 + (ulonglong)uVar2 * 0x18c0;
        if (lVar6 == *(longlong *)(lVar4 + 3000)) {
          *(undefined8 *)(lVar4 + 3000) = 0;
        }
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_00)(lVar6);
        thunk_FUN_18022370c(lVar7 + 0x620);
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(lVar9 + 0x10));
  }
  FUN_1802229d8(param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022b0e0;
  param_1[4] = &PTR_FUN_18022c4e0;
  return;
}

