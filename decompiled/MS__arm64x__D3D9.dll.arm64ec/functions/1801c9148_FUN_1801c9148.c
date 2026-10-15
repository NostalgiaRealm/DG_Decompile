/*
 * FUN_1801c9148 at 1801c9148
 * undefined FUN_1801c9148(void)
 * Address ranges: 1801c9148-1801c92df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c9148(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong extraout_x8;
  longlong lVar5;
  ulonglong uVar6;
  code *extraout_x11;
  undefined4 uVar7;
  
  uVar6 = param_2 & 0xffffffff;
  uVar7 = 0x8876086c;
  if ((uint)param_2 < 6 && param_3 != (undefined4 *)0x0) {
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
    if (*(char *)(param_1 + -0x642c) == '\0') {
      lVar4 = param_1 + uVar6 * 0x10;
      *(undefined4 *)(lVar4 + -0x6420) = *param_3;
      *(undefined4 *)(lVar4 + -0x641c) = param_3[1];
      *(undefined4 *)(param_1 + (uVar6 + 0x42) * 0x10 + -0x6838) = param_3[2];
      *(undefined4 *)(lVar4 + -0x6414) = param_3[3];
      uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
      (*extraout_x11)(uVar3,param_2 & 0xffffffff,lVar4 + extraout_x8);
    }
    else {
      lVar5 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      lVar4 = lVar5 + uVar6 * 0x10;
      *(undefined4 *)(lVar4 + 0x4a54) = *param_3;
      *(undefined4 *)(lVar4 + 0x4a58) = param_3[1];
      *(undefined4 *)(lVar4 + 0x4a5c) = param_3[2];
      *(undefined4 *)(lVar5 + (uVar6 + 0x4a6) * 0x10) = param_3[3];
      lVar5 = lVar5 + ((uVar6 >> 6) + 0x159c) * 8;
      uVar6 = uVar6 >> 3 & 7;
      *(byte *)(lVar5 + uVar6) = *(byte *)(lVar5 + uVar6) | (byte)(1 << (param_2 & 7));
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

