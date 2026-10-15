/*
 * FUN_1801e1c80 at 1801e1c80
 * undefined FUN_1801e1c80(void)
 * Address ranges: 1801e1c80-1801e1d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e1c80(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x178) + 0xe78) >> 2 & 1) == 0) &&
     (*(int *)(DAT_180258900 + 0x30) == 0)) {
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
  *param_4 = 0;
  uVar3 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + 0xd4)) && (param_3 == 0)) {
    uVar3 = FUN_1801dfb70(*(longlong *)(param_1 + (ulonglong)(param_2 + 1) * 8 + 0x60) + 0x80,
                          &DAT_180229278,param_4);
  }
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar3;
}

