/*
 * FUN_10023841 at 10023841
 * undefined4 __stdcall FUN_10023841(int param_1, undefined4 param_2)
 * Address ranges: 10023841-10023915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10023841(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint auStack_40 [2];
  undefined1 local_38 [16];
  uint auStack_28 [9];
  
  iVar6 = param_1 * 0x228;
  uVar2 = (**(code **)(*(int *)(&DAT_100ba720)[param_1 * 0x8a] + 0x48))(local_38,param_2);
  if ((auStack_40[0] == 0) || (auStack_40[1] == 0)) {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar3 = FUN_10023b1e(auStack_40,param_1,auStack_28);
    iVar1 = DAT_100ba2b4;
    puVar7 = (uint *)&stack0xffffffa4;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar4 = (undefined4 *)&stack0xffffffa4;
    puVar8 = (undefined4 *)(&DAT_100ba8b8 + iVar6);
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar3 = auStack_40;
    puVar7 = (uint *)&stack0xffffffa4;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar4 = (undefined4 *)&stack0xffffffa4;
    puVar8 = (undefined4 *)(&DAT_100ba89c + iVar6);
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    if (*(int *)(iVar1 + 0x7fe) != 0) {
      *(int *)(&DAT_100ba8b0 + iVar6) = *(int *)(iVar1 + 0x7fe);
    }
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)(&DAT_100ba720)[param_1 * 0x8a] + 0x44))(&stack0xffffffa4,param_2)
    ;
    uVar2 = CONCAT31((int3)((uint)puVar4 >> 8),1);
    *(undefined4 *)(&DAT_100ba8e0 + iVar6) = *puVar4;
    *(undefined4 *)(&DAT_100ba8e4 + iVar6) = puVar4[1];
    *(undefined4 *)(&DAT_100ba8e8 + iVar6) = puVar4[2];
    *(undefined4 *)(&DAT_100ba8ec + iVar6) = puVar4[3];
    (&DAT_100ba90a)[iVar6] = 0;
  }
  return uVar2;
}

