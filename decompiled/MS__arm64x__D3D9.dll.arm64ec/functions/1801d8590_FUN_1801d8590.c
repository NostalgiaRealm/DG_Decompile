/*
 * FUN_1801d8590 at 1801d8590
 * undefined FUN_1801d8590(void)
 * Address ranges: 1801d8590-1801d8693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801d8590(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,int param_7,undefined8 *param_8,longlong param_9)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((param_8 != (undefined8 *)0x0) && (*param_8 = 0, param_9 == 0)) {
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
    uVar3 = FUN_1801d2298(param_1 + -0x6838,param_2,param_3,param_4,param_5,param_6,0,1,param_7 != 0
                          ,param_8);
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar3;
}

