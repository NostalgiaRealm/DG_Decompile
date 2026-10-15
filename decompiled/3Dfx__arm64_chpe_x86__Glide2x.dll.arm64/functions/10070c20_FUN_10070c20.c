/*
 * FUN_10070c20 at 10070c20
 * undefined FUN_10070c20(void)
 * Address ranges: 10070c20-10070d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10070c20(int param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  code *extraout_w11;
  undefined1 auVar8 [16];
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  
  local_60[0] = 0;
  iVar3 = *(int *)(param_1 + 8);
  puVar1 = (uint *)(param_2 + 1);
  *param_2 = 0;
  puVar2 = (uint *)(param_2 + 2);
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                     (*(undefined4 *)(iVar3 + param_3 * 0x28 + 0x18),param_4);
  iVar6 = (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_,local_60);
  if (iVar6 < 0) {
    local_60[0] = 0;
  }
  uVar7 = FUN_10069938(iVar3,local_60[0],&local_58);
  if ((uVar7 & 1) != 0) {
    *(undefined4 *)param_2 = local_58;
    *(undefined4 *)((int)param_2 + 4) = uStack_54;
    *puVar1 = local_50;
    *(uint *)((int)param_2 + 0xc) = uStack_4c;
    if (uStack_4c == 0) {
                    /* WARNING: Does not return */
      uVar5 = SoftwareBreakpoint(0xf004,0x10070cf0);
      (*(code *)uVar5)();
    }
    uVar4 = 0;
    if (uStack_4c != 0) {
      uVar4 = local_50 / uStack_4c;
    }
    *puVar2 = uVar4;
    *(undefined4 *)((int)param_2 + 0x14) = 0x20;
  }
  return param_2;
}

