/*
 * FUN_1801c86a0 at 1801c86a0
 * undefined FUN_1801c86a0(void)
 * Address ranges: 1801c86a0-1801c87f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c86a0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  code *extraout_x11;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar2 == 0) {
        FUN_1801085c8();
      }
    }
    uVar4 = *param_2;
    uVar10 = param_2[3];
    uVar8 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    uVar11 = param_2[7];
    uVar9 = param_2[6];
    uVar7 = *(undefined4 *)(param_2 + 8);
    if (*(char *)(param_1 + -0x642c) == '\0') {
      *(undefined8 *)(param_1 + -0x655c) = param_2[1];
      *(undefined8 *)(param_1 + -0x6564) = uVar4;
      *(undefined8 *)(param_1 + -0x654c) = uVar10;
      *(undefined8 *)(param_1 + -0x6554) = uVar8;
      *(undefined8 *)(param_1 + -0x653c) = uVar6;
      *(undefined8 *)(param_1 + -0x6544) = uVar5;
      *(undefined8 *)(param_1 + -0x652c) = uVar11;
      *(undefined8 *)(param_1 + -0x6534) = uVar9;
      *(undefined4 *)(param_1 + -0x6524) = uVar7;
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
    }
    else {
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      *(undefined8 *)(lVar3 + 0x4a00) = param_2[1];
      *(undefined8 *)(lVar3 + 0x49f8) = uVar4;
      *(undefined8 *)(lVar3 + 0x4a10) = uVar10;
      *(undefined8 *)(lVar3 + 0x4a08) = uVar8;
      *(undefined8 *)(lVar3 + 0x4a20) = uVar6;
      *(undefined8 *)(lVar3 + 0x4a18) = uVar5;
      *(undefined8 *)(lVar3 + 0x4a30) = uVar11;
      *(undefined8 *)(lVar3 + 0x4a28) = uVar9;
      *(undefined4 *)(lVar3 + 19000) = uVar7;
      *(undefined1 *)(lVar3 + 0xace9) = 1;
    }
    uVar7 = 0;
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar7;
}

