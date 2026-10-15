/*
 * FUN_18010a4a8 at 18010a4a8
 * undefined FUN_18010a4a8(void)
 * Address ranges: 18010a4a8-18010a537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010a4a8(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  uVar2 = 0;
  iVar1 = 0;
  if (param_4 != 0) {
    do {
      iVar1 = (int)uVar2;
      if (*(char *)(param_2 + uVar2) != '\0') {
        if (iVar5 != iVar3) {
          if (iVar3 == iVar1) {
            iVar3 = iVar3 + 1;
            goto LAB_18010a4fc;
          }
          *(short *)(param_3 + (ulonglong)(uint)(iVar4 * 2) * 2) = (short)iVar5;
          *(short *)(param_3 + (ulonglong)(iVar4 * 2 + 1) * 2) = (short)iVar3;
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar1 + 1;
        iVar5 = iVar1;
      }
LAB_18010a4fc:
      uVar2 = (ulonglong)(iVar1 + 1U);
    } while (iVar1 + 1U < param_4);
    iVar1 = iVar4;
    if (iVar5 != iVar3) {
      *(short *)(param_3 + (ulonglong)(uint)(iVar4 * 2) * 2) = (short)iVar5;
      *(short *)(param_3 + (ulonglong)(iVar4 * 2 + 1) * 2) = (short)iVar3;
      iVar1 = iVar4 + 1;
    }
  }
  *(undefined2 *)(param_3 + (ulonglong)(uint)(iVar1 << 1) * 2) = 0xffff;
  return;
}

