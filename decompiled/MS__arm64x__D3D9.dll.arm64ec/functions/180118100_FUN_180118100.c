/*
 * FUN_180118100 at 180118100
 * undefined FUN_180118100(void)
 * Address ranges: 180118100-1801181b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180118100(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086c;
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x100) >> 0xb & 1) != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x28) + 0xe78) >> 2 & 1) == 0) &&
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
    uVar3 = FUN_180117e30(param_1,0);
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar3;
}

