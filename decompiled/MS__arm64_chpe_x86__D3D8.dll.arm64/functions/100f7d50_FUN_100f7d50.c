/*
 * FUN_100f7d50 at 100f7d50
 * undefined FUN_100f7d50(void)
 * Address ranges: 100f7d50-100f80cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f7d50(int param_1,int param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  byte bVar12;
  uint uVar13;
  undefined8 uVar14;
  int *local_160;
  int *local_15c;
  int local_158;
  int local_150;
  undefined8 local_14c;
  int local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 auStack_100 [16];
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 auStack_c0 [4];
  int local_bc;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_80 [16];
  ulonglong local_70;
  undefined4 local_68;
  
  puVar1 = (uint *)(param_1 + 0xc);
  if (*puVar1 != 0) {
    iVar5 = *(int *)*param_3;
    if ((iVar5 != 0) || (((int *)*param_3)[1] != 0)) {
      piVar2 = (int *)(param_1 + 4);
      iVar9 = *piVar2 + param_2 * 0x16c0;
      local_158 = iVar9 + 0x6c0;
      if (iVar5 != 0) {
        piVar4 = (int *)(iVar9 + 0x19c4);
        piVar3 = (int *)(*piVar4 + 0x634);
        *piVar3 = *piVar3 + 1;
        puVar10 = (undefined4 *)*param_3;
        FUN_100f0458(param_1,local_158,puVar10[1],*puVar10,puVar10[4]);
        FUN_100e14f0(*piVar4 + 4,0);
        *(undefined4 *)*param_3 = 0;
        *(undefined4 *)(*param_3 + 0x10) = 0;
      }
      pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      local_160 = param_3 + 1;
      iVar5 = *local_160;
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar8,auStack_100);
      local_15c = (int *)(iVar5 + 0xd68);
      uVar8 = (*pcVar6)();
      (*extraout_w11_00)(uVar8,auStack_80);
      piVar3 = param_3 + 2;
      FUN_100db118(*piVar2,auStack_c0,iVar5,*piVar3,local_f0,local_e8,local_70 & 0xffffffff,local_68
                   ,0);
      local_13c = 0;
      uStack_134 = 0;
      local_12c = 0;
      local_124 = 0;
      uStack_120 = 0;
      local_140 = *local_160;
      puVar10 = (undefined4 *)(*param_3 + 4);
      uStack_11c = 0;
      uStack_118 = CONCAT44(local_e8,local_f0);
      local_110 = *puVar10;
      local_10c = *(undefined4 *)(*param_3 + 0xc);
      local_108 = FUN_100ec878(*(undefined4 *)(*piVar2 + 0x172c0),*puVar10);
      iVar9 = (*(code *)PTR_FUN_10134210)(*piVar3 + 0xc);
      if (iVar9 == 0) {
        uStack_118 = *(undefined8 *)(*piVar3 + 0x14);
        uVar14 = *(undefined8 *)(*piVar3 + 0xc);
        uStack_120 = (undefined4)uVar14;
        uStack_11c = (undefined4)((ulonglong)uVar14 >> 0x20);
      }
      if (local_bc == 0) {
        local_12c = CONCAT44(local_12c._4_4_,*(undefined4 *)(iVar5 + *local_15c * 4 + 0xd70));
        puVar10 = (undefined4 *)
                  FUN_100dfee0(*(undefined4 *)(local_158 + 0x15dc),&local_160,
                               *(undefined4 *)(iVar5 + 0xd78),*local_15c);
        uVar11 = local_12c & 0xffffffff;
        uStack_134 = uStack_98;
        local_13c = local_a0;
        local_12c = CONCAT44(*puVar10,(undefined4)local_12c);
        local_124 = FUN_100ec878(*(undefined4 *)(*piVar2 + 0x172c0),uVar11);
      }
      local_150 = 0;
      bVar12 = 0;
      local_14c = 0;
      uVar13 = 0;
      *(undefined8 *)(param_3 + 5) = uStack_98;
      *(undefined8 *)(param_3 + 3) = local_a0;
      if (*puVar1 != 0) {
        do {
          uVar8 = (*pcVar6)();
          bVar7 = (*extraout_w11_01)(uVar8,param_2,&local_140,&local_150);
          uVar13 = uVar13 + 1;
          bVar12 = bVar7 | bVar12;
        } while (uVar13 < *puVar1);
        if (bVar12 != 0) {
          piVar2 = (int *)(*param_3 + 8);
          if (local_150 == *piVar2) {
            *piVar2 = 0;
          }
          else {
            *(int *)(*param_3 + 4) = local_150;
            *(undefined4 *)(*param_3 + 0xc) = (undefined4)local_14c;
            *(undefined4 *)(*param_3 + 0x14) = local_14c._4_4_;
          }
        }
      }
    }
  }
  return;
}

