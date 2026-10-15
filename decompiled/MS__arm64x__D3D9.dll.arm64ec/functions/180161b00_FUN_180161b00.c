/*
 * FUN_180161b00 at 180161b00
 * undefined FUN_180161b00(void)
 * Address ranges: 180161b00-180161c9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180161b00(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  
  FUN_180221ec0(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0 + 0x1bc0);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 2) != 0) {
    uVar8 = 0;
    iVar7 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      plVar10 = (longlong *)&DAT_00000008;
      goto LAB_180161b70;
    }
    do {
      iVar7 = (int)uVar8;
      plVar10 = (longlong *)((uVar8 * 0x2e0 | 0x10) + param_1[1]);
LAB_180161b70:
      lVar11 = *plVar10;
      if (*(int *)(lVar11 + 0x10) != 0) {
        uVar8 = 0;
        lVar4 = param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0;
        if (*(int *)(lVar11 + 0x10) == 0) {
          plVar9 = (longlong *)&DAT_00000008;
          plVar5 = (longlong *)&DAT_00000038;
          goto LAB_180161bc8;
        }
        do {
          lVar2 = *(longlong *)(lVar11 + 8) + uVar8 * 0x70;
          plVar9 = (longlong *)(lVar2 + 0x10);
          plVar5 = (longlong *)(lVar2 + 0x40);
LAB_180161bc8:
          if (*plVar9 != 0) {
            FUN_180205808(lVar4 + 0x22d8);
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11)();
          }
          if (*plVar5 != 0) {
            FUN_180205808(lVar4 + 0x22d8);
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11_00)();
          }
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar11 + 0x10));
      }
      puVar6 = (undefined8 *)*plVar10;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1802229d8(*puVar6);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        FUN_1802229d8(puVar6,0x270);
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
    } while (iVar7 + 1U < *(uint *)(param_1 + 2));
  }
  thunk_FUN_180223860(param_1 + 5);
  FUN_1802229d8(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

