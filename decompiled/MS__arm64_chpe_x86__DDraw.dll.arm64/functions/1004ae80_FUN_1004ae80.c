/*
 * FUN_1004ae80 at 1004ae80
 * undefined FUN_1004ae80(void)
 * Address ranges: 1004ae80-1004b05b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1004ae80(int param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x10c) == 0) && (*(int *)(param_3 + 0x10c) == 0)) {
    uVar7 = 1;
    if ((*(uint *)(param_1 + 0x154) >> 0x11 & 1) != 0) {
      uVar7 = *(uint *)(param_1 + 0x168);
    }
    uVar5 = 1;
    if ((*(uint *)(param_3 + 0x154) >> 0x11 & 1) != 0) {
      uVar5 = *(uint *)(param_3 + 0x168);
    }
    iVar4 = param_3;
    iVar2 = param_1;
    if (uVar7 <= uVar5) {
      do {
        FUN_10047410(iVar2,iVar4);
        piVar1 = (int *)(iVar2 + 0x110);
        iVar4 = *(int *)(iVar4 + 0x110);
        iVar2 = *piVar1;
      } while (*piVar1 != 0);
      local_90 = 0;
      uStack_88 = *(undefined4 *)(param_3 + 0x15c);
      local_60 = 0;
      uStack_84 = *(undefined4 *)(param_3 + 0x158);
      uVar6 = 0;
      uStack_78 = CONCAT44(uStack_84,uStack_88);
      local_58 = *(undefined4 *)(param_1 + 0x15c);
      uStack_54 = *(undefined4 *)(param_1 + 0x158);
      local_70 = 0;
      if (param_4 != (undefined8 *)0x0) {
        uStack_78 = param_4[1];
        local_70 = *param_4;
      }
      if (param_2 != (undefined8 *)0x0) {
        uVar6 = *param_2;
      }
      local_80 = local_70;
      uStack_68 = uStack_78;
      (*(code *)PTR_FUN_100ba26c)
                (&local_80,(int)uVar6 - (int)local_70,
                 (int)((ulonglong)uVar6 >> 0x20) - (int)((ulonglong)local_70 >> 0x20));
      (*(code *)PTR_FUN_100ba244)(auStack_50,&local_70,&local_90);
      iVar4 = (*(code *)PTR_FUN_100ba1d8)(auStack_50,&local_70);
      if (iVar4 != 0) {
        (*(code *)PTR_FUN_100ba244)(auStack_50,&local_80,&local_60);
        iVar4 = (*(code *)PTR_FUN_100ba1d8)(auStack_50,&local_80);
        if (iVar4 != 0) {
          uVar3 = FUN_1004aa70(param_1,param_3,uVar7,&local_70,&local_80);
        }
      }
      do {
        FUN_10047500(param_1,1);
        param_1 = *(int *)(param_1 + 0x110);
      } while (param_1 != 0);
    }
  }
  return uVar3;
}

