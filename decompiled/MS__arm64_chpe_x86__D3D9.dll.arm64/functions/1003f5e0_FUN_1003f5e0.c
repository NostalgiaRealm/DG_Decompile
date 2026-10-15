/*
 * FUN_1003f5e0 at 1003f5e0
 * undefined FUN_1003f5e0(void)
 * Address ranges: 1003f5e0-1003f91b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003f5e0(int param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *local_60;
  code *local_5c;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  int iStack_44;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar11 = (uint *)(param_1 + 0x34);
  if ((*puVar11 & 1) == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x24);
  if (*piVar1 == 0) {
    FUN_1003f3e0(param_1);
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_02)(param_1);
    if (*(char *)(param_1 + 0x1f) == '\0') {
      if (param_2 == '\0') {
        local_50 = 0;
        local_48 = FUN_1003ebe0(*(undefined2 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x1c),
                                *(undefined4 *)(param_1 + 0x18));
        iStack_44 = *(ushort *)(param_1 + 0xe) - 1;
        (*pcVar3)();
        (*extraout_w11_03)(param_1,&local_50);
      }
      else {
        local_60 = (uint *)0x0;
        local_5c = (code *)0x0;
        uVar2 = *(undefined4 *)(param_1 + 0x20);
        (*pcVar3)();
        cVar5 = (*extraout_w11_04)(param_1,&local_5c,&local_60);
        if (cVar5 != '\0') {
          (*pcVar3)();
          (*extraout_w11_05)(param_1,uVar2,local_5c);
          goto LAB_1003f8bc;
        }
      }
    }
    else {
LAB_1003f8bc:
      (*pcVar3)();
      (*extraout_w11_06)(param_1);
    }
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    uVar8 = 0x80;
    iVar7 = 0;
    iVar9 = 0;
    uVar10 = 0;
    if (*(uint *)(param_1 + 0x2c) == 0) goto LAB_1003f8e8;
    local_5c = pcVar3;
    local_58 = pcVar3;
    local_60 = puVar11;
    do {
      iVar6 = *piVar1;
      if ((*(byte *)(iVar6 + uVar10) & uVar8) == 0) {
        if (iVar7 != iVar9) {
          FUN_1003fab0(param_1,&local_50,iVar7,iVar9);
          (*local_5c)();
          (*extraout_w11_00)(param_1,&local_50);
          FUN_1003f2e0(param_1,iVar7,iVar9);
          iVar6 = *piVar1;
          iVar7 = iVar9;
        }
        iVar7 = iVar7 + 1;
      }
      pcVar3 = local_58;
      puVar11 = local_60;
      iVar9 = iVar9 + 1;
      *(byte *)(iVar6 + uVar10) = *(byte *)(iVar6 + uVar10) & ((byte)uVar8 ^ 0xff);
      bVar4 = uVar8 < 2;
      if (bVar4) {
        uVar10 = uVar10 + 1;
      }
      uVar8 = uVar8 >> 1;
      if (bVar4) {
        uVar8 = 0x80;
      }
    } while (uVar10 < *(uint *)(param_1 + 0x2c));
    if (iVar7 == iVar9) goto LAB_1003f8e8;
    FUN_1003fab0(param_1,&local_50,iVar7,iVar9);
    (*pcVar3)();
    (*extraout_w11_01)(param_1,&local_50);
  }
  FUN_1003f2e0(param_1,iVar7,iVar9);
LAB_1003f8e8:
  *puVar11 = *puVar11 & 0xfffffffe;
  return 1;
}

