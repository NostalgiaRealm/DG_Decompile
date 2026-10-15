/*
 * FUN_10071ad0 at 10071ad0
 * undefined FUN_10071ad0(void)
 * Address ranges: 10071ad0-10071c0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071ad0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = (uint *)(param_1 + 0x54);
  uVar8 = *puVar1;
  uVar7 = uVar8;
  do {
    if (uVar7 == 0) {
      return;
    }
    uVar5 = uVar7 - 1;
    if (uVar5 < uVar8) {
      piVar6 = (int *)(*(int *)(param_1 + 0x50) + uVar5 * 0x10 + 0xc);
    }
    else {
      piVar6 = (int *)&DAT_00000004;
    }
    piVar6 = (int *)*piVar6;
    piVar2 = piVar6 + 3;
    while (iVar4 = *piVar2, iVar4 != -1) {
      puVar3 = (undefined8 *)(*piVar6 + iVar4 * 0x20);
      if (*(int *)(puVar3 + 3) == 0) break;
      FUN_10071690(param_1,*(int *)(puVar3 + 3),*puVar3,puVar3[1]);
      piVar2 = (int *)(*piVar6 + iVar4 * 0x20 + 0x1c);
    }
    FUN_1007a060(*piVar6);
    FUN_10079ff0(piVar6,0x14);
    uVar8 = *puVar1;
    uVar7 = uVar7 + 1;
    if (uVar7 < uVar8) {
      do {
        puVar3 = (undefined8 *)(*(int *)(param_1 + 0x50) + uVar7 * 0x10);
        uVar7 = uVar7 + 1;
        puVar3[-1] = puVar3[1];
        puVar3[-2] = *puVar3;
        uVar8 = *puVar1;
      } while (uVar7 < uVar8);
    }
    uVar8 = uVar8 - 1;
    *puVar1 = uVar8;
    uVar7 = uVar5;
  } while( true );
}

