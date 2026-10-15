/*
 * FUN_1801da0f8 at 1801da0f8
 * undefined FUN_1801da0f8(void)
 * Address ranges: 1801da0f8-1801da1df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801da0f8(longlong param_1,uint param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar3 = 0x8876086c;
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
  if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xf0)) {
    lVar4 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0x6808);
    if (lVar4 == 0) {
      *param_3 = 0;
      uVar3 = 0x88760866;
    }
    else {
      uVar3 = FUN_1801dfb70(lVar4 + 0x80,&DAT_180229278,param_3);
    }
  }
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar3;
}

