/*
 * FUN_10028518 at 10028518
 * undefined FUN_10028518(void)
 * Address ranges: 10028518-100285e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028518(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar1 = (uint *)(param_1 + 8);
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    iVar3 = *param_2;
    uVar9 = 0;
    uVar8 = uVar2;
    do {
      uVar6 = uVar8 + uVar9 >> 1;
      uVar7 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x18);
      uVar5 = uVar6;
      if (uVar7 <= (ulonglong)(longlong)iVar3) {
        if ((ulonglong)(longlong)iVar3 <= uVar7) break;
        uVar9 = uVar6 + 1;
        uVar6 = uVar9;
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar9);
    if ((uVar6 != uVar2) && (*(longlong *)(*(int *)(param_1 + 4) + uVar6 * 0x18) == (longlong)iVar3)
       ) {
      uVar6 = uVar6 + 1;
      if (uVar6 < uVar2) {
        do {
          puVar4 = (undefined8 *)(*(int *)(param_1 + 4) + uVar6 * 0x18);
          uVar6 = uVar6 + 1;
          puVar4[-2] = puVar4[1];
          puVar4[-3] = *puVar4;
          puVar4[-1] = puVar4[2];
        } while (uVar6 < *puVar1);
      }
      *puVar1 = *puVar1 - 1;
    }
  }
  return;
}

