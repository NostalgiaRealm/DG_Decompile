/*
 * FUN_10002ffb at 10002ffb
 * undefined4 __stdcall FUN_10002ffb(int param_1, undefined4 param_2)
 * Address ranges: 10002ffb-100030be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10002ffb(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint local_54 [7];
  uint local_38 [6];
  uint local_20 [3];
  undefined1 local_14 [12];
  undefined4 local_8;
  
  iVar6 = param_1 * 0x228;
  uVar2 = (**(code **)(*(int *)(&DAT_1006c2b0)[param_1 * 0x8a] + 0x48))(local_38,param_2);
  if ((local_38[0] == 0) || (local_38[1] == 0)) {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar3 = FUN_10003314(local_38,param_1,local_54);
    iVar1 = DAT_1006c210;
    puVar7 = local_20;
    for (iVar5 = 6; puVar7 = puVar7 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
    }
    puVar7 = local_20;
    puVar3 = (uint *)(&DAT_1006c448 + iVar6);
    for (iVar5 = 6; puVar7 = puVar7 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *puVar7;
      puVar3 = puVar3 + 1;
    }
    puVar7 = local_38;
    puVar3 = local_20;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar3 = puVar3 + 1;
    }
    local_8 = 0x1c;
    puVar7 = local_20;
    puVar3 = (uint *)(&DAT_1006c42c + iVar6);
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(iVar1 + 0x7fe) != 0) {
      *(int *)(&DAT_1006c440 + iVar6) = *(int *)(iVar1 + 0x7fe);
    }
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)(&DAT_1006c2b0)[param_1 * 0x8a] + 0x44))(local_14,param_2);
    uVar2 = CONCAT31((int3)((uint)puVar4 >> 8),1);
    *(undefined4 *)(&DAT_1006c470 + iVar6) = *puVar4;
    *(undefined4 *)(&DAT_1006c474 + iVar6) = puVar4[1];
    *(undefined4 *)(&DAT_1006c478 + iVar6) = puVar4[2];
    *(undefined4 *)(&DAT_1006c47c + iVar6) = puVar4[3];
    (&DAT_1006c49a)[iVar6] = 0;
  }
  return uVar2;
}

