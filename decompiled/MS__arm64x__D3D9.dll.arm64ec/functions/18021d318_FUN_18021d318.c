/*
 * FUN_18021d318 at 18021d318
 * undefined FUN_18021d318(void)
 * Address ranges: 18021d318-18021d417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021d318(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *extraout_x11;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x58) == 0) {
      puVar8 = (undefined8 *)&DAT_00000008;
      goto LAB_18021d368;
    }
    do {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + uVar6 * 0x18 + 0x10);
LAB_18021d368:
      plVar5 = (longlong *)*puVar8;
      if ((int)plVar5[1] != 0) {
        uVar7 = 0;
        do {
          lVar4 = *plVar5;
          lVar3 = uVar7 << 4;
          (*(code *)puVar2)();
          (*extraout_x11)(param_1,*(undefined8 *)(lVar4 + lVar3));
          plVar5 = (longlong *)*puVar8;
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(plVar5 + 1));
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_1802229d8(*plVar5);
        FUN_1802229d8(plVar5,0x10);
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x58));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  thunk_FUN_180223860(param_1 + 0x18);
  return;
}

