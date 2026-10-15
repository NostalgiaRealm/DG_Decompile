/*
 * FUN_100391d0 at 100391d0
 * undefined FUN_100391d0(void)
 * Address ranges: 100391d0-100392fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100391d0(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  undefined1 auVar7 [16];
  
  iVar4 = *(int *)(param_1 + 0x11c) * 0xa4;
  iVar1 = iVar4 + param_4 * 4;
  iVar5 = *(int *)(&DAT_100bbcdc + iVar1);
  puVar2 = (uint *)(iVar4 + param_4 * 4 + 0x100bbce4);
  if (((iVar5 == 0) || (*puVar2 < param_2)) ||
     (*(uint *)(iVar4 + param_4 * 4 + 0x100bbcec) < param_3)) {
    FUN_10039300(param_1,param_4);
    if (param_2 <= *puVar2) {
      param_2 = *puVar2;
    }
    iVar4 = iVar4 + param_4 * 4;
    *puVar2 = param_2;
    uVar3 = *(uint *)(iVar4 + 0x100bbcec);
    if (param_3 <= uVar3) {
      param_3 = uVar3;
    }
    uVar6 = (ulonglong)param_3;
    *(uint *)(iVar4 + 0x100bbcec) = param_3;
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff,uVar6 & 0xffffffff,6
                            ,1,0,1);
    *(int *)(&DAT_100bbcdc + iVar1) = iVar5;
  }
  return iVar5;
}

