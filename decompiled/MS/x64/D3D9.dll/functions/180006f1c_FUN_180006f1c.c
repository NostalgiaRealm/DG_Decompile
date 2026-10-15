/*
 * FUN_180006f1c at 180006f1c
 * undefined __fastcall FUN_180006f1c(undefined8 param_1, longlong param_2, longlong param_3, uint param_4)
 * Address ranges: 180006f1c-180006f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006f1c(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  uVar6 = 0;
  iVar5 = 0;
  if (param_4 != 0) {
    do {
      iVar5 = (int)uVar6;
      if (*(char *)(param_2 + uVar6) != '\0') {
        if (iVar2 != iVar4) {
          if (iVar4 == iVar5) {
            iVar4 = iVar4 + 1;
            goto LAB_180006f66;
          }
          uVar1 = iVar3 * 2;
          iVar3 = iVar3 + 1;
          *(short *)(param_3 + (ulonglong)uVar1 * 2) = (short)iVar2;
          *(short *)(param_3 + (ulonglong)(uVar1 + 1) * 2) = (short)iVar4;
        }
        iVar4 = iVar5 + 1;
        iVar2 = iVar5;
      }
LAB_180006f66:
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while (iVar5 + 1U < param_4);
    iVar5 = iVar3;
    if (iVar2 != iVar4) {
      *(short *)(param_3 + (ulonglong)(uint)(iVar3 * 2) * 2) = (short)iVar2;
      *(short *)(param_3 + (ulonglong)(iVar3 * 2 + 1) * 2) = (short)iVar4;
      iVar5 = iVar3 + 1;
    }
  }
  *(undefined2 *)(param_3 + (ulonglong)(uint)(iVar5 * 2) * 2) = 0xffff;
  return;
}

