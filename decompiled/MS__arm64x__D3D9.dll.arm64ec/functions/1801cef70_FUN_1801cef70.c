/*
 * FUN_1801cef70 at 1801cef70
 * undefined FUN_1801cef70(void)
 * Address ranges: 1801cef70-1801cf0ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cef70(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
    }
  }
  lVar4 = FUN_1801dbc18(param_1 + 0xd8,param_2);
  if (*(char *)(param_1 + -0x642c) == '\0') {
    cVar2 = FUN_1801cd470(param_1 + -0x6838,param_2,lVar4);
    uVar6 = 0x8876086c;
    if (cVar2 != '\0') {
      uVar6 = 0;
    }
  }
  else {
    lVar5 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (param_2 == 0) {
      if (*(longlong *)(lVar5 + 0x4fa8) != 0) {
        FUN_1801dcdf0();
      }
      *(undefined8 *)(lVar5 + 0x4fa8) = 0;
    }
    else {
      uVar6 = 0x8876086c;
      if (lVar4 == 0) goto LAB_1801cf074;
      FUN_1801042e0(param_2 + 0xc);
      if (*(longlong *)(lVar5 + 0x4fa8) != 0) {
        FUN_1801dcdf0();
      }
      *(longlong *)(lVar5 + 0x4fa8) = param_2;
    }
    *(undefined1 *)(lVar5 + 0xacf8) = 1;
    uVar6 = 0;
  }
LAB_1801cf074:
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar6;
}

