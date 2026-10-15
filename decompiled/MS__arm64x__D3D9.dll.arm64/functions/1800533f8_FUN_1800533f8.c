/*
 * FUN_1800533f8 at 1800533f8
 * undefined FUN_1800533f8(void)
 * Address ranges: 1800533f8-1800534ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800533f8(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1[3];
  *param_1 = &PTR_FUN_180234640;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar3 = 0;
    lVar7 = param_1[1] + (ulonglong)*(uint *)(param_1 + 2) * 0x1ac0;
    if (*(int *)(lVar6 + 0x10) == 0) {
      plVar5 = (longlong *)&DAT_00000008;
      plVar4 = (longlong *)&DAT_00000038;
      goto LAB_180053470;
    }
    do {
      lVar2 = *(longlong *)(lVar6 + 8) + uVar3 * 0x70;
      plVar5 = (longlong *)(lVar2 + 0x10);
      plVar4 = (longlong *)(lVar2 + 0x40);
LAB_180053470:
      if (*plVar5 != 0) {
        FUN_1800ee4f8(lVar7 + 0x22d8);
        (**(code **)(*(longlong *)*plVar5 + 0x10))();
      }
      if (*plVar4 != 0) {
        FUN_1800ee4f8(lVar7 + 0x22d8);
        (**(code **)(*(longlong *)*plVar4 + 0x10))();
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(lVar6 + 0x10));
  }
  thunk_FUN_180102fc0(param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_D3DPERF_GetStatus_180234120;
  param_1[4] = &PTR_FUN_180234a00;
  return;
}

