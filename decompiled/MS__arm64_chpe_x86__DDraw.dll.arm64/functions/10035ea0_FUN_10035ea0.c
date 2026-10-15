/*
 * FUN_10035ea0 at 10035ea0
 * undefined FUN_10035ea0(void)
 * Address ranges: 10035ea0-10036133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035ea0(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  code *extraout_w11;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  
  iVar7 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar7 == 0) {
    FUN_10001c10(0);
  }
  iVar7 = *(int *)(param_1 + 0x10c) * 0x228;
  if ((*(int *)(&DAT_100be32c + iVar7) == 0) || (*(int *)(&DAT_100be330 + iVar7) == 0)) {
    piVar2 = (int *)(param_1 + 0xe4);
    iVar5 = *piVar2;
    if ((iVar5 != 0) &&
       (((*(uint *)(iVar5 + 0x1b8) >> 0xf & 1) != 0 && ((&DAT_100be33a)[iVar7] != '\0')))) {
      bVar1 = false;
      puVar3 = (uint *)(*(int *)(iVar5 + 4) + 200);
      if ((*puVar3 & 0x60) == 0) {
        piVar4 = (int *)(param_1 + 0xec);
        if ((((*piVar4 != 0) && (iVar7 = (*(code *)PTR_FUN_100ba1f8)(&local_58), iVar7 != 0)) &&
            (uVar10 = FUN_10039430(param_1 + -0x10), (uVar10 & 1) == 0)) &&
           (iVar7 = (*(code *)PTR_FUN_100ba224)(*piVar4,5), iVar7 != 0)) {
          iVar7 = (*(code *)PTR_FUN_100ba2f0)(local_58);
          if (iVar7 != 0) {
            do {
              uVar8 = (*(code *)PTR_FUN_100ba22c)(iVar7,0xfffffff0);
              if ((uVar8 >> 0x1e & 1) == 0) break;
              iVar7 = (*(code *)PTR_FUN_100ba214)(iVar7);
              if (iVar7 == *piVar4) {
                bVar1 = true;
                goto LAB_10036034;
              }
            } while (iVar7 != 0);
            bVar1 = false;
          }
        }
      }
      else {
        (*(code *)PTR_FUN_100ba114)(&local_50);
        lVar12 = *(longlong *)(iVar5 + 0x18);
        (*(code *)PTR_FUN_100ba118)(&local_48);
        bVar1 = local_48 / 0x3c < local_50 - lVar12;
      }
LAB_10036034:
      uVar10 = FUN_10008940(*(undefined4 *)(*piVar2 + 4));
      if (((uVar10 & 1) != 0) || (bVar1)) {
        puVar11 = (undefined4 *)(param_1 + 0xec);
        uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        cVar6 = (*extraout_w11)(uVar9,*puVar11);
        if (cVar6 != '\0') {
          FUN_1004f930(*piVar2,0,0,0);
          *puVar3 = *puVar3 & 0xffffffdf;
        }
      }
    }
  }
  else {
    iVar7 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar7 == 0) {
      FUN_10001c10(0);
    }
    FUN_10004408(*(undefined4 *)(&DAT_100be328 + *(int *)(param_1 + 0x10c) * 0x228));
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return;
}

