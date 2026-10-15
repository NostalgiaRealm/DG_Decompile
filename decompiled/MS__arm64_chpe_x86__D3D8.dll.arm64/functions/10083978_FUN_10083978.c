/*
 * FUN_10083978 at 10083978
 * undefined FUN_10083978(void)
 * Address ranges: 10083978-10083aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083978(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  code *extraout_w11;
  uint uVar8;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 1);
  if (*puVar1 != 0) {
    uVar8 = 0;
    if (*puVar1 == 0) {
      piVar7 = (int *)&DAT_00000004;
      goto LAB_100839f4;
    }
    do {
      piVar7 = (int *)(*(int *)((int)param_1 + 4) + uVar8 * 0x10 + 0xc);
LAB_100839f4:
      iVar3 = *piVar7;
      iVar4 = *(int *)((int)param_1 + 0x14);
      iVar5 = *(int *)(param_1 + 2);
      iVar2 = iVar5 + 0x4a0;
      (*(code *)PTR_FUN_10134070)(iVar2);
      piVar7 = (int *)(iVar5 + iVar4 * 0x1510 + 0x7f4);
      if (iVar3 == *piVar7) {
        *piVar7 = 0;
      }
      (*pcVar6)();
      (*extraout_w11)(iVar3);
      (*(code *)PTR_FUN_101340bc)(iVar2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  FUN_100fed00(*(undefined4 *)param_1);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}

