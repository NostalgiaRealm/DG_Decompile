/*
 * FUN_1003ed10 at 1003ed10
 * undefined FUN_1003ed10(void)
 * Address ranges: 1003ed10-1003ef5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003ed10(int param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  code *pcVar7;
  char cVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auStack_50 [16];
  
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 == 0 || param_2 < uVar4) {
    return 0;
  }
  if (uVar4 + (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) <= param_2) {
    return 0;
  }
  FUN_10157b40(auStack_50);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x24);
  if (*piVar1 == 0) {
    FUN_1003f3e0(param_1);
    pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_02)(param_1);
    if ((*(uint *)(param_1 + 0x34) & 1) == 0) {
      (*pcVar7)();
      cVar8 = (*extraout_w11_03)(param_1);
      if (cVar8 != '\0') {
        (*pcVar7)();
        (*extraout_w11_04)(param_1,0xffffffff);
      }
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    uVar4 = (int)((param_2 - uVar4) + ((uint)((int)(param_2 - uVar4) >> 0xb) >> 0x14)) >> 0xc;
    pbVar2 = (byte *)((uVar4 & 7) + 0x10161420);
    bVar5 = *pbVar2;
    if ((*(byte *)(*piVar1 + (uVar4 >> 3)) & bVar5) == 0) {
      bVar5 = *(byte *)(*(int *)(param_1 + 0x28) + (uVar4 >> 3)) & bVar5;
      if (bVar5 == 0) {
        bVar6 = false;
      }
      else {
        (*pcVar7)();
        cVar8 = (*extraout_w11_00)(param_1);
        bVar6 = cVar8 == '\0' && bVar5 != 0;
      }
      if (!bVar6) {
        (*pcVar7)();
        cVar8 = (*extraout_w11_01)(param_1,uVar4);
        if (cVar8 == '\0') goto LAB_1003ef24;
      }
      pbVar3 = (byte *)(*piVar1 + (uVar4 >> 3));
      bVar5 = *pbVar2;
      *pbVar3 = *pbVar3 | bVar5;
      pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + (uVar4 >> 3));
      *pbVar2 = *pbVar2 | bVar5;
    }
  }
LAB_1003ef24:
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 5;
  FUN_10157a90(auStack_50);
  return 1;
}

