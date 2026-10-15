/*
 * FUN_180118348 at 180118348
 * undefined FUN_180118348(void)
 * Address ranges: 180118348-180118407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180118348(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = DAT_18024d928;
  *(undefined1 *)(param_1 + 0x121) = 1;
  lVar4 = DAT_180258900;
  if (*(char *)(lVar2 + 0x882) != '\0') {
    if (((*(uint *)(*(longlong *)(param_1 + 0x50) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar3 = thunk_FUN_1802236e4(DAT_180258900);
      lVar4 = DAT_180258900;
      if (iVar3 == 0) {
        FUN_1801085c8();
        lVar4 = DAT_180258900;
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x681a) = 1;
    if (bVar1) {
      thunk_FUN_18022370c();
    }
    else {
      *(undefined4 *)(lVar4 + 0x2c) = 0;
    }
  }
  thunk_FUN_180223d38(param_2,1);
  return;
}

