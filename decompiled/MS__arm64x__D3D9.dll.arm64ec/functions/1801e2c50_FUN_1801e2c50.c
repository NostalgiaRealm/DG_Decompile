/*
 * FUN_1801e2c50 at 1801e2c50
 * undefined FUN_1801e2c50(void)
 * Address ranges: 1801e2c50-1801e2d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e2c50(longlong param_1,uint param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar4 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + -0x5c)) {
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
    uVar4 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + -0x58) + (ulonglong)param_2 * 8);
    if ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x100) >> 0xb & 1) != 0) {
      uVar4 = FUN_180117e30(lVar5,0);
    }
    if (bVar2) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar4;
}

