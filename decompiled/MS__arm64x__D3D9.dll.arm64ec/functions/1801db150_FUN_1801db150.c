/*
 * FUN_1801db150 at 1801db150
 * undefined FUN_1801db150(void)
 * Address ranges: 1801db150-1801db23b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801db150(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = DAT_180258900;
  uVar1 = *(uint *)(param_1 + -0x59bc);
  if (param_2 < uVar1) {
    if (uVar1 < param_2 + param_4) {
      param_4 = uVar1 - param_2;
    }
  }
  else {
    param_4 = 0;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar5 = thunk_FUN_1802236e4(DAT_180258900);
    lVar6 = DAT_180258900;
    if (iVar5 == 0) {
      FUN_1801085c8();
      lVar6 = DAT_180258900;
    }
  }
  uVar1 = (param_4 & 0x3fffffff) << 1;
  puVar3 = (undefined8 *)(param_1 + (ulonglong)(param_2 << 2) * 4 + -0x5458);
  uVar4 = param_4 & 0x3fffffff;
  while (uVar4 != 0) {
    *param_3 = *puVar3;
    uVar1 = uVar1 - 1;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
    uVar4 = uVar1;
  }
  if (bVar2) {
    thunk_FUN_18022370c();
  }
  else {
    *(undefined4 *)(lVar6 + 0x2c) = 0;
  }
  return 0;
}

