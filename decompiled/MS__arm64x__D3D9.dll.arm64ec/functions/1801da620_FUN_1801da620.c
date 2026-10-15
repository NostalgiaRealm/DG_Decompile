/*
 * FUN_1801da620 at 1801da620
 * undefined FUN_1801da620(void)
 * Address ranges: 1801da620-1801da75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801da620(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_40 [4];
  
  lVar4 = DAT_180258900;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = thunk_FUN_1802236e4(DAT_180258900);
    lVar4 = DAT_180258900;
    if (iVar2 == 0) {
      FUN_1801085c8();
      lVar4 = DAT_180258900;
    }
  }
  uVar5 = 0x8876086c;
  local_40[0] = param_2;
  if ((param_3 != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)FUN_18010d668(param_1 + -0x6520,local_40), puVar3 != (undefined4 *)0x0)
     ) {
    uVar5 = 0;
    *param_3 = *puVar3;
    uVar6 = *(undefined8 *)(puVar3 + 1);
    *(undefined8 *)(param_3 + 3) = *(undefined8 *)(puVar3 + 3);
    *(undefined8 *)(param_3 + 1) = uVar6;
    uVar6 = *(undefined8 *)(puVar3 + 5);
    *(undefined8 *)(param_3 + 7) = *(undefined8 *)(puVar3 + 7);
    *(undefined8 *)(param_3 + 5) = uVar6;
    uVar6 = *(undefined8 *)(puVar3 + 9);
    *(undefined8 *)(param_3 + 0xb) = *(undefined8 *)(puVar3 + 0xb);
    *(undefined8 *)(param_3 + 9) = uVar6;
    *(undefined8 *)(param_3 + 0xd) = *(undefined8 *)(puVar3 + 0xd);
    param_3[0xf] = puVar3[0xf];
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
    param_3[0x12] = puVar3[0x12];
    param_3[0x13] = puVar3[0x13];
    param_3[0x14] = puVar3[0x14];
    param_3[0x15] = puVar3[0x15];
    param_3[0x16] = puVar3[0x16];
    param_3[0x17] = puVar3[0x17];
    param_3[0x18] = puVar3[0x18];
    param_3[0x19] = puVar3[0x19];
  }
  if (bVar1) {
    thunk_FUN_18022370c(lVar4);
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 0;
  }
  return uVar5;
}

