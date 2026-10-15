/*
 * FUN_1003f410 at 1003f410
 * undefined FUN_1003f410(void)
 * Address ranges: 1003f410-1003f7ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1003f410(undefined4 *param_1,int *param_2,ulonglong param_3,int param_4,undefined4 param_5,
            int param_6,int param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_130;
  int *local_12c;
  undefined4 local_128;
  int *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  int iStack_114;
  int local_110 [6];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e0 [4];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  ulonglong uStack_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_78 [2];
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_b0[0] = 3;
  uStack_a0 = param_3 & 0xffffffff;
  local_a8 = 0;
  uStack_94 = 0x10001;
  piVar1 = param_1 + 0x29;
  local_8c = 1;
  local_84 = 0x100000000;
  local_130 = param_6;
  local_118 = param_7;
  iStack_114 = param_4;
  local_98 = param_4;
  local_90 = param_5;
  iVar10 = FUN_1005d850(*piVar1 + 0x520,*param_1,local_b0);
  *param_2 = iVar10;
  if (iVar10 != 0) {
    iVar10 = FUN_1005d850(*piVar1 + 0x520,*param_1,local_b0);
    pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    piVar2 = param_2 + 1;
    *piVar2 = iVar10;
    if (iVar10 != 0) {
      piVar3 = param_1 + 0x2a;
      iVar10 = FUN_1005e420(*(undefined4 *)(*piVar3 + 0x15d8),2);
      piVar4 = param_2 + 3;
      *piVar4 = iVar10;
      if (iVar10 != -1) {
        iVar10 = FUN_1005e420(*(undefined4 *)(*piVar3 + 0x15dc),2);
        piVar5 = param_2 + 4;
        *piVar5 = iVar10;
        local_12c = piVar5;
        if (iVar10 != -1) {
          local_124 = param_2 + 6;
          *local_124 = local_130;
          local_e0[1] = 4;
          local_e0[2] = 0x1688;
          local_d0 = 0xffffffff00000000;
          uStack_c8 = 0;
          local_e0[0] = local_130;
          local_c0 = 0;
          FUN_1005ef00(*(undefined4 *)(*piVar3 + 0x15d8),&local_130,*piVar4,0);
          FUN_1005ef00(*(undefined4 *)(*piVar3 + 0x15d8),&local_128,*piVar4,1);
          FUN_1005d698(*piVar1 + 0x520,*param_1,*param_2,local_e0,local_130);
          FUN_1005d698(*piVar1 + 0x520,*param_1,*piVar2,local_e0,local_128);
          local_110[4] = 0;
          local_110[5] = 0;
          local_110[0] = *local_124;
          local_110[2] = 0;
          local_110[3] = 0;
          local_110[1] = 4;
          FUN_1005ef00(*(undefined4 *)(*piVar3 + 0x15dc),&local_120,*piVar5,0);
          FUN_1005ef00(*(undefined4 *)(*piVar3 + 0x15dc),&local_11c,*piVar5,1);
          FUN_1005d6f0(*piVar1 + 0x520,*param_1,*param_2,local_110,local_120);
          FUN_1005d6f0(*piVar1 + 0x520,*param_1,*piVar2,local_110,local_11c);
          local_ec = 0;
          local_48 = 0;
          uVar7 = local_118 + 0xffU & 0xffffff00;
          param_2[7] = uVar7;
          local_f8 = 0x200000004;
          local_f0 = 1;
          local_78[0] = 1;
          uStack_68 = (ulonglong)(uVar7 * iStack_114);
          local_70 = 0x10000;
          local_50 = 0x100000000;
          local_60 = 0x1000100000001;
          uStack_58 = 0x100000000;
          uVar12 = FUN_1005d628(*piVar1 + 0x520,*param_1,&local_f8,0,local_78,0,local_118,param_8,
                                param_2 + 2);
          if ((uVar12 & 1) != 0) {
            return 1;
          }
          iVar10 = *piVar5;
          if (iVar10 != -1) {
            iVar8 = *(int *)(*piVar3 + 0x15dc);
            iVar6 = iVar8 + 0x1c;
            (*(code *)PTR_FUN_1009d03c)(iVar6);
            FUN_1005e298(iVar8,iVar10,2);
            (*(code *)PTR_FUN_1009d090)(iVar6);
          }
          *local_12c = -1;
        }
        iVar10 = *piVar4;
        if (iVar10 != -1) {
          iVar8 = *(int *)(*piVar3 + 0x15d8);
          iVar6 = iVar8 + 0x1c;
          (*(code *)PTR_FUN_1009d03c)(iVar6);
          FUN_1005e298(iVar8,iVar10,2);
          (*(code *)PTR_FUN_1009d090)(iVar6);
        }
        *piVar4 = -1;
      }
      uVar11 = (*pcVar9)();
      (*extraout_w11)(uVar11);
      *piVar2 = 0;
    }
    uVar11 = (*pcVar9)();
    (*extraout_w11_00)(uVar11);
    *param_2 = 0;
  }
  return 0;
}

