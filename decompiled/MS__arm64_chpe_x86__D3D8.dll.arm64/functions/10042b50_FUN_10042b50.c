/*
 * FUN_10042b50 at 10042b50
 * undefined FUN_10042b50(void)
 * Address ranges: 10042b50-10042e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10042b50(int param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 in_x6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int iVar9;
  undefined1 auVar10 [16];
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  iVar1 = *(int *)(param_1 + 0xc) + 0x10;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar9 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 4);
  *param_2 = 0;
  iVar6 = iVar6 + iVar9 * 0x1510;
  local_48 = 0x100;
  local_44 = 1;
  puVar2 = (undefined4 *)(iVar6 + 0x510);
  uVar8 = FUN_100fece0(0x100);
  local_50 = (int)uVar8;
  local_4c = local_50;
  if (((uint)param_3 >> 8 & 1) == 0) {
    uVar5 = 0x10050;
    if (*(int *)(iVar6 + 0x520) < 0xb000) {
      uVar5 = 0x10040;
    }
    auVar10 = FUN_10082dc8(param_1 + 0x10,*(undefined4 *)(param_1 + 0x24),param_3,uVar3,uVar7,iVar1,
                           in_x6,uVar5,&local_50);
    iVar9 = local_50;
    if ((auVar10._0_8_ & 1) != 0) {
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                        (*puVar2,auVar10._8_8_,local_4c - local_50);
      (*extraout_w11_02)(uVar7,iVar9);
    }
    goto LAB_10042ddc;
  }
  auVar10 = FUN_100782d0(uVar8,param_3,uVar7,iVar1,0x10050,&local_50);
  iVar9 = local_50;
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((auVar10._0_8_ & 1) == 0) goto LAB_10042ddc;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*puVar2,auVar10._8_8_,local_4c - local_50);
  iVar6 = (*extraout_w11)(uVar5,iVar9);
  if (iVar6 < 0) goto LAB_10042ddc;
  local_48 = 0x100;
  local_44 = 1;
  local_50 = FUN_100fece0(0x100);
  local_4c = local_50;
  auVar10 = FUN_100789c0(param_1 + 0x10,param_3,uVar7,*(undefined4 *)(param_1 + 0x24),iVar1,uVar3,
                         in_x6,0x20050,&local_50);
  iVar1 = local_50;
  if ((auVar10._0_8_ & 1) == 0) {
LAB_10042d08:
    uVar7 = (*pcVar4)();
    (*extraout_w11_01)(uVar7);
    *(undefined4 *)param_2 = 0;
  }
  else {
    uVar7 = (*pcVar4)(*puVar2,auVar10._8_8_,local_4c - local_50);
    iVar6 = (*extraout_w11_00)(uVar7,iVar1);
    if (iVar6 < 0) goto LAB_10042d08;
  }
  FUN_100fed00(iVar1);
LAB_10042ddc:
  FUN_100fed00(iVar9);
  return param_2;
}

