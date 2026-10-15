/*
 * FUN_100bd178 at 100bd178
 * undefined FUN_100bd178(void)
 * Address ranges: 100bd178-100bd32f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100bd178(int param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5,
                 uint *param_6)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  int local_40 [2];
  int local_38;
  int local_34;
  
  piVar1 = (int *)(param_1 + 0x98);
  iVar8 = *piVar1;
  if (iVar8 != 0) {
    iVar6 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
    if ((*(int *)(param_1 + 0x1c) - 0x24U & 0xfffffffa) == 0) {
      piVar2 = (int *)(iVar8 + iVar6 * 0x20);
      uVar3 = *(uint *)(&DAT_10162c20 + *(int *)(param_1 + 0x1c) * 4);
      if (uVar3 == 0x18) {
        uVar3 = 0x20;
      }
      if (*piVar2 == 0) {
        uVar4 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
        uVar5 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_2 & 0x1f);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        piVar2[1] = uVar4 * uVar3 >> 3;
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        uVar7 = FUN_101322b0(uVar5 * *(int *)(*piVar1 + iVar6 * 0x20 + 4));
        *(undefined4 *)(*piVar1 + iVar6 * 0x20) = uVar7;
      }
      *param_4 = *(int *)(*piVar1 + iVar6 * 0x20);
      *param_5 = *(undefined4 *)(*piVar1 + iVar6 * 0x20 + 4);
      if (param_6 != (uint *)0x0) {
        *param_6 = uVar3 >> 3;
      }
    }
    else {
      piVar2 = (int *)(iVar8 + iVar6 * 0x20);
      local_38 = *piVar2;
      local_40[0] = 0;
      local_34 = piVar2[1] + *piVar2;
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar8 = (*extraout_w11)(uVar7,0,&local_38,local_40);
      if (-1 < iVar8) {
        *param_4 = *(int *)(*piVar1 + iVar6 * 0x20) + local_40[0];
        *param_5 = *(undefined4 *)(*piVar1 + iVar6 * 0x20 + 8);
      }
    }
  }
  return *param_4 != 0;
}

