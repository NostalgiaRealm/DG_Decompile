/*
 * FUN_100181b0 at 100181b0
 * undefined FUN_100181b0(void)
 * Address ranges: 100181b0-10018433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100181b0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int extraout_w15;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_4c;
  undefined1 local_47;
  undefined4 local_44;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = *(int *)(param_1 + 0x365c);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar2);
  piVar1 = (int *)(iVar2 + 4);
  iVar11 = *piVar1;
  iVar7 = *(int *)(iVar11 + 4);
  iVar5 = *(int *)(iVar7 + 0x18);
  iVar4 = FUN_1005ea90((int *)(iVar11 + 4));
  uStack_74 = *(undefined4 *)(iVar11 + 0xa0);
  uStack_54 = *(undefined4 *)(&DAT_100a01c8 + iVar4 * 4);
  local_78 = *(undefined4 *)(iVar11 + 0x94);
  uStack_7c = *(undefined4 *)(iVar11 + 0x2b18);
  uStack_5c = *(undefined4 *)(&DAT_100a2200 + *(int *)(iVar7 + 0x1c) * 4);
  local_60 = *(undefined4 *)(iVar11 + 0xb8);
  uStack_64 = *(undefined4 *)(iVar11 + 0xb4);
  local_68 = *(undefined4 *)(iVar11 + 0xac);
  uStack_6c = *(undefined4 *)(iVar11 + 0xa8);
  local_70 = *(undefined4 *)(iVar11 + 0xa4);
  uStack_4c = (uint)(extraout_w15 != 0);
  local_47 = iVar5 == 1;
  local_58 = 0;
  local_44 = 0;
  local_80 = iVar2;
  iVar5 = FUN_10073c50(*(undefined4 *)(iVar11 + 0x2b14),&local_80);
  FUN_100748c8(*(undefined4 *)(*piVar1 + 0x2b14),*(undefined4 *)(*piVar1 + 0x94),0);
  FUN_1001a308(iVar2);
  iVar7 = *piVar1;
  iVar11 = 0x1f10;
  if (*(char *)(*(int *)(iVar7 + 4) + 0x50) != '\0') {
    iVar11 = 0x1310;
  }
  FUN_10074b80(*(undefined4 *)(iVar7 + 0x2b14),*(int *)(iVar2 + 8),iVar11 + iVar7,iVar7 + 0x2b10);
  if (iVar5 != 0) {
    *(int *)(iVar2 + 8) = iVar5;
    (*pcVar3)();
    (*extraout_w11_00)(iVar2);
  }
  *(undefined1 *)(param_1 + 0x2dad) = 1;
  puVar6 = (undefined4 *)(param_1 + 0x2d04);
  puVar8 = (undefined4 *)(param_1 + 0x2d00);
  puVar9 = (undefined4 *)(param_1 + 0x2cfc);
  puVar10 = (undefined4 *)(param_1 + 0x2cf8);
  (*pcVar3)();
  (*extraout_w11_01)(param_1,*puVar10,*puVar9,*puVar8,*puVar6);
  FUN_10019e20(param_1,param_1 + 0x2b3c);
  return;
}

