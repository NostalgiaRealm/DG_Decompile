/*
 * FUN_1801e2a20 at 1801e2a20
 * undefined FUN_1801e2a20(void)
 * Address ranges: 1801e2a20-1801e2b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e2a20(longlong param_1,uint param_2,longlong param_3)

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
  if ((*(uint *)(param_1 + -0x28) >> 10 & 1) == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + -0x5c);
  }
  else {
    uVar5 = 1;
  }
  uVar4 = 0x8876086c;
  if ((param_2 < uVar5) && (param_3 != 0)) {
    uVar4 = FUN_1801dfb70(*(longlong *)(param_1 + (ulonglong)param_2 * 8 + 0x18) + 0x80,
                          &DAT_180229278,param_3);
  }
  if (bVar2) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar4;
}

