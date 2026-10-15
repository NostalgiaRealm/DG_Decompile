/*
 * FUN_180203e38 at 180203e38
 * undefined FUN_180203e38(void)
 * Address ranges: 180203e38-18020400b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180203e38(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  longlong extraout_x15;
  float fVar9;
  undefined1 auVar10 [16];
  
  auVar10 = FUN_180104f10();
  lVar6 = auVar10._8_8_;
  lVar2 = extraout_x15 * -0x10;
  thunk_FUN_1802236f8(auVar10._0_8_ + 0x620);
  *(undefined1 *)(lVar6 + 0xd69) = 1;
  uVar8 = 0;
  do {
    fVar9 = (float)uVar8 / 255.0;
    *(undefined4 *)(lVar6 + 0x40 + uVar8 * 0xc) = *(undefined4 *)(param_3 + uVar8 * 0xc);
    *(undefined4 *)(lVar6 + 0x44 + uVar8 * 0xc) = *(undefined4 *)(param_3 + 4 + uVar8 * 0xc);
    *(undefined4 *)(lVar6 + 0x48 + uVar8 * 0xc) = *(undefined4 *)(param_3 + 8 + uVar8 * 0xc);
    if (((0.003921569 <= ABS(*(float *)(param_3 + uVar8 * 0xc) - fVar9)) ||
        (0.003921569 <= ABS(*(float *)(param_3 + 4 + uVar8 * 0xc) - fVar9))) ||
       (bVar7 = 1, 0.003921569 <= ABS(*(float *)(param_3 + 8 + uVar8 * 0xc) - fVar9))) {
      bVar7 = 0;
    }
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar1;
    *(byte *)(lVar6 + 0xd69) = *(byte *)(lVar6 + 0xd69) & bVar7;
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
  } while (uVar1 < 0x100);
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar2) = 0;
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar5,&stack0xffffffffffffffc0 + lVar2);
  if (*(longlong *)(&stack0xffffffffffffffc0 + lVar2) != 0) {
    if (*(char *)(lVar6 + 0xd68) == '\0') {
      uVar5 = (*(code *)puVar3)(0x180224000);
      iVar4 = (*extraout_x11_00)(uVar5,&stack0xffffffffffffffc8 + lVar2);
      if (iVar4 == 0) {
        (*(code *)puVar3)(0x180225000);
        (*extraout_x11_01)(*(undefined4 *)(&stack0xffffffffffffffd0 + lVar2),
                           *(undefined4 *)(&stack0xffffffffffffffcc + lVar2),param_4,
                           *(undefined4 *)(&stack0xffffffffffffffd4 + lVar2),
                           &stack0xffffffffffffffd8 + lVar2,&stack0x00000ff8 + lVar2,param_3);
        uVar5 = (*(code *)puVar3)(0x180224000);
        (*extraout_x11_02)(uVar5,&stack0x00000fe0 + lVar2);
      }
    }
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_03)();
  }
  thunk_FUN_18022370c(auVar10._0_8_ + 0x620);
  return;
}

