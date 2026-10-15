/*
 * FUN_1801c24f8 at 1801c24f8
 * undefined FUN_1801c24f8(void)
 * Address ranges: 1801c24f8-1801c2607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c24f8(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x80) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x80) + -0x59c0);
  }
  uVar4 = 0x8876086c;
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
  if (param_2 < 6) {
    if ((*(uint *)(param_1 + -0x28) >> 10 & 1) == 0) {
      uVar5 = (uint)*(ushort *)(param_1 + -0x5c);
    }
    else {
      uVar5 = 1;
    }
    if (param_3 < uVar5 && param_4 != 0) {
      uVar4 = FUN_1801dfb70(*(longlong *)
                             (param_1 + (ulonglong)(param_3 + param_2 * 0x10) * 8 + 0x18) + 0x80,
                            &DAT_180229278,param_4);
    }
  }
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar4;
}

