/*
 * FUN_18019fdc0 at 18019fdc0
 * undefined FUN_18019fdc0(void)
 * Address ranges: 18019fdc0-18019fe97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019fdc0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  code *extraout_x11;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 2) != 0) {
    lVar4 = param_1[3];
    uVar2 = *(uint *)(param_1 + 4);
    uVar5 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      puVar6 = (undefined8 *)&DAT_00000008;
      goto LAB_18019fe2c;
    }
    do {
      puVar6 = (undefined8 *)(param_1[1] + uVar5 * 0x18 + 0x10);
LAB_18019fe2c:
      FUN_180205808(lVar4 + (ulonglong)uVar2 * 0x1ac0 + 0x22d8,*puVar6);
      (*(code *)puVar3)();
      (*extraout_x11)();
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 2));
  }
  FUN_1802229d8(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  FUN_1802229d8(0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

