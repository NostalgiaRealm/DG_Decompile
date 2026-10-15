/*
 * FUN_1802205d8 at 1802205d8
 * undefined FUN_1802205d8(void)
 * Address ranges: 1802205d8-18022072f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1802205d8(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4,
                      longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *extraout_x11;
  longlong lVar5;
  char local_50 [16];
  
  *param_1 = 0;
  lVar2 = FUN_18021f2d0();
  lVar3 = FUN_180220598(lVar2,param_2);
  if (lVar3 == 0) {
    lVar5 = thunk_FUN_180223eb4(param_2,param_3,param_4,param_5);
    goto LAB_18022070c;
  }
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1;
  if ((param_3 == 0x402 && param_4 == 0x44454745) && param_5 == 0x45474544) {
    *(undefined1 *)(lVar2 + 0xa0d) = 1;
    lVar5 = 0;
  }
  else {
    local_50[0] = '\0';
    uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    lVar5 = (*extraout_x11)(uVar4,lVar2,lVar3,param_2,param_3,param_4,param_5,local_50);
    if (local_50[0] != '\0') {
      *param_1 = *(undefined8 *)(lVar3 + 0x20);
    }
    if ((param_3 < 0x1d) && ((0x10000040U >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
      bVar1 = param_4 != 0;
    }
    else {
      if (param_3 != 0x21) goto LAB_1802206e4;
      bVar1 = lVar5 - 1U < 2;
    }
    *(bool *)(lVar3 + 0x45) = bVar1;
  }
LAB_1802206e4:
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + -1;
LAB_18022070c:
  FUN_18021fa28(lVar2);
  return lVar5;
}

