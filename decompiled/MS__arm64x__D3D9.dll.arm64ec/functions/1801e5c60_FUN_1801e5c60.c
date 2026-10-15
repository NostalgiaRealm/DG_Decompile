/*
 * FUN_1801e5c60 at 1801e5c60
 * undefined FUN_1801e5c60(void)
 * Address ranges: 1801e5c60-1801e5d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e5c60(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 8;
  lVar3 = *(longlong *)(param_1 + 0x40);
  iVar2 = FUN_1801042d0(lVar3 + 0xcc);
  if (*(int *)(lVar3 + 200) + iVar2 == 0) {
    if (((*(uint *)(*(longlong *)(lVar3 + 0x80) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_180258900 + 0x30) == 0)) {
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
    FUN_18012fda0(lVar3,0,0);
    FUN_1802229d8(*(undefined8 *)(lVar3 + 0x90));
    *(undefined8 *)(lVar3 + 0x90) = 0;
    FUN_1801e4cb0(lVar3);
    FUN_1802229d8(lVar3,0xd8);
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

