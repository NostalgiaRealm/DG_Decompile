/*
 * FUN_10082d10 at 10082d10
 * undefined FUN_10082d10(void)
 * Address ranges: 10082d10-10082fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10082d10(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar8;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar7 = *(int *)(param_2 + 8);
  local_68 = param_3;
  if (*(int *)(param_2 + 4) != 0) {
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar6,&DAT_100b5f10,param_2 + 0xd6c);
  }
  uVar6 = (*pcVar5)();
  uVar6 = (*extraout_w11_00)(uVar6);
  *(undefined4 *)(param_2 + 0xd68) = uVar6;
  piVar3 = (int *)(param_1 + iVar7 * 0x16c0 + 0x1c9c);
  iVar7 = FUN_10073050(*piVar3,2);
  piVar1 = (int *)(param_2 + 0xd78);
  *piVar1 = iVar7;
  if (iVar7 != -1) {
    local_58 = 0;
    local_50 = 0;
    uVar8 = 0;
    local_60 = *(undefined4 *)(&DAT_100b54c8 + *(int *)(param_2 + 0x2c) * 4);
    uStack_5c = 4;
    local_6c = param_1;
    do {
      uVar6 = (*pcVar5)();
      iVar7 = (*extraout_w11_01)(uVar6,uVar8,&DAT_100b3468);
      if (iVar7 < 0) {
        if (uVar8 == 0) {
          iVar7 = *piVar1;
          if (iVar7 != -1) {
            iVar4 = *piVar3;
            iVar2 = iVar4 + 0x1c;
            (*(code *)PTR_FUN_100ba0a0)(iVar2);
            FUN_10072ec8(iVar4,iVar7,2);
            (*(code *)PTR_FUN_100ba0f0)(iVar2);
          }
          *piVar1 = -1;
          return 0;
        }
        do {
          uVar6 = (*pcVar5)();
          (*extraout_w11_03)(uVar6);
        } while( true );
      }
      FUN_10073b50(*piVar3,&local_70,*piVar1,uVar8);
      uVar6 = (*pcVar5)();
      (*extraout_w11_02)(uVar6,*extraout_w8,&local_60,local_70);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 2);
    FUN_10082520(local_6c,param_2,local_68);
  }
  return 1;
}

