/*
 * FUN_100c4210 at 100c4210
 * undefined FUN_100c4210(void)
 * Address ranges: 100c4210-100c453f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100c4210(int param_1,int *param_2)

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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  
  puVar1 = (undefined4 *)(param_1 + 0xe0);
  puVar2 = (undefined4 *)(param_1 + 0x40);
  iVar9 = FUN_101105c0(*puVar2,*puVar1);
  if ((iVar9 == 0) || (iVar9 == *(int *)(param_1 + 0xcc))) {
    iVar9 = *(int *)(param_1 + 200);
    local_3c = *(undefined4 *)(iVar9 + 0xde);
    uStack_40 = *(undefined4 *)(iVar9 + 0xda);
    local_48 = *(undefined1 *)(iVar9 + 0x26);
    local_50 = *(undefined4 *)(&DAT_10165708 + *(int *)(iVar9 + 0xce) * 4);
    local_44 = 0;
    local_80 = *(int *)(param_1 + 0xcc);
    uStack_7c = *(undefined4 *)(param_1 + 0x10);
    uStack_5c = *(undefined4 *)(&DAT_10165720 + *(int *)(iVar9 + 0x1c) * 4);
    local_78 = *puVar1;
    uStack_74 = *(undefined4 *)(param_1 + 0xec);
    local_70 = *(undefined4 *)(param_1 + 0xf0);
    uStack_6c = *(undefined4 *)(param_1 + 0xd8);
    local_68 = *(undefined4 *)(param_1 + 0xdc);
    uStack_64 = *(undefined4 *)(param_1 + 0xf4);
    local_60 = *(undefined4 *)(param_1 + 0xf8);
    uStack_54 = *(undefined4 *)(param_1 + 0xfc);
    local_58 = 0;
    uStack_4c = *(undefined4 *)(param_1 + 0x100);
    local_47 = *(int *)(iVar9 + 0x18) == 1;
    iVar9 = FUN_1010f710(*puVar2,&local_80);
    piVar3 = (int *)(param_1 + 0xe4);
    *piVar3 = iVar9;
    if (iVar9 != 0) {
      if (param_2 != (int *)0x0) {
        piVar4 = (int *)(param_1 + 0xe8);
        iVar9 = 0;
        if (*param_2 != 0) {
          iVar9 = *param_2 + -0xc0;
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
              )))) goto LAB_100c44a8;
        }
        *piVar4 = 0;
        uVar11 = FUN_101102e8(*puVar2,*piVar3,1);
        if ((uVar11 & 1) == 0) {
          FUN_10110388(*puVar2,*puVar1,0);
          goto LAB_100c448c;
        }
      }
LAB_100c44a8:
      iVar9 = *piVar3;
      if (*(int *)(iVar9 + 0xd7c) != 0) {
        FUN_100bac48(param_1 + 0x48,*(int *)(iVar9 + 0xd7c),*(undefined4 *)(iVar9 + 0xd84),
                     *(undefined4 *)(iVar9 + 0xd88),
                     *(undefined4 *)(&DAT_10165880 + *(int *)(iVar9 + 0x2c) * 4));
      }
      iVar9 = *piVar3;
      uVar6 = *(uint *)(iVar9 + 0x18);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(0xf004,0x100c4508);
        (*(code *)uVar8)();
      }
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
      uVar8 = SoftwareBreakpoint(0xf004,0x100c452c);
      (*(code *)uVar8)();
    }
  }
LAB_100c448c:
  *puVar1 = 0;
  return 0;
}

