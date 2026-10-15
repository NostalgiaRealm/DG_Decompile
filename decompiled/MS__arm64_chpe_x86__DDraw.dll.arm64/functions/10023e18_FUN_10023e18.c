/*
 * FUN_10023e18 at 10023e18
 * undefined FUN_10023e18(void)
 * Address ranges: 10023e18-10024193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10023e18(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,int *param_6,
            int *param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  uVar9 = 2;
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    FUN_10090418(*(int *)(param_1 + 0x44) + 0x11c0);
  }
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_70 = (int *)(*extraout_w11)(param_1,1);
  if ((local_70 != (int *)0x0) && (uVar8 = FUN_10022620(param_1), (uVar8 & 1) != 0)) {
    local_74 = (int *)(param_1 + 0x2c);
    iVar3 = param_2 + *local_74 * param_3;
    local_7c = iVar3;
    if (*(int *)(param_1 + 0x1c) - 0x19U < 2) {
      local_80 = (undefined4 *)0x0;
      uVar8 = FUN_10022800(param_1,param_2,param_3,param_6,param_7,&local_80);
      if ((uVar8 & 1) != 0) {
        iVar3 = *(int *)(param_1 + 0x5c) + iVar3 * 0x20;
        iVar6 = (*(code *)PTR_FUN_100ba248)((int *)(iVar3 + 0x10));
        local_60 = *(int *)(iVar3 + 0x10);
        local_5c = *(int *)(iVar3 + 0x14);
        uStack_58 = 0;
        local_54 = *(undefined4 *)(iVar3 + 0x18);
        local_50 = *(undefined4 *)(iVar3 + 0x1c);
        uStack_4c = 1;
        (*pcVar4)();
        (*extraout_w11_00)(param_1,param_2,param_3);
        uVar9 = 0;
        if ((iVar6 == 0) &&
           (uVar8 = FUN_10081c48(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x1304),
                                 *(undefined4 *)((int)local_70 + 0xc),local_7c,
                                 param_2 + (*(int *)(param_1 + 0x24) + param_3) * *local_74,
                                 *(int *)(param_1 + 0x44) + 0x1490,&local_60,
                                 *param_6 + local_60 * (int)local_80 + *param_7 * local_5c,*param_7,
                                 0), (uVar8 & 1) == 0)) {
          uVar9 = 2;
        }
      }
    }
    else {
      (*pcVar4)();
      (*extraout_w11_01)(param_1,param_2,param_3);
      local_70 = (int *)(param_1 + 0x40);
      local_80 = (undefined4 *)(param_1 + 0x90);
      uVar9 = 0;
      uVar8 = FUN_10078b38(*(undefined4 *)(*local_70 + 0x172c0),*local_80);
      if ((uVar8 & 1) == 0) {
        lVar10 = *(longlong *)(param_1 + 0xe8);
        piVar1 = (int *)(param_1 + 0x44);
        if (lVar10 == 0) {
          lVar10 = FUN_1007dd50(*(undefined4 *)(*piVar1 + 0x1304));
        }
        cVar5 = FUN_1007cfb0(*(int *)(*piVar1 + 0x1304) + 4,0);
        if (cVar5 == '\0' || (cVar5 == '\0' || lVar10 == 0)) {
          FUN_10078ac0(*(undefined4 *)(*local_70 + 0x172c0),*local_80,0);
        }
        else {
          FUN_1007de50(*(undefined4 *)(*piVar1 + 0x1304),lVar10);
        }
      }
      iVar3 = local_7c;
      piVar1 = (int *)(param_1 + 0x98);
      local_78 = 0;
      piVar2 = (int *)(*piVar1 + local_7c * 0x20);
      local_68 = *piVar2;
      local_64 = piVar2[1] + *piVar2;
      uVar7 = (*pcVar4)();
      (*extraout_w11_02)(uVar7,0,&local_68,&local_78);
      *param_6 = *(int *)(*piVar1 + iVar3 * 0x20) + local_78;
      *param_7 = *(int *)(*piVar1 + iVar3 * 0x20 + 8);
    }
  }
  return uVar9;
}

