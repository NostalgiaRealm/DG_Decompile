/*
 * FUN_1801d1b10 at 1801d1b10
 * undefined FUN_1801d1b10(void)
 * Address ranges: 1801d1b10-1801d1c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801d1b10(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *extraout_x11;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
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
  if (param_2 == 0) {
    puVar4 = &DAT_18024e840 + (ulonglong)*(uint *)(param_1 + -0x5990) * 0x4b;
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    (*extraout_x11)(uVar3,*(undefined4 *)(puVar4 + 4),*(undefined4 *)(puVar4 + 0x32),
                    *(undefined4 *)((longlong)puVar4 + 0x194),1);
    uVar5 = 0;
  }
  if (bVar1) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar5;
}

