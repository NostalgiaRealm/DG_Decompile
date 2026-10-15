/*
 * FUN_10063bf0 at 10063bf0
 * undefined FUN_10063bf0(void)
 * Address ranges: 10063bf0-10063d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10063bf0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = 0x80070057;
  if (param_2 != 0) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(uVar3);
    uVar8 = 0;
    uStack_48 = 0;
    local_50 = 0;
    do {
      iVar4 = (&DAT_100a4c30)[*(int *)(param_1 + 0x98)] + uVar8 * 0x298;
      auVar9 = FUN_10081e90(iVar4 + 0x10,&local_50,0x10);
      if (auVar9._0_4_ != 0) {
        iVar7 = 0x28;
        if (*(char *)(iVar2 + 0x957) != '\0') {
          iVar7 = 0x24;
        }
        if ((*(char *)(iVar4 + 0x21) == '\0') || (*(char *)(iVar2 + 0x7ed) == '\0')) {
          puVar5 = (undefined4 *)(iVar7 + iVar4);
          puVar6 = (undefined4 *)(iVar4 + 0x2c);
          (*pcVar1)(auVar9._0_8_,auVar9._8_8_,param_1 + uVar8 * 0xec + 0x1594);
          iVar4 = (*extraout_w11_00)(*puVar6,*puVar5);
          if (iVar4 == 0) break;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
    uVar3 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

