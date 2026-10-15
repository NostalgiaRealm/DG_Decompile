/*
 * FUN_1801ca2f0 at 1801ca2f0
 * undefined FUN_1801ca2f0(void)
 * Address ranges: 1801ca2f0-1801ca5cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801ca2f0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *extraout_x11;
  code *pcVar6;
  code *extraout_x11_00;
  longlong lVar7;
  
  if ((7 < param_2 || param_3 == 0) || 0x20 < param_3) {
    return 0;
  }
  lVar7 = (longlong)(int)param_3;
  if (*(char *)(*(longlong *)(param_1 + -0x6828) + lVar7 * 0xc) == '\0') {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
    }
  }
  lVar1 = (ulonglong)param_2 * 0x84 + lVar7 * 4;
  if (*(char *)(param_1 + -0x642c) != '\0') {
    lVar7 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(int *)(lVar1 + lVar7 + 0x358) = param_4;
    param_3 = param_2 * 0x21 + param_3;
    lVar7 = lVar7 + ((ulonglong)(param_3 >> 6) + 0x1591) * 8;
    uVar5 = (ulonglong)(param_3 >> 3) & 7;
    *(byte *)(lVar7 + uVar5) = *(byte *)(lVar7 + uVar5) | (byte)(1 << ((ulonglong)param_3 & 7));
    goto LAB_1801ca58c;
  }
  lVar1 = lVar1 + param_1;
  if (*(int *)(lVar1 + -0x6078) == param_4) goto LAB_1801ca58c;
  if ((param_3 == 3 || (int)param_3 < 1) || 5 < (int)param_3) {
    if (param_3 == 0x10) {
      FUN_18011c308(param_1 + -0x6838,param_4);
LAB_1801ca524:
      if ((0x23fe000U >> (ulonglong)(param_3 & 0x1f) & 1) == 0) goto LAB_1801ca45c;
      lVar7 = lVar7 * 4 + 0x18022a428;
      uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      param_3 = *(uint *)(lVar7 + -0x30);
      pcVar6 = extraout_x11_00;
    }
    else {
      if (param_3 == 0x11) {
        FUN_18011c308(param_1 + -0x6838,param_4);
        goto LAB_1801ca524;
      }
      if (((param_3 == 0x12) || (param_3 == 0x15)) || (param_3 < 0x1a)) goto LAB_1801ca524;
LAB_1801ca45c:
      uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      pcVar6 = extraout_x11;
    }
    (*pcVar6)(uVar4,param_2,param_3);
  }
  else {
    *(uint *)(param_1 + -0x5b24) = *(uint *)(param_1 + -0x5b24) | 1 << (ulonglong)(param_2 & 0x1f);
  }
  *(int *)(lVar1 + -0x6078) = param_4;
LAB_1801ca58c:
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return 0;
}

