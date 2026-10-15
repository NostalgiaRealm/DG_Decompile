/*
 * FUN_18017b438 at 18017b438
 * undefined FUN_18017b438(void)
 * Address ranges: 18017b438-18017b4f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017b438(undefined8 param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar2 = param_4 + 1;
  *param_4 = 0;
  *puVar2 = 0;
  uVar7 = 0;
  iVar8 = 0;
  uVar3 = param_2;
  uVar5 = param_3;
  while (iVar6 = (int)uVar7, uVar5 != 0) {
    uVar4 = *(int *)(&DAT_18022c460 + (ulonglong)(uVar5 - 1) * 4) - iVar8;
    iVar8 = 0;
    if (uVar3 < uVar4) {
      uVar3 = uVar3 & 0xfffffffe;
      if (2 < uVar3) {
        *(uint *)(puVar2 + uVar7 * 2) = *(int *)(puVar2 + uVar7 * 2) + uVar3;
        iVar8 = uVar3 - 2;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      piVar1 = (int *)(param_4 + uVar7 * 2);
      *piVar1 = param_3 - uVar5;
      piVar1[1] = iVar8;
      piVar1[2] = 0;
      piVar1[3] = 0;
      uVar3 = param_2;
    }
    else {
      *(uint *)(puVar2 + uVar7 * 2) = *(int *)(puVar2 + uVar7 * 2) + uVar4;
      uVar3 = uVar3 - uVar4;
      uVar5 = uVar5 - 1;
    }
  }
  if (iVar6 != 5) {
    param_4[(ulonglong)(iVar6 + 1) * 2] = 0xffffffffffffffff;
    *(undefined4 *)(param_4 + (ulonglong)(iVar6 + 1) * 2 + 1) = 0xffffffff;
  }
  return;
}

