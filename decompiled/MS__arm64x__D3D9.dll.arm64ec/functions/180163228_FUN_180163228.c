/*
 * FUN_180163228 at 180163228
 * undefined FUN_180163228(void)
 * Address ranges: 180163228-180163357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180163228(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_1[3];
  *param_1 = &PTR_FUN_18022bca0;
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar5 = 0;
    lVar8 = param_1[1] + (ulonglong)*(uint *)(param_1 + 2) * 0x1ac0;
    if (*(int *)(lVar7 + 0x10) == 0) {
      plVar6 = (longlong *)&DAT_00000008;
      plVar4 = (longlong *)&DAT_00000038;
      goto LAB_1801632ac;
    }
    do {
      lVar2 = *(longlong *)(lVar7 + 8) + uVar5 * 0x70;
      plVar6 = (longlong *)(lVar2 + 0x10);
      plVar4 = (longlong *)(lVar2 + 0x40);
LAB_1801632ac:
      if (*plVar6 != 0) {
        FUN_180205808(lVar8 + 0x22d8);
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11)();
      }
      if (*plVar4 != 0) {
        FUN_180205808(lVar8 + 0x22d8);
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_00)();
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(lVar7 + 0x10));
  }
  FUN_1802229d8(param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022b0e0;
  param_1[4] = &PTR_FUN_18022c4e0;
  return;
}

