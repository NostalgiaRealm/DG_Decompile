/*
 * FUN_100407a0 at 100407a0
 * undefined FUN_100407a0(void)
 * Address ranges: 100407a0-10040967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100407a0(undefined8 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *extraout_w11;
  undefined1 auStack_80 [8];
  uint local_78;
  uint local_74;
  int local_70;
  uint uStack_6c;
  int local_68;
  uint uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar3 = FUN_10039370(param_2);
  if (iVar3 != 0) {
    local_60 = 0;
    local_58 = *(undefined4 *)(param_3 + 0x18);
    uStack_54 = *(undefined4 *)(param_3 + 0x1c);
    if (*(int *)(iVar3 + 0xf4) == 0) {
      (*(code *)PTR_FUN_100ba2b8)
                (auStack_80,0,0,*(undefined4 *)(&DAT_100be2cc + *(int *)(iVar3 + 0x11c) * 0x45),
                 *(undefined4 *)((int)&DAT_100be2cc + *(int *)(iVar3 + 0x11c) * 0x228 + 4));
    }
    else {
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar5 = (*extraout_w11)(uVar4);
      (*(code *)PTR_FUN_100ba2b8)
                (auStack_80,0,0,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 8));
    }
    FUN_100395c8(iVar3,&local_70);
    uVar1 = local_70 * local_78;
    if (uStack_6c == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x100408ac);
      (*(code *)uVar2)();
    }
    local_78 = 0;
    if (uStack_6c != 0) {
      local_78 = uVar1 / uStack_6c;
    }
    uVar1 = local_68 * local_74;
    if (uStack_64 == 0) {
                    /* WARNING: Does not return */
      uVar2 = SoftwareBreakpoint(0xf004,0x100408c8);
      (*(code *)uVar2)();
    }
    local_74 = 0;
    if (uStack_64 != 0) {
      local_74 = uVar1 / uStack_64;
    }
    local_50 = *(undefined4 *)(iVar3 + 0xfc);
    local_4c = 0;
    iVar5 = *(int *)(iVar3 + 0x118);
    local_44 = FUN_1008e100(iVar5 + 4);
    local_40 = 0x200000002;
    uStack_38 = 0;
    FUN_100395c8(iVar3,&local_70);
    FUN_10006d50(iVar3 + 0x10,&local_50,iVar5,param_3,*(undefined4 *)(param_3 + 0x20),
                 *(undefined4 *)(param_3 + 0x24),&local_60,auStack_80,
                 &DAT_100be300 + *(int *)(iVar3 + 0x11c) * 0x228);
  }
  return;
}

