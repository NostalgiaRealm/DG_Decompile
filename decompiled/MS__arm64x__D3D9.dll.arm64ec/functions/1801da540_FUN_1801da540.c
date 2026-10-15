/*
 * FUN_1801da540 at 1801da540
 * undefined FUN_1801da540(void)
 * Address ranges: 1801da540-1801da617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801da540(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar3 = DAT_180258900;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = thunk_FUN_1802236e4(DAT_180258900);
    lVar3 = DAT_180258900;
    if (iVar2 == 0) {
      FUN_1801085c8();
      lVar3 = DAT_180258900;
    }
  }
  uVar4 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + -0x6564);
    uVar4 = 0;
    param_2[1] = *(undefined8 *)(param_1 + -0x655c);
    *param_2 = uVar5;
    uVar5 = *(undefined8 *)(param_1 + -0x6554);
    param_2[3] = *(undefined8 *)(param_1 + -0x654c);
    param_2[2] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + -0x6544);
    param_2[5] = *(undefined8 *)(param_1 + -0x653c);
    param_2[4] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + -0x6534);
    param_2[7] = *(undefined8 *)(param_1 + -0x652c);
    param_2[6] = uVar5;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + -0x6524);
  }
  if (bVar1) {
    thunk_FUN_18022370c();
  }
  else {
    *(undefined4 *)(lVar3 + 0x2c) = 0;
  }
  return uVar4;
}

