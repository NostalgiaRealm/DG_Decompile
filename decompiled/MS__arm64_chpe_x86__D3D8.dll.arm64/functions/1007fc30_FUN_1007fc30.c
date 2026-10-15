/*
 * FUN_1007fc30 at 1007fc30
 * undefined FUN_1007fc30(void)
 * Address ranges: 1007fc30-1007fd57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007fc30(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  ulonglong extraout_x1;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  do {
    if (param_4 == -1) {
      uVar10 = uVar9 | 0x410200;
    }
    else {
      uVar10 = uVar9 | param_4 << 0xe | 0x420300;
    }
    iVar1 = uVar9 * 4;
    uVar9 = uVar9 + 1;
    *(uint *)(param_2 + 0x1ac + iVar1) = uVar10;
  } while (uVar9 < 0xf);
  if ((*(char *)(param_2 + 0xc9) == '\0') || (*(char *)(*(int *)(param_2 + 0x10) + 0x442) == '\0'))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar8 = (ulonglong)(param_2 + 0x18);
  uVar7 = 1;
  uVar6 = FUN_100ee580(uVar8,4,1);
  *(undefined4 *)(param_2 + 0x1e8) = uVar6;
  if (bVar5) {
    uVar6 = FUN_100ee580(uVar8 & 0xffffffff,extraout_x1 & 0xffffffff,uVar7 & 0xffffffff);
    puVar3 = (undefined4 *)(param_2 + 0x1bc);
  }
  else {
    puVar3 = (undefined4 *)(param_2 + 0x1bc);
    uVar6 = *puVar3;
  }
  uVar4 = *puVar3;
  *(undefined4 *)(param_2 + 0x1ec) = uVar6;
  *(undefined4 *)(param_2 + 0x1f0) = uVar4;
  *(undefined4 *)(param_2 + 500) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_2 + 0x1f8) = *(undefined4 *)(param_2 + 0x1b8);
  uVar9 = 0;
  do {
    iVar1 = uVar9 * 4;
    iVar2 = uVar9 * 4;
    uVar9 = uVar9 + 1;
    *(undefined4 *)(param_2 + 0x1fc + iVar2) = *(undefined4 *)(param_2 + 0x1c0 + iVar1);
  } while (uVar9 < 8);
  return;
}

