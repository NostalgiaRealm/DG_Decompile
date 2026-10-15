/*
 * FUN_100462e0 at 100462e0
 * undefined FUN_100462e0(void)
 * Address ranges: 100462e0-100465eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100462e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  
  fVar16 = *(float *)(param_2 + 0x1c);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x138);
  fVar12 = (float)*(uint *)(*(int *)(iVar1 + 4) + 0x9e);
  fVar11 = fVar12 * fVar16;
  if (fVar11 != 0.0) {
    fVar15 = *(float *)(param_2 + 0x20);
    fVar12 = fVar12 * fVar15;
    if (fVar12 != 0.0) {
      local_70 = 0;
      fVar14 = *(float *)(param_2 + 0x24);
      local_60 = 0;
      fVar13 = *(float *)(param_2 + 0x28);
      uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x28);
      uVar3 = *(uint *)(*(int *)(param_1 + 8) + 0x2c);
      uVar4 = *(uint *)(param_2 + 0x14);
      uVar5 = *(uint *)(param_2 + 0x10);
      uVar9 = *(undefined4 *)(param_2 + 4);
      fStack_64 = (float)uVar4;
      iVar6 = *(int *)(iVar1 + 0x3184);
      local_68 = (float)uVar5;
      iVar1 = *(int *)(iVar1 + 0x3180);
      iVar7 = iVar1 + iVar6 * 0x1510;
      local_5c = 0x3f800000;
      FUN_10067af0(iVar1,iVar6,&local_70);
      FUN_100674a8(iVar1,iVar6,0x100977b0,0);
      FUN_10067140(iVar1,iVar6,&DAT_10097410);
      FUN_10067780(iVar1,iVar6,0x10097788);
      FUN_10067ec8(iVar1,iVar6,5,*(undefined4 *)(iVar7 + 0x988),*(undefined4 *)(iVar7 + 0x980),
                   *(undefined4 *)(iVar7 + 0x974));
      local_7c = 0;
      local_74 = 0;
      local_80 = uVar9;
      FUN_10068080(iVar1,iVar6,4,&local_80,0);
      FUN_10067d48(iVar1,iVar6,0);
      FUN_10067e28(iVar1,iVar6,0,0);
      iVar6 = *(int *)(iVar7 + 0x994);
      iVar1 = 0;
      if (iVar6 + 10U < 0x401) {
        iVar1 = iVar6;
      }
      *(int *)(iVar7 + 0x994) = iVar1 + 10;
      pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar10 = (*extraout_w11)(uVar9,*(undefined4 *)(iVar7 + 0x990),0);
      if (-1 < (int)uVar10) {
        FUN_1006ab08(fVar16 * 0.0 + fVar14,fVar15 * 0.0 + fVar13,(float)uVar2 * fVar16 + fVar14,
                     (float)uVar3 * fVar15 + fVar13,fVar11,fVar12,uVar10,local_58 + iVar1 * 0x10,
                     uVar5,uVar4);
        uVar9 = (*pcVar8)();
        (*extraout_w11_00)(uVar9,*(undefined4 *)(iVar7 + 0x990),0);
        uVar9 = (*pcVar8)();
        (*extraout_w11_01)(uVar9,10,iVar1);
      }
    }
  }
  return;
}

