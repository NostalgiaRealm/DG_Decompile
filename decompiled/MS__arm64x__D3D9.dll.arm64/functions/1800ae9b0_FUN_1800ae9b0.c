/*
 * FUN_1800ae9b0 at 1800ae9b0
 * undefined FUN_1800ae9b0(void)
 * Address ranges: 1800ae9b0-1800aeb97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800ae9b0(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x8876086c;
  }
  if (1 < param_2 - 2) {
    if ((7 < param_2 - 0x10) && (0xff < param_2 - 0x100)) {
      return 0x8876086c;
    }
    if (0x17 < param_2) {
      param_2 = param_2 - 0xf6;
      goto LAB_1800aea14;
    }
  }
  param_2 = *(uint *)(&DAT_180229b50 + (longlong)(int)param_2 * 4);
LAB_1800aea14:
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar3 == 0) {
      FUN_180003398();
    }
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    FUN_18001eec8(*(longlong *)(param_1 + -0x5a28) + (longlong)(int)param_2 * 0x40,param_3);
    FUN_180011710(param_1 + -0x6838,param_2);
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    lVar1 = lVar4 + (longlong)(int)param_2 * 0x40;
    *(undefined4 *)(lVar1 + 0x778) = *param_3;
    *(undefined4 *)(lVar1 + 0x77c) = param_3[4];
    *(undefined4 *)(lVar1 + 0x780) = param_3[8];
    *(undefined4 *)(lVar1 + 0x784) = param_3[0xc];
    *(undefined4 *)(lVar1 + 0x788) = param_3[1];
    *(undefined4 *)(lVar1 + 0x78c) = param_3[5];
    *(undefined4 *)(lVar1 + 0x790) = param_3[9];
    *(undefined4 *)(lVar1 + 0x794) = param_3[0xd];
    *(undefined4 *)(lVar1 + 0x798) = param_3[2];
    *(undefined4 *)(lVar1 + 0x79c) = param_3[6];
    *(undefined4 *)(lVar1 + 0x7a0) = param_3[10];
    *(undefined4 *)(lVar1 + 0x7a4) = param_3[0xe];
    *(undefined4 *)(lVar1 + 0x7a8) = param_3[3];
    *(undefined4 *)(lVar1 + 0x7ac) = param_3[7];
    *(undefined4 *)(lVar1 + 0x7b0) = param_3[0xb];
    *(undefined4 *)(lVar1 + 0x7b4) = param_3[0xf];
    lVar4 = lVar4 + ((ulonglong)(param_2 >> 6) + 0x1596) * 8;
    uVar5 = (ulonglong)(param_2 >> 3) & 7;
    *(byte *)(lVar4 + uVar5) = *(byte *)(lVar4 + uVar5) | (byte)(1 << ((ulonglong)param_2 & 7));
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

