/*
 * FUN_1801d46e0 at 1801d46e0
 * undefined FUN_1801d46e0(void)
 * Address ranges: 1801d46e0-1801d4a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801d46e0(longlong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar5 = 0;
  lVar6 = param_1 + 0x1338;
  do {
    if (*(longlong *)(lVar6 + uVar5 * 8) != 0) {
      uVar3 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11)(uVar3,uVar5,0,0,0,0,0,0);
      lVar4 = *(longlong *)(lVar6 + uVar5 * 8);
      uVar1 = 1 << (ulonglong)((uint)uVar5 & 0x1f);
      *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) & (uVar1 ^ 0xffffffff);
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)();
      *(undefined8 *)(lVar6 + uVar5 * 8) = 0;
      *(uint *)(param_1 + 0x67f4) = *(uint *)(param_1 + 0x67f4) & (uVar1 ^ 0xffffffff);
    }
    uVar1 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  uVar5 = 0;
  do {
    if (*(longlong *)(param_1 + 0x13b8 + uVar5 * 8) != 0) {
      uVar3 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11_01)(uVar3,uVar5,0,0,0);
      (*(code *)puVar2)();
      (*extraout_x11_02)();
      *(undefined8 *)(param_1 + 0x13b8 + uVar5 * 8) = 0;
      *(uint *)(param_1 + 0x6800) =
           *(uint *)(param_1 + 0x6800) & (1 << (ulonglong)((uint)uVar5 & 0x1f) ^ 0xffffffffU);
    }
    uVar1 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar1;
  } while (uVar1 < 5);
  lVar6 = param_1 + 0x66c8;
  uVar5 = 0;
  do {
    if (*(longlong *)(lVar6 + uVar5 * 8) != 0) {
      uVar3 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11_03)(uVar3,uVar5,0,0,0);
      *(undefined4 *)(*(longlong *)(lVar6 + uVar5 * 8) + 0x84) = 0xffffffff;
      (*(code *)puVar2)();
      (*extraout_x11_04)();
      *(undefined8 *)(lVar6 + uVar5 * 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x6748 + uVar5 * 4) = 0;
    *(undefined4 *)(param_1 + 0x6788 + uVar5 * 4) = 0;
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  if (*(longlong *)(&DAT_000066c0 + param_1) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_05)(uVar3,0,0);
    *(undefined1 *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x70) = 0;
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_06)();
    *(undefined8 *)(&DAT_000066c0 + param_1) = 0;
  }
  if (*(longlong *)(param_1 + 0xc490) != 0) {
    FUN_1801e40e8();
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  if (*(longlong *)(param_1 + 0xc498) != 0) {
    FUN_1801e3bf8();
    *(undefined8 *)(param_1 + 0xc498) = 0;
  }
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    uVar3 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_07)(uVar3,0);
    FUN_1801dcdf0(*(undefined8 *)(param_1 + 0xc488));
    *(undefined8 *)(param_1 + 0xc488) = 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uVar3 = (*(code *)puVar2)(0x180225000);
  (*extraout_x11_08)(uVar3,4,1,&local_80,&local_90);
  lVar6 = 0;
  do {
    lVar4 = *(longlong *)(param_1 + 0x30 + lVar6 * 8);
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      (*(code *)puVar2)();
      (*extraout_x11_09)();
      if (lVar4 != 0) {
        (*(code *)puVar2)();
        (*extraout_x11_10)(lVar4);
      }
      *(undefined8 *)(param_1 + 0x30 + lVar6 * 8) = 0;
      *(undefined8 *)(param_1 + 0xc460 + lVar6 * 8) = 0;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30);
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_11)();
    if (lVar6 != 0) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_12)(lVar6);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0xc480) = 0;
  }
  return;
}

