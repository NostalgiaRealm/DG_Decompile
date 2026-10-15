/*
 * FUN_10053c50 at 10053c50
 * undefined FUN_10053c50(void)
 * Address ranges: 10053c50-10053e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053c50(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  code *extraout_w11;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x930) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x50);
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(uint *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x50);
    }
    uVar10 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x14d4 + uVar10 * 4);
      if (iVar2 != 0) {
        iVar4 = param_1 + uVar10 * 100;
        iVar5 = *(int *)(iVar4 + 0x4f8) * 3;
        if (((((*(char *)(iVar5 + 0x1009d1d0) != '\0') && (*(int *)(iVar4 + 0x4fc) == 2)) ||
             (((&DAT_1009d1d1)[iVar5] != '\0' && (*(int *)(iVar4 + 0x500) == 2)))) ||
            ((iVar5 = *(int *)(iVar4 + 0x504) * 3, *(char *)(iVar5 + 0x1009d1d0) != '\0' &&
             (*(int *)(iVar4 + 0x508) == 2)))) ||
           (((&DAT_1009d1d1)[iVar5] != '\0' && (*(int *)(iVar4 + 0x50c) == 2)))) {
          uVar3 = *(uint *)(*(int *)(iVar2 + 4) + 0x50);
          uVar9 = (ulonglong)uVar3;
          pcVar1 = (char *)(uVar10 + param_1 + 0x8fc);
          bVar7 = uVar3 == uVar11 || uVar3 == uVar12;
          if ((bool)*pcVar1 != bVar7) {
            uVar8 = (*pcVar6)();
            (*extraout_w11)(uVar8,uVar10,0,uVar9 & 0xffffffff,0,0,0,bVar7);
            *pcVar1 = bVar7;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 8);
    *(char *)(param_1 + 0x930) = '\0';
  }
  return;
}

