/*
 * FUN_1801da1f0 at 1801da1f0
 * undefined FUN_1801da1f0(void)
 * Address ranges: 1801da1f0-1801da2c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801da1f0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
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
    if (*(longlong *)(param_1 + -0x67e8) == 0) {
      *param_2 = 0;
      uVar3 = 0x88760866;
    }
    else {
      uVar3 = FUN_1801dfb70(*(longlong *)(param_1 + -0x67e8) + 0x80,&DAT_180229278,param_2);
    }
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar3;
}

