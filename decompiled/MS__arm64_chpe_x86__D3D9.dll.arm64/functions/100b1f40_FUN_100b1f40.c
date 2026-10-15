/*
 * FUN_100b1f40 at 100b1f40
 * undefined FUN_100b1f40(void)
 * Address ranges: 100b1f40-100b2263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100b1f40(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  code *extraout_w11;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  puVar1 = (undefined4 *)(param_1 + 0xa8);
  puVar2 = (undefined4 *)(param_1 + 0x40);
  iVar9 = FUN_101105c0(*puVar2,*puVar1);
  if ((iVar9 == 0) || (iVar9 == *(int *)(param_1 + 0x94))) {
    iVar9 = *(int *)(param_1 + 0x90);
    local_4c = *(undefined4 *)(iVar9 + 0xde);
    uStack_50 = *(undefined4 *)(iVar9 + 0xda);
    local_58 = *(undefined1 *)(iVar9 + 0x26);
    local_60 = *(undefined4 *)(&DAT_10165708 + *(int *)(iVar9 + 0xce) * 4);
    local_54 = 0;
    local_90 = *(int *)(param_1 + 0x94);
    uStack_8c = *(undefined4 *)(param_1 + 0x10);
    uStack_6c = *(undefined4 *)(&DAT_10165720 + *(int *)(iVar9 + 0x1c) * 4);
    local_88 = *puVar1;
    uStack_84 = *(uint *)(param_1 + 0x14);
    local_80 = *(uint *)(param_1 + 0x18);
    uStack_7c = *(undefined4 *)(param_1 + 0xa0);
    local_78 = *(undefined4 *)(param_1 + 0xa4);
    uStack_74 = *(undefined4 *)(param_1 + 0xb4);
    local_70 = *(undefined4 *)(param_1 + 0xb8);
    uStack_64 = *(undefined4 *)(param_1 + 0xbc);
    local_68 = 0;
    uStack_5c = *(undefined4 *)(param_1 + 0xc0);
    local_57 = *(int *)(iVar9 + 0x18) == 1;
    iVar9 = FUN_1010f710(*puVar2,&local_90);
    piVar3 = (int *)(param_1 + 0xac);
    *piVar3 = iVar9;
    if (iVar9 != 0) {
      if (param_2 != (int *)0x0) {
        piVar4 = (int *)(param_1 + 0xb0);
        iVar9 = 0;
        if (*param_2 != 0) {
          iVar9 = *param_2 + -0x88;
        }
        *piVar4 = iVar9;
        if (((char)param_2[3] == '\0') && (iVar9 != 0)) {
          uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          iVar9 = (*extraout_w11)(uVar10);
          if ((((iVar9 == 1) && (iVar9 = *piVar4, *(int *)(iVar9 + 0x24) == 1)) &&
              ((piVar5 = (int *)param_2[1], piVar5 == (int *)0x0 ||
               ((((*piVar5 == 0 && (piVar5[1] == 0)) && (*(int *)(iVar9 + 0x14) == piVar5[2])) &&
                (*(int *)(iVar9 + 0x18) == piVar5[3])))))) &&
             ((piVar5 = (int *)param_2[2], piVar5 == (int *)0x0 ||
              (((*piVar5 == 0 && (piVar5[1] == 0)) &&
               ((*(int *)(*piVar3 + 0x10) == piVar5[2] && (*(int *)(*piVar3 + 0x14) == piVar5[3]))))
              )))) goto LAB_100b21e8;
        }
        *piVar4 = 0;
        uVar11 = FUN_101102e8(*puVar2,*piVar3,1);
        if ((uVar11 & 1) == 0) {
          FUN_10110388(*puVar2,*puVar1,0);
          goto LAB_100b21c4;
        }
      }
LAB_100b21e8:
      iVar9 = *piVar3;
      if ((*(int *)(iVar9 + 0xd80) != 0) && (*(int *)(iVar9 + 0xd78) != 0)) {
        FUN_100aacd8(param_1 + 0x48,*(undefined4 *)(iVar9 + 0xd70),*(int *)(iVar9 + 0xd78));
      }
      iVar9 = *piVar3;
      uVar6 = *(uint *)(iVar9 + 0x18);
      if (uVar6 != 0) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = *(uint *)(iVar9 + 0x10) / uVar6;
        }
        *(uint *)(param_1 + 0x14) = uVar7;
        uVar6 = *(uint *)(iVar9 + 0x1c);
        if (uVar6 != 0) {
          uVar7 = 0;
          if (uVar6 != 0) {
            uVar7 = *(uint *)(iVar9 + 0x14) / uVar6;
          }
          *(uint *)(param_1 + 0x18) = uVar7;
          return 1;
        }
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(0xf004,0x100b2254);
        (*(code *)uVar8)();
      }
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x100b2234);
      (*(code *)uVar8)();
    }
  }
LAB_100b21c4:
  *puVar1 = 0;
  return 0;
}

