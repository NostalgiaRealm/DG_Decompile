/*
 * FUN_10008940 at 10008940
 * undefined FUN_10008940(void)
 * Address ranges: 10008940-10008d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10008940(int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *local_60;
  code *local_5c;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  int iStack_44;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar15 = (uint *)(param_1 + 0x34);
  if (((*puVar15 >> 5 & 1) == 0) && (*(char *)(param_1 + 0xad) != '\0')) {
    local_50 = 0;
    local_48 = FUN_10007228(param_1);
    puVar7 = (undefined4 *)(param_1 + 0xa8);
    puVar6 = (undefined4 *)(param_1 + 0xa4);
    puVar8 = (undefined4 *)(param_1 + 0x70);
    puVar9 = (undefined4 *)(param_1 + 0x6c);
    iStack_44 = *(ushort *)(param_1 + 0xe) - 1;
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar4 = (*extraout_w11)(uVar5,*puVar9,*puVar8,*puVar6,*puVar7,&local_50);
    *(char *)(param_1 + 0xad) = cVar4 == '\0';
    return cVar4 != '\0';
  }
  if ((*puVar15 & 1) == 0) {
    return false;
  }
  piVar1 = (int *)(param_1 + 0x24);
  if (*piVar1 == 0) {
    cVar4 = *(char *)(param_1 + 0x48);
    FUN_10007548(param_1);
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_03)(param_1);
    if (*(char *)(param_1 + 0x1f) == '\0') {
      if (cVar4 == '\0') {
        local_50 = 0;
        local_48 = FUN_10007228(param_1);
        iStack_44 = *(ushort *)(param_1 + 0xe) - 1;
        (*pcVar2)();
        (*extraout_w11_04)(param_1,&local_50);
      }
      else {
        local_60 = (uint *)0x0;
        local_5c = (code *)0x0;
        uVar5 = *(undefined4 *)(param_1 + 0x20);
        (*pcVar2)();
        cVar4 = (*extraout_w11_05)(param_1,&local_5c,&local_60);
        if (cVar4 != '\0') {
          (*pcVar2)();
          (*extraout_w11_06)(param_1,uVar5,local_5c);
          goto LAB_10008ca0;
        }
      }
    }
    else {
LAB_10008ca0:
      (*pcVar2)();
      (*extraout_w11_07)(param_1);
    }
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(param_1);
    uVar13 = 0x80;
    iVar11 = 0;
    iVar12 = 0;
    uVar14 = 0;
    if (*(uint *)(param_1 + 0x2c) == 0) goto LAB_10008ccc;
    local_5c = pcVar2;
    local_58 = pcVar2;
    local_60 = puVar15;
    do {
      iVar10 = *piVar1;
      if ((*(byte *)(iVar10 + uVar14) & uVar13) == 0) {
        if (iVar11 != iVar12) {
          FUN_100075f8(param_1,&local_50,iVar11,iVar12);
          (*local_5c)();
          (*extraout_w11_01)(param_1,&local_50);
          FUN_10007450(param_1,iVar11,iVar12);
          iVar10 = *piVar1;
          iVar11 = iVar12;
        }
        iVar11 = iVar11 + 1;
      }
      pcVar2 = local_58;
      puVar15 = local_60;
      iVar12 = iVar12 + 1;
      *(byte *)(iVar10 + uVar14) = *(byte *)(iVar10 + uVar14) & ((byte)uVar13 ^ 0xff);
      bVar3 = uVar13 < 2;
      if (bVar3) {
        uVar14 = uVar14 + 1;
      }
      uVar13 = uVar13 >> 1;
      if (bVar3) {
        uVar13 = 0x80;
      }
    } while (uVar14 < *(uint *)(param_1 + 0x2c));
    if (iVar11 == iVar12) goto LAB_10008ccc;
    FUN_100075f8(param_1,&local_50,iVar11,iVar12);
    (*pcVar2)();
    (*extraout_w11_02)(param_1,&local_50);
  }
  FUN_10007450(param_1,iVar11,iVar12);
LAB_10008ccc:
  *puVar15 = *puVar15 & 0xfffffffe;
  return true;
}

