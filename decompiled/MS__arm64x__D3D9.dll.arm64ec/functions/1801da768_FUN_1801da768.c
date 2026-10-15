/*
 * FUN_1801da768 at 1801da768
 * undefined FUN_1801da768(void)
 * Address ranges: 1801da768-1801da86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801da768(longlong param_1,int param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int local_40 [4];
  
  lVar4 = DAT_180258900;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = thunk_FUN_1802236e4(DAT_180258900);
    lVar4 = DAT_180258900;
    if (iVar2 == 0) {
      FUN_1801085c8();
      lVar4 = DAT_180258900;
    }
  }
  uVar6 = 0x8876086c;
  local_40[0] = param_2;
  if ((param_3 != (uint *)0x0) && (lVar3 = FUN_18010d668(param_1 + -0x6520,local_40), lVar3 != 0)) {
    if (*(uint *)(param_1 + -0x64d8) != 0) {
      uVar5 = 0;
      do {
        iVar2 = (int)uVar5;
        if (*(int *)(*(longlong *)(param_1 + -0x64e0) + uVar5 * 4) == param_2) goto LAB_1801da82c;
        uVar5 = (ulonglong)(iVar2 + 1U);
      } while (iVar2 + 1U < *(uint *)(param_1 + -0x64d8));
    }
    iVar2 = -1;
LAB_1801da82c:
    *param_3 = (uint)(iVar2 != -1);
    uVar6 = 0;
  }
  if (bVar1) {
    thunk_FUN_18022370c(lVar4);
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 0;
  }
  return uVar6;
}

