/*
 * FUN_1801ca5e0 at 1801ca5e0
 * undefined FUN_1801ca5e0(void)
 * Address ranges: 1801ca5e0-1801ca813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801ca5e0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  uVar2 = (ulonglong)param_2;
  uVar6 = 0x8876086c;
  if (((0xef < param_2 - 0x10 && param_2 < 0x104) ||
      ((param_2 == 0x104 && param_3 != 0) && param_3 < 0xe)) &&
     (lVar5 = (longlong)(int)param_3, (&DAT_18024d810)[lVar5 * 8] != '\0')) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar1 = true;
      iVar3 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar3 == 0) {
        FUN_1801085c8();
      }
    }
    if (*(char *)(param_1 + -0x642c) == '\0') {
      if (0xff < param_2) {
        lVar5 = (ulonglong)(param_2 - 0x100) * 0x38 + lVar5 * 4 + param_1;
        if ((*(int *)(lVar5 + 0x618) != param_4) && ((param_4 != 3 || (2 < param_3 - 5)))) {
          FUN_1801c3848(param_1 + -0x6838,uVar2,param_3,param_4);
          *(int *)(lVar5 + 0x618) = param_4;
        }
      }
      else {
        lVar5 = uVar2 * 0x38 + lVar5 * 4 + param_1;
        if (*(int *)(lVar5 + 0x298) != param_4) {
          FUN_1801c3848(param_1 + -0x6838,uVar2,param_3,param_4);
          *(int *)(lVar5 + 0x298) = param_4;
        }
      }
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      param_3 = param_3 + param_2 * 0xe;
      if (0xff < param_2) {
        param_3 = param_3 - 0xe00;
        *(int *)(lVar4 + (lVar5 + ((ulonglong)(param_2 - 0x100) + 0x166) * 0xe) * 4) = param_4;
        lVar5 = (ulonglong)(param_3 >> 6) + 0x15a4;
      }
      else {
        *(int *)(lVar4 + (lVar5 + (uVar2 + 0x156) * 0xe) * 4) = param_4;
        lVar5 = (ulonglong)(param_3 >> 6) + 0x15a0;
      }
      lVar4 = lVar5 * 8 + lVar4;
      lVar5 = (longlong)((ulonglong)param_3 & 0x3f) >> 3;
      *(byte *)(lVar4 + lVar5) = *(byte *)(lVar4 + lVar5) | (byte)(1 << ((ulonglong)param_3 & 7));
    }
    uVar6 = 0;
    if (bVar1) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return uVar6;
}

