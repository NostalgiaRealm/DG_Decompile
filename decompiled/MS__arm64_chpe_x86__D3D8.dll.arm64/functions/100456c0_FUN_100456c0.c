/*
 * FUN_100456c0 at 100456c0
 * undefined FUN_100456c0(void)
 * Address ranges: 100456c0-10045b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100456c0(int param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar10;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  piVar1 = (int *)(param_1 + 0x18);
  *param_4 = 0;
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar5 = true;
  if (*piVar1 != 1) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34) * 8);
    if (*(int *)(iVar7 + 0x30) == 0) {
      if (*(int *)(iVar7 + 0x10) != 0) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar8 = (*extraout_w11_03)(uVar6);
        if (uVar8 < *(ulonglong *)(iVar7 + 0x18)) goto LAB_100459d0;
      }
    }
    else {
LAB_100459d0:
      if (*(uint *)(param_1 + 0x14) < 0x20001) {
        FUN_10044af8();
        *piVar1 = 1;
        *(undefined1 *)(param_1 + 0x20) = 1;
        uVar8 = FUN_10044618(param_1);
        if ((uVar8 & 1) != 0) {
          uVar6 = (*pcVar10)();
          (*extraout_w11_04)(uVar6,local_60,2,0,0);
          *param_4 = (undefined4)uStack_58;
          bVar5 = uStack_58._4_4_ == 0;
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        }
      }
      else {
        FUN_10045100(param_1,*(undefined4 *)
                              (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34) * 8));
      }
    }
    if (*piVar1 == 1) {
      return bVar5;
    }
    uVar6 = (*pcVar10)();
    (*extraout_w11_05)(uVar6,local_60,1,0,0);
    *param_4 = (undefined4)uStack_58;
    goto LAB_10045ae4;
  }
  if ((param_2 & 1) == 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34) * 8);
    if ((param_3 & 1) == 0) {
      if (*(int *)(iVar7 + 0x30) == 0) {
        if (*(int *)(iVar7 + 0x10) != 0) {
          uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          uVar8 = (*extraout_w11_01)(uVar6);
          if (uVar8 < *(ulonglong *)(iVar7 + 0x18)) goto LAB_10045914;
        }
      }
      else {
LAB_10045914:
        FUN_10045100(param_1,*(undefined4 *)
                              (*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x34) * 8));
      }
      uVar6 = (*pcVar10)();
      pcVar10 = extraout_w11_02;
    }
    else {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      pcVar10 = extraout_w11_00;
    }
    (*pcVar10)(uVar6,local_60,1,0,0);
    iVar7 = uStack_58._4_4_;
    if (uStack_58._4_4_ == 0) {
      uVar9 = 1;
      goto LAB_10045828;
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      return true;
    }
    piVar1 = (int *)(param_1 + 0x34);
    piVar2 = (int *)(param_1 + 0x24);
    piVar4 = (int *)(*piVar2 + *piVar1 * 8);
    if (*(int *)(*piVar4 + 0x30) != 0) {
      piVar3 = (int *)(param_1 + 0x30);
      if (*(int *)(*(int *)(*piVar2 + *piVar3 * 8) + 0x30) == 0) {
        piVar4[1] = *piVar3;
        *piVar1 = *piVar3;
        *piVar3 = *(int *)(*piVar2 + *piVar3 * 8 + 4);
      }
      else {
        if (0xc00000 <
            (uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x14)))
        {
          FUN_100fd9e8(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0 + 0x1880);
          goto LAB_100457c4;
        }
        FUN_10044618(param_1);
      }
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
LAB_100457c4:
    if (*(int *)(*(int *)(*piVar2 + *piVar1 * 8) + 0x30) != 0) {
      return true;
    }
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar6,local_60,2,0,0);
    iVar7 = uStack_58._4_4_;
    if (uStack_58._4_4_ == 0) {
      uVar9 = 2;
LAB_10045828:
      iVar7 = FUN_10044e50(param_1,auStack_50,uVar9);
      uStack_58 = *(undefined8 *)(iVar7 + 8);
      iVar7 = (int)((ulonglong)uStack_58 >> 0x20);
    }
  }
  *param_4 = (undefined4)uStack_58;
  uStack_58._4_4_ = iVar7;
LAB_10045ae4:
  return uStack_58._4_4_ == 0;
}

