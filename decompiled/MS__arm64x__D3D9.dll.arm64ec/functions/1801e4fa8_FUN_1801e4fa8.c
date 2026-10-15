/*
 * FUN_1801e4fa8 at 1801e4fa8
 * undefined FUN_1801e4fa8(void)
 * Address ranges: 1801e4fa8-1801e5073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801e4fa8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(longlong *)(param_1 + -0x40) + 0xe78) >> 2 & 1) == 0) &&
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
  uVar3 = FUN_180115fc0(param_1 + -0x50,param_2,param_3,param_4,param_5);
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar3;
}

