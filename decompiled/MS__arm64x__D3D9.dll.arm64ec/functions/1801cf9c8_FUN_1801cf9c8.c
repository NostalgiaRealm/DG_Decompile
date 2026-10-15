/*
 * FUN_1801cf9c8 at 1801cf9c8
 * undefined FUN_1801cf9c8(void)
 * Address ranges: 1801cf9c8-1801cfbfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801cf9c8(undefined4 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((*(uint *)(param_2 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
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
  iVar2 = 0;
  if (*(char *)(param_2 + -0x6568) == '\0') goto LAB_1801cfbbc;
  if ((((param_5 & 1) == 0) || ((param_5 & 6) == 0)) || (*(longlong *)(param_2 + -0x67e8) == 0)) {
LAB_1801cfb60:
    uVar3 = FUN_1801cea70(param_2 + -0x6838,param_5 & 1,(param_5 & 6) != 0);
    uVar4 = FUN_1801c3990(param_2 + -0x6838,uVar3);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_1801ceef8(param_2 + -0x6838), (uVar4 & 1) == 0))
    goto LAB_1801cfbbc;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_2 + -0x67e8) + 8);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + -0x6808) + 8);
    if (((*(int *)(lVar6 + 0x8c) == *(int *)(lVar5 + 0x8c)) &&
        (*(int *)(lVar6 + 0x90) == *(int *)(lVar5 + 0x90))) &&
       (*(int *)(lVar6 + 0x9c) == *(int *)(lVar5 + 0x9c))) goto LAB_1801cfb60;
    uVar4 = FUN_1801c3990(param_2 + -0x6838,2);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_1801ceef8(param_2 + -0x6838), (uVar4 & 1) == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_18010c710(param_1,param_2 + -0x6838,param_3,param_4,param_5 & 0xfffffffe,param_6,
                            param_7,param_2 + 0x730);
      if (iVar2 < 0) goto LAB_1801cfbbc;
    }
    if (((*(int *)(*(longlong *)(param_2 + -0x6808) + 0x48) == 0x4c4c554e) ||
        (uVar4 = FUN_1801c3990(param_2 + -0x6838,1), (uVar4 & 1) == 0)) ||
       (uVar4 = FUN_1801ceef8(param_2 + -0x6838), (uVar4 & 1) == 0)) goto LAB_1801cfbbc;
    param_5 = 1;
  }
  iVar2 = FUN_18010c710(param_1,param_2 + -0x6838,param_3,param_4,param_5,param_6,param_7,
                        param_2 + 0x730);
LAB_1801cfbbc:
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return iVar2;
}

