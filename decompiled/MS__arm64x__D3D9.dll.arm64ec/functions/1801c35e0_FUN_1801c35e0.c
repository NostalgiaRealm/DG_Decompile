/*
 * FUN_1801c35e0 at 1801c35e0
 * undefined FUN_1801c35e0(void)
 * Address ranges: 1801c35e0-1801c37a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c35e0(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined8 uVar9;
  ulonglong uVar10;
  
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  uVar10 = (ulonglong)param_2;
  lVar2 = param_1 + uVar10 * 8;
  if (param_3 == *(longlong *)(lVar2 + 0x13b8)) {
    return;
  }
  if (param_4 == 0) {
    if (param_5 == 0) {
      bVar1 = false;
      uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
      (*extraout_x11_01)(uVar9,uVar10,0,0,0);
      param_5 = 0;
      goto LAB_1801c36f0;
    }
    uVar9 = *(undefined8 *)(param_5 + 0xe0);
    iVar5 = *(int *)(param_5 + 0xf8);
  }
  else {
    uVar9 = *(undefined8 *)(param_4 + 0x58);
    iVar5 = *(int *)(param_4 + 0x74);
    param_5 = param_4;
  }
  bVar1 = iVar5 - 0x28U < 2;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_5);
  *(uint *)(param_5 + 0x38) = 1 << (ulonglong)(param_2 + 0x10 & 0x1f) | *(uint *)(param_5 + 0x38);
  uVar4 = (*(code *)puVar3)(0x180225000);
  (*extraout_x11_00)(uVar4,uVar10,0,uVar9,0);
LAB_1801c36f0:
  lVar8 = *(longlong *)(lVar2 + 0x13b8);
  if (lVar8 != 0) {
    *(uint *)(lVar8 + 0x38) =
         *(uint *)(lVar8 + 0x38) & (1 << (ulonglong)(param_2 + 0x10 & 0x1f) ^ 0xffffffffU);
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_02)();
  }
  *(longlong *)(lVar2 + 0x13b8) = param_5;
  if ((param_5 == 0) || (*(char *)(param_5 + 0x3e) == '\0')) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  uVar6 = 1 << (ulonglong)(param_2 & 0x1f);
  *(uint *)(&DAT_000067fc + param_1) =
       iVar5 << (ulonglong)(param_2 & 0x1f) |
       *(uint *)(&DAT_000067fc + param_1) & (uVar6 ^ 0xffffffff);
  if (bVar1) {
    uVar7 = *(uint *)(param_1 + 0x6800) | uVar6;
    uVar6 = *(uint *)(param_1 + 0x6804) | uVar6;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x6800) & (uVar6 ^ 0xffffffff);
    uVar6 = *(uint *)(param_1 + 0x6804) & (uVar6 ^ 0xffffffff);
  }
  *(uint *)(param_1 + 0x6800) = uVar7;
  *(uint *)(param_1 + 0x6804) = uVar6;
  return;
}

