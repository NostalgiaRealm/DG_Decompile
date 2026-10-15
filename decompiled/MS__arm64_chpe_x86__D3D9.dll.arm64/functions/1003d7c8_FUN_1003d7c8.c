/*
 * FUN_1003d7c8 at 1003d7c8
 * undefined FUN_1003d7c8(void)
 * Address ranges: 1003d7c8-1003da4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d7c8(undefined4 param_1,char param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(param_1);
  (*pcVar1)();
  iVar7 = (*extraout_w11_00)(param_1);
  iVar2 = DAT_10170ad0;
  if ((iVar6 != 0) && (iVar7 = (&DAT_10171380)[iVar7 * 0x8a], iVar7 != 0)) {
    if (param_2 != '\0') {
      puVar8 = (undefined4 *)(DAT_10170ad0 + 0x76c);
      (*pcVar1)();
      (*extraout_w11_01)(iVar7,iVar6,*puVar8);
    }
    (*pcVar1)();
    iVar6 = (*extraout_w11_02)(iVar7,iVar6,0,0,4,2,2,0,0);
    if (iVar6 != 0) {
      (*pcVar1)();
      cVar3 = (*extraout_w11_03)(iVar6);
      if (cVar3 == '\0') {
        FUN_1003dfc0(param_1);
      }
      (*pcVar1)();
      cVar4 = (*extraout_w11_04)(iVar6);
      if (cVar4 != '\0') {
        (*pcVar1)();
        (*extraout_w11_05)(iVar6);
        (*pcVar1)();
        cVar4 = (*extraout_w11_06)(iVar6);
        *(bool *)(iVar2 + 0x784) = cVar4 == '\0';
        (*pcVar1)();
        uVar5 = (*extraout_w11_07)(param_1);
        FUN_1003dbc8(param_1,uVar5,cVar4);
        if (*(int *)(DAT_10170ad0 + 0x330) != 0) {
          (*(code *)PTR_FUN_1016c240)(*(int *)(DAT_10170ad0 + 0x330),0x408,0,0);
        }
      }
      (*pcVar1)();
      (*extraout_w11_08)(iVar6);
      if (cVar3 == '\0') {
        FUN_1003e038(param_1);
      }
    }
  }
  return;
}

