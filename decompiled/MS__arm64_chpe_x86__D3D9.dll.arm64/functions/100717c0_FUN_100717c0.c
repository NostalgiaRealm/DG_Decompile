/*
 * FUN_100717c0 at 100717c0
 * undefined FUN_100717c0(void)
 * Address ranges: 100717c0-10071897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100717c0(int param_1,int *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar1 = (uint *)(param_1 + 8);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    iVar4 = *param_2;
    uVar9 = 0;
    uVar8 = uVar3;
    do {
      uVar6 = uVar8 + uVar9 >> 1;
      uVar7 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar6 * 0x28);
      uVar5 = uVar6;
      if (uVar7 <= (ulonglong)(longlong)iVar4) {
        if ((ulonglong)(longlong)iVar4 <= uVar7) break;
        uVar9 = uVar6 + 1;
        uVar6 = uVar9;
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar9);
    if ((uVar6 != uVar3) && (*(longlong *)(*(int *)(param_1 + 4) + uVar6 * 0x28) == (longlong)iVar4)
       ) {
      uVar6 = uVar6 + 1;
      if (uVar6 < uVar3) {
        do {
          uVar3 = uVar6 + 1;
          puVar2 = (undefined8 *)(*(int *)(param_1 + 4) + uVar6 * 0x28);
          puVar2[-4] = puVar2[1];
          puVar2[-5] = *puVar2;
          puVar2[-2] = puVar2[3];
          puVar2[-3] = puVar2[2];
          puVar2[-1] = puVar2[4];
          uVar6 = uVar3;
        } while (uVar3 < *puVar1);
      }
      *puVar1 = *puVar1 - 1;
    }
  }
  return;
}

