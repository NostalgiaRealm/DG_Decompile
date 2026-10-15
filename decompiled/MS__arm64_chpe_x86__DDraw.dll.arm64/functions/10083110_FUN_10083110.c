/*
 * FUN_10083110 at 10083110
 * undefined FUN_10083110(void)
 * Address ranges: 10083110-1008341b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10083110(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  int *local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulonglong uStack_70;
  int local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  
  local_e0 = param_5;
  uStack_dc = param_6;
  local_d8 = param_7;
  FUN_10082968(param_1,param_2);
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != 0)) {
    piVar1 = (int *)(param_2 + 8);
    local_78 = 0;
    local_54 = 0;
    iVar7 = param_1 + *piVar1 * 0x16c0;
    local_80[0] = 3;
    local_64 = 0x1b00010001;
    local_5c = 1;
    piVar5 = (int *)(iVar7 + 0x1c98);
    local_e4 = piVar1;
    uStack_70 = (ulonglong)param_3;
    local_68 = param_4;
    iVar10 = FUN_10073050(*piVar5,2);
    piVar2 = (int *)(param_2 + 0xd94);
    *piVar2 = iVar10;
    if (iVar10 != -1) {
      iVar10 = FUN_10083450(param_1,*piVar1,local_80);
      piVar3 = (int *)(param_2 + 0xd8c);
      *piVar3 = iVar10;
      if (iVar10 != 0) {
        local_b0 = 0x40000001c;
        local_a8 = 0x1688;
        local_a0 = 0xffffffff00000000;
        uStack_98 = 0;
        local_90 = 0;
        puVar11 = (undefined4 *)FUN_10073b50(*piVar5,auStack_b8,*piVar2,0);
        local_d4 = param_1 + 0x520;
        FUN_10072a38(local_d4,*piVar1,*piVar3,&local_b0,*puVar11);
        uStack_bc = 1;
        local_d0 = 0;
        local_c8 = 0;
        uStack_c4 = param_3;
        local_c0 = param_4;
        cVar9 = FUN_10081a40(*(undefined4 *)(iVar7 + 0x19c4),*piVar3,0,iVar7 + 0x1af0,&local_d0,
                             param_8,param_9,0);
        pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        if (cVar9 != '\0') {
          *(undefined4 *)(param_2 + 0xc40) = local_e0;
          *(undefined4 *)(param_2 + 0xc44) = uStack_dc;
          *(undefined4 *)(param_2 + 0xc48) = local_d8;
          if (param_11 == 0) {
            return;
          }
          iVar10 = FUN_10083450(param_1,*piVar1,local_80);
          piVar4 = (int *)(param_2 + 0xd90);
          *piVar4 = iVar10;
          if (iVar10 != 0) {
            puVar11 = (undefined4 *)FUN_10073b50(*piVar5,&local_e4,*piVar2,1);
            FUN_10072a38(local_d4,*piVar1,*piVar4,&local_b0,*puVar11);
            uVar13 = FUN_10081a40(*(undefined4 *)(iVar7 + 0x19c4),*piVar4,0,iVar7 + 0x1af0,&local_d0
                                  ,param_11,param_13,0);
            if ((uVar13 & 1) != 0) {
              return;
            }
            uVar12 = (*pcVar8)();
            (*extraout_w11)(uVar12);
            *piVar4 = 0;
          }
        }
        uVar12 = (*pcVar8)();
        (*extraout_w11_00)(uVar12);
        *piVar3 = 0;
      }
      iVar7 = *piVar2;
      if (iVar7 != -1) {
        iVar6 = *piVar5;
        iVar10 = iVar6 + 0x1c;
        (*(code *)PTR_FUN_100ba0a0)(iVar10);
        FUN_10072ec8(iVar6,iVar7,2);
        (*(code *)PTR_FUN_100ba0f0)(iVar10);
      }
      *piVar2 = -1;
    }
  }
  return;
}

