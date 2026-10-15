/*
 * FUN_10093190 at 10093190
 * undefined FUN_10093190(void)
 * Address ranges: 10093190-100933eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10093190(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  code *extraout_w11;
  int *local_d0;
  undefined4 *local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  
  piVar1 = (int *)(param_1 + 0x1d044);
  piVar2 = (int *)(param_1 + 0x1cf00);
  if (*piVar1 != 0) {
    FUN_100ec910(*(undefined4 *)(*piVar2 + 0x172c0),*piVar1,0);
    FUN_100e6c70(*piVar2,*piVar1);
  }
  local_d0 = (int *)(param_1 + 0x1d048);
  iVar4 = *local_d0;
  piVar3 = (int *)(param_1 + 0x1cf04);
  if (iVar4 == -1) {
    iVar4 = FUN_100df3e0(*(undefined4 *)(*piVar3 + 0x15d8),1);
    *local_d0 = iVar4;
  }
  if (iVar4 != -1) {
    local_78 = 0;
    local_80[0] = 3;
    local_64 = 0x1c00010001;
    local_5c = 1;
    local_cc = (undefined4 *)(param_1 + 0x14);
    local_54 = 0;
    uStack_70 = (ulonglong)param_2;
    local_68 = param_3;
    iVar4 = FUN_100e0328(*piVar2 + 0x520,*local_cc,local_80);
    *piVar1 = iVar4;
    if (iVar4 != 0) {
      uStack_b4 = 1;
      local_c8 = 0;
      local_c0 = 0;
      uStack_bc = param_2;
      local_b8 = param_3;
      uVar7 = FUN_100e5930(*(undefined4 *)(*piVar3 + 0x1304),iVar4,0,*piVar3 + 0x1430,&local_c8,
                           param_4,param_5,0);
      if ((uVar7 & 1) == 0) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar6);
        *(undefined4 *)(param_1 + 0x1d044) = 0;
      }
      else {
        FUN_100e1060(*(int *)(*piVar3 + 0x1304) + 4,0);
        local_b0 = 0x40000001c;
        local_a8 = 0x1688;
        local_a0 = 0xffffffff00000000;
        uStack_98 = 0;
        local_90 = 0;
        puVar5 = (undefined4 *)FUN_100dfee0(*(undefined4 *)(*piVar3 + 0x15d8),&local_d0,*local_d0,0)
        ;
        FUN_100e0168(*piVar2 + 0x520,*local_cc,*(undefined4 *)(param_1 + 0x1d044),&local_b0,*puVar5)
        ;
      }
    }
  }
  return *(int *)(param_1 + 0x1d044) != 0;
}

