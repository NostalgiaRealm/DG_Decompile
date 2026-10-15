/*
 * FUN_18000419c at 18000419c
 * int __fastcall FUN_18000419c(longlong param_1, uint param_2, int param_3)
 * Address ranges: 18000419c-18000425a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18000419c(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (param_2 < *(uint *)(param_1 + 0x70)) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 4);
    if (((*(char *)(DAT_180111f20 + 0x822) == '\0') || (*(int *)(DAT_180111f20 + 0x870) == 0)) ||
       (puVar5 = &DAT_180112b20, *(int *)(DAT_180111f20 + 0x874) == 0)) {
      puVar5 = &DAT_180112b10;
    }
    uVar2 = *(uint *)(DAT_180111f20 + 0x9e3);
    iVar6 = 0;
    if ((uVar2 & 2) != 0) {
      iVar6 = 0;
      iVar3 = FUN_180002500(param_3);
      if (iVar3 == 0x10) {
        uVar4 = FUN_1800039d0(param_1,param_3);
        if ((char)uVar4 != '\0') {
          iVar6 = 1;
        }
      }
    }
    if ((uVar2 & 4) != 0) {
      iVar3 = FUN_180002500(param_3);
      if (iVar3 == 0x20) {
        uVar4 = FUN_1800039d0(param_1,param_3);
        if ((char)uVar4 != '\0') {
          iVar6 = iVar6 + 1;
        }
      }
    }
    iVar6 = iVar6 * *(int *)(puVar5 + (ulonglong)uVar1 * 0x4b);
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}

