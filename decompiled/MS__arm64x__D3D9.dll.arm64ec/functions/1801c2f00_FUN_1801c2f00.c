/*
 * FUN_1801c2f00 at 1801c2f00
 * undefined FUN_1801c2f00(void)
 * Address ranges: 1801c2f00-1801c307b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c2f00(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  uint uVar5;
  ulonglong uVar6;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x6820;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x6830) != 0) {
    do {
      uVar3 = (*(code *)puVar2)();
      (*extraout_x11)(uVar3,lVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x6830));
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *(undefined1 *)(param_1 + 0x2d0) = 0;
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(param_1);
    if (*(int *)(param_1 + 0xf30) != 0) {
      uVar6 = 0;
      if (*(int *)(param_1 + 0xf30) == 0) {
        puVar4 = (undefined8 *)&DAT_00000008;
        goto LAB_1801c2fd0;
      }
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xf28) + uVar6 * 0x18 + 0x10);
LAB_1801c2fd0:
        FUN_1802229d8(*puVar4,0x408);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xf30));
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0xf20));
    *(undefined8 *)(param_1 + 0xf20) = 0;
    *(undefined8 *)(param_1 + 0xf28) = 0;
    *(undefined4 *)(param_1 + 0xf30) = 0;
    *(undefined4 *)(param_1 + 0xf34) = 0;
    FUN_180108778(param_1,0);
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)();
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_02)();
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + 0xe10) + -8));
    *(undefined8 *)(param_1 + 0xe10) = 0;
    if (*(longlong *)(param_1 + 0xe90) != 0) {
      thunk_FUN_180223c84();
      *(undefined8 *)(param_1 + 0xe90) = 0;
    }
  }
  return;
}

