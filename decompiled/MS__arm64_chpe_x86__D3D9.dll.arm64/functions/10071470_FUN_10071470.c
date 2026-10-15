/*
 * FUN_10071470 at 10071470
 * undefined FUN_10071470(void)
 * Address ranges: 10071470-10071533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071470(int param_1,int *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  puVar1 = (uint *)(param_1 + 8);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    iVar4 = *param_2;
    uVar9 = 0;
    uVar7 = uVar3;
    do {
      uVar6 = uVar7 + uVar9 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x10);
      uVar5 = uVar6;
      if (uVar8 <= (ulonglong)(longlong)iVar4) {
        if ((ulonglong)(longlong)iVar4 <= uVar8) break;
        uVar9 = uVar6 + 1;
        uVar6 = uVar9;
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
    if ((uVar6 != uVar3) && (*(longlong *)(*(int *)(param_1 + 4) + uVar6 * 0x10) == (longlong)iVar4)
       ) {
      uVar6 = uVar6 + 1;
      if (uVar6 < uVar3) {
        do {
          puVar2 = (undefined8 *)(*(int *)(param_1 + 4) + uVar6 * 0x10);
          uVar6 = uVar6 + 1;
          puVar2[-1] = puVar2[1];
          puVar2[-2] = *puVar2;
        } while (uVar6 < *puVar1);
      }
      *puVar1 = *puVar1 - 1;
    }
  }
  return;
}

