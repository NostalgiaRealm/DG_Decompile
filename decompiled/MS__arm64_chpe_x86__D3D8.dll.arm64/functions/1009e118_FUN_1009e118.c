/*
 * FUN_1009e118 at 1009e118
 * undefined FUN_1009e118(void)
 * Address ranges: 1009e118-1009e4a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1009e118(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,int *param_6,
            int *param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined8 uVar10;
  int local_70;
  int local_6c;
  int local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar10 = 2;
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    FUN_100fd9e8(*(int *)(param_1 + 0x44) + 0x11c0);
  }
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(param_1,1);
  if ((iVar6 != 0) && (uVar8 = FUN_1009c9b0(param_1), (uVar8 & 1) != 0)) {
    local_64 = (int *)(param_1 + 0x2c);
    local_6c = param_2 + *local_64 * param_3;
    if (*(int *)(param_1 + 0x1c) - 0x19U < 2) {
      local_70 = 0;
      uVar8 = FUN_1009cb90(param_1,param_2,param_3,param_6,param_7,&local_70);
      if ((uVar8 & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x5c) + local_6c * 0x20;
        local_68 = (*(code *)PTR_FUN_10134210)((int *)(iVar2 + 0x10));
        local_58 = *(int *)(iVar2 + 0x10);
        local_54 = *(int *)(iVar2 + 0x14);
        uStack_50 = 0;
        local_4c = *(undefined4 *)(iVar2 + 0x18);
        local_48 = *(undefined4 *)(iVar2 + 0x1c);
        uStack_44 = 1;
        (*pcVar4)();
        (*extraout_w11_00)(param_1,param_2,param_3);
        uVar10 = 0;
        if ((local_68 == 0) &&
           (uVar8 = FUN_100e5b38(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x1304),
                                 *(undefined4 *)(iVar6 + 0xc),local_6c,
                                 param_2 + (*(int *)(param_1 + 0x24) + param_3) * *local_64,
                                 *(int *)(param_1 + 0x44) + 0x1490,&local_58,
                                 *param_6 + local_58 * local_70 + *param_7 * local_54,*param_7,0),
           (uVar8 & 1) == 0)) {
          uVar10 = 2;
        }
      }
    }
    else {
      local_70 = local_6c;
      (*pcVar4)();
      (*extraout_w11_01)(param_1,param_2,param_3);
      local_64 = (int *)(param_1 + 0x40);
      uVar10 = 0;
      uVar8 = FUN_100eca00(*(undefined4 *)(*local_64 + 0x172c0),*(undefined4 *)(param_1 + 0x90));
      if ((uVar8 & 1) == 0) {
        uVar8 = *(ulonglong *)(param_1 + 0xe8);
        piVar1 = (int *)(param_1 + 0x44);
        if (uVar8 == 0) {
          uVar8 = FUN_100e1db8(*(undefined4 *)(*piVar1 + 0x1304));
        }
        cVar5 = FUN_100e1060(*(int *)(*piVar1 + 0x1304) + 4,0);
        if (cVar5 == '\0' || (cVar5 == '\0' || uVar8 == 0)) {
          FUN_100ec910(*(undefined4 *)(*local_64 + 0x172c0),*(undefined4 *)(param_1 + 0x90),0);
        }
        else {
          uVar7 = *(undefined4 *)(*piVar1 + 0x1304);
          while (uVar9 = FUN_100e1cd8(uVar7), uVar9 < uVar8) {
            DataMemoryBarrier(2,2);
            Yield();
          }
        }
      }
      iVar6 = local_70;
      piVar1 = (int *)(param_1 + 0x98);
      local_68 = 0;
      piVar3 = (int *)(*piVar1 + local_70 * 0x20);
      local_60 = *piVar3;
      local_5c = piVar3[1] + *piVar3;
      uVar7 = (*pcVar4)();
      (*extraout_w11_02)(uVar7,0,&local_60,&local_68);
      *param_6 = *(int *)(*piVar1 + iVar6 * 0x20) + local_68;
      *param_7 = *(int *)(*piVar1 + iVar6 * 0x20 + 8);
    }
  }
  return uVar10;
}

