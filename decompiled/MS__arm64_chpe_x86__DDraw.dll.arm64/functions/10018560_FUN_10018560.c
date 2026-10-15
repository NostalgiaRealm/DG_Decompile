/*
 * FUN_10018560 at 10018560
 * undefined FUN_10018560(void)
 * Address ranges: 10018560-100187a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10018560(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  undefined4 local_d0;
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
  
  piVar1 = (int *)(param_1 + 0xd044);
  local_d0 = param_4;
  if (*piVar1 != 0) {
    FUN_10078ac0(*(undefined4 *)(*(int *)(param_1 + 0xcf00) + 0x172c0),*piVar1,0);
    FUN_10072660(*(undefined4 *)(param_1 + 0xcf00),*piVar1);
  }
  iVar3 = *(int *)(param_1 + 0xd048);
  piVar2 = (int *)(param_1 + 0xcf04);
  if (iVar3 == -1) {
    iVar3 = FUN_10073050(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x15d8),1);
    *(int *)(param_1 + 0xd048) = iVar3;
  }
  if (iVar3 != -1) {
    local_78 = 0;
    local_80[0] = 3;
    local_64 = 0x1c00010001;
    local_5c = 1;
    local_cc = (undefined4 *)(param_1 + 0x14);
    local_54 = 0;
    uStack_70 = (ulonglong)param_2;
    local_68 = param_3;
    iVar3 = FUN_10072bf8(*(int *)(param_1 + 0xcf00) + 0x520,*local_cc,local_80);
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      uStack_b4 = 1;
      local_c8 = 0;
      local_c0 = 0;
      uStack_bc = param_2;
      local_b8 = param_3;
      uVar6 = FUN_10081a40(*(undefined4 *)(*piVar2 + 0x1304),iVar3,0,*piVar2 + 0x1430,&local_c8,
                           local_d0,param_5,0);
      if ((uVar6 & 1) == 0) {
        uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar5);
        *(undefined4 *)(param_1 + 0xd044) = 0;
      }
      else {
        FUN_1007cfb0(*(int *)(*piVar2 + 0x1304) + 4,0);
        local_b0 = 0x40000001c;
        local_a8 = 0x1688;
        local_a0 = 0xffffffff00000000;
        uStack_98 = 0;
        local_90 = 0;
        puVar4 = (undefined4 *)
                 FUN_10073b50(*(undefined4 *)(*piVar2 + 0x15d8),&local_d0,
                              *(undefined4 *)(param_1 + 0xd048),0);
        FUN_10072a38(*(int *)(param_1 + 0xcf00) + 0x520,*local_cc,*(undefined4 *)(param_1 + 0xd044),
                     &local_b0,*puVar4);
      }
    }
  }
  return *(int *)(param_1 + 0xd044) != 0;
}

