/*
 * FUN_180051e00 at 180051e00
 * undefined FUN_180051e00(void)
 * Address ranges: 180051e00-180051f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051e00(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  FUN_180101df0(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0 + 0x1bc0);
  if (*(int *)(param_1 + 2) != 0) {
    uVar5 = 0;
    iVar4 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      plVar6 = (longlong *)&DAT_00000008;
      goto LAB_180051e6c;
    }
    do {
      iVar4 = (int)uVar5;
      plVar6 = (longlong *)((uVar5 * 0x2e0 | 0x10) + param_1[1]);
LAB_180051e6c:
      lVar9 = *plVar6;
      if (*(int *)(lVar9 + 0x10) != 0) {
        uVar5 = 0;
        lVar10 = param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0;
        if (*(int *)(lVar9 + 0x10) == 0) {
          plVar8 = (longlong *)&DAT_00000008;
          plVar7 = (longlong *)&DAT_00000038;
          goto LAB_180051eb8;
        }
        do {
          lVar2 = *(longlong *)(lVar9 + 8) + uVar5 * 0x70;
          plVar8 = (longlong *)(lVar2 + 0x10);
          plVar7 = (longlong *)(lVar2 + 0x40);
LAB_180051eb8:
          if (*plVar8 != 0) {
            FUN_1800ee4f8(lVar10 + 0x22d8);
            (**(code **)(*(longlong *)*plVar8 + 0x10))();
          }
          if (*plVar7 != 0) {
            FUN_1800ee4f8(lVar10 + 0x22d8);
            (**(code **)(*(longlong *)*plVar7 + 0x10))();
          }
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(lVar9 + 0x10));
      }
      puVar3 = (undefined8 *)*plVar6;
      if (puVar3 != (undefined8 *)0x0) {
        thunk_FUN_180102fc0(*puVar3);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        FUN_180102fc0(puVar3,0x270);
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < *(uint *)(param_1 + 2));
  }
  (*__imp_KERNEL32_dll_DeleteCriticalSection)(param_1 + 5);
  thunk_FUN_180102fc0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

