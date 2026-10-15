/*
 * FUN_1001fe48 at 1001fe48
 * undefined FUN_1001fe48(void)
 * Address ranges: 1001fe48-100200ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1001fe48(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,int param_6,
            undefined8 param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 local_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_2 + 4);
  uVar3 = *(undefined4 *)(*piVar1 + 0x50);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar6 = (*extraout_w11)(uVar3);
  (*pcVar4)();
  uStack_6c = (*extraout_w11_00)(uVar3);
  if (*(int *)(param_2 + 0x20) == 0) {
    local_78 = 0;
    iVar2 = 0;
    if (*piVar1 != 0) {
      iVar2 = *piVar1 + 0x4c;
    }
    local_70 = uVar6;
    uVar5 = FUN_1001f7f0(param_1,iVar2);
  }
  else {
    (*(code *)PTR_FUN_1016c26c)
              (auStack_88,0,0,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (param_5 != 0) {
      (*(code *)PTR_FUN_1016c208)(auStack_68,auStack_88,param_5);
      (*(code *)PTR_FUN_1016c1a4)(auStack_68,auStack_88);
    }
    if (param_6 != 0) {
      if (param_8 == 0) {
        param_8 = *(int *)(param_1 + 0x48);
      }
      (*(code *)PTR_FUN_1016c1b8)(param_8,local_98);
      (*(code *)PTR_FUN_1016c208)(auStack_58,local_98,param_6);
      (*(code *)PTR_FUN_1016c1a4)(auStack_58,auStack_88);
    }
    iVar2 = 0;
    if (*piVar1 != 0) {
      iVar2 = *piVar1 + 0x4c;
    }
    uVar5 = FUN_1001f7f0(param_1,iVar2);
  }
  return uVar5;
}

