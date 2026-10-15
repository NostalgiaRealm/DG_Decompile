/*
 * FUN_1801dc8a0 at 1801dc8a0
 * undefined FUN_1801dc8a0(void)
 * Address ranges: 1801dc8a0-1801dc957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801dc8a0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x59c0);
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
  uVar4 = FUN_180116498(param_1 + -0x48,param_2);
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar4;
}

