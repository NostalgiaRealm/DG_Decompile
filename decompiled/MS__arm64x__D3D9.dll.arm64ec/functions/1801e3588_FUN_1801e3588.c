/*
 * FUN_1801e3588 at 1801e3588
 * undefined FUN_1801e3588(void)
 * Address ranges: 1801e3588-1801e3657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e3588(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x50) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x59c0);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar3 == 0) {
      FUN_1801085c8();
    }
  }
  uVar4 = FUN_180116378(param_1 + -0x60,param_2,param_3,param_4);
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar4;
}

