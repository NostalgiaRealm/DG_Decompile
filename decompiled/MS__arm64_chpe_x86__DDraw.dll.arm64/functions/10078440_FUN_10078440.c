/*
 * FUN_10078440 at 10078440
 * undefined FUN_10078440(void)
 * Address ranges: 10078440-100785ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10078440(int param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *extraout_w11;
  ulonglong uVar11;
  int local_50 [4];
  
  cVar6 = '\x01';
  local_50[0] = param_2;
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x1c);
  iVar7 = FUN_10078de0(param_1 + 0xc,local_50);
  if (iVar7 != 0) {
    if (param_4 != '\0') {
      cVar6 = FUN_10077f50(iVar7,iVar7);
      if (cVar6 == '\0') {
        iVar7 = *(int *)(iVar7 + 4);
        if (*(int *)(iVar7 + 0x8e0) != 0) {
          piVar1 = (int *)(iVar7 + 0x918);
          *(int *)(iVar7 + *piVar1 * 8 + 0x7e0) = param_2;
          *(int *)(iVar7 + *piVar1 * 8 + 0x7e4) = param_3;
          *piVar1 = *piVar1 + 1;
        }
        goto LAB_100785d4;
      }
    }
    puVar2 = (uint *)(param_1 + 0x14);
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      uVar9 = 0;
      uVar8 = uVar4;
      do {
        uVar10 = uVar8 + uVar9 >> 1;
        uVar11 = *(ulonglong *)(*(int *)(param_1 + 0x10) + uVar10 * 0x20);
        uVar5 = uVar10;
        if (uVar11 <= (ulonglong)(longlong)param_2) {
          if ((ulonglong)(longlong)param_2 <= uVar11) break;
          uVar9 = uVar10 + 1;
          uVar10 = uVar9;
          uVar5 = uVar8;
        }
        uVar8 = uVar5;
      } while (uVar8 != uVar9);
      if ((uVar10 != uVar4) &&
         (*(longlong *)(*(int *)(param_1 + 0x10) + uVar10 * 0x20) == (longlong)param_2)) {
        uVar10 = uVar10 + 1;
        if (uVar10 < uVar4) {
          do {
            puVar3 = (undefined8 *)(*(int *)(param_1 + 0x10) + uVar10 * 0x20);
            uVar10 = uVar10 + 1;
            puVar3[-3] = puVar3[1];
            puVar3[-4] = *puVar3;
            puVar3[-1] = puVar3[3];
            puVar3[-2] = puVar3[2];
          } while (uVar10 < *puVar2);
        }
        *puVar2 = *puVar2 - 1;
      }
    }
    if (param_3 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_2);
    }
  }
LAB_100785d4:
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x1c);
  return cVar6;
}

