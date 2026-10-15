/*
 * FUN_1010e460 at 1010e460
 * undefined FUN_1010e460(void)
 * Address ranges: 1010e460-1010e733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010e460(undefined8 param_1,int param_2,int *param_3,int param_4,int param_5,float *param_6
                 ,float *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 auStack_b0 [16];
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  undefined1 auStack_80 [64];
  
  iVar7 = (*(code *)PTR_FUN_1016c210)(param_3);
  if (iVar7 == 0) {
    uVar9 = (*(code *)PTR_FUN_1016c26c)
                      (&local_c0,*param_3 * *(int *)(param_2 + 0x18),
                       param_3[1] * *(int *)(param_2 + 0x1c),param_3[2] * *(int *)(param_2 + 0x18),
                       param_3[3] * *(int *)(param_2 + 0x1c));
  }
  else {
    uVar9 = (*(code *)PTR_FUN_1016c26c)
                      (&local_c0,0,0,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14)
                      );
  }
  FUN_1010eb18(uVar9,param_2,auStack_b0,&local_c0);
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar8,auStack_80);
  uVar1 = *(uint *)(param_2 + 0x18);
  fVar10 = (float)(local_98 - local_a0);
  fVar14 = (float)(iStack_94 - iStack_9c);
  *param_7 = (float)local_a0;
  iVar7 = *(int *)(param_2 + 0xc40);
  iVar2 = *(int *)(param_2 + 0xc38);
  param_7[1] = (float)iStack_9c;
  param_7[2] = fVar10;
  param_7[3] = fVar14;
  iVar3 = *(int *)(param_2 + 0xc48);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar9 = SoftwareBreakpoint(0xf004,0x1010e5dc);
    (*(code *)uVar9)();
  }
  iVar4 = 0;
  if (uVar1 != 0) {
    iVar4 = local_c0 / (int)uVar1;
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar6 = (uint)(local_b8 - local_c0) / uVar1;
  }
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    uVar9 = SoftwareBreakpoint(0xf004,0x1010e5fc);
    (*(code *)uVar9)();
  }
  iVar5 = 0;
  if (uVar6 != 0) {
    iVar5 = (((iVar2 - iVar7 * iVar3) - iVar4) * (local_98 - local_a0)) / (int)uVar6;
  }
  uVar1 = *(uint *)(param_2 + 0x1c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    uVar9 = SoftwareBreakpoint(0xf004,0x1010e624);
    (*(code *)uVar9)();
  }
  iVar7 = 0;
  if (uVar1 != 0) {
    iVar7 = local_bc / (int)uVar1;
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar6 = (uint)(local_b4 - local_bc) / uVar1;
  }
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    uVar9 = SoftwareBreakpoint(0xf004,0x1010e644);
    (*(code *)uVar9)();
  }
  iVar2 = 0;
  if (uVar6 != 0) {
    iVar2 = (((*(int *)(param_2 + 0xc3c) - *(int *)(param_2 + 0xc44) * iVar3) - iVar7) *
            (iStack_94 - iStack_9c)) / (int)uVar6;
  }
  fVar13 = (float)(iVar5 * 2 + 1) / fVar10 - 1.0;
  fVar12 = 1.0 - (float)(iVar2 * 2 + 1) / fVar14;
  fVar11 = (float)((iVar5 + iVar3 * param_4) * 2 + 1) / fVar10 - 1.0;
  *param_6 = fVar13;
  param_6[1] = fVar12;
  param_6[2] = 0.0;
  param_6[3] = 0.0;
  param_6[4] = fVar11;
  param_6[5] = fVar12;
  param_6[6] = 1.0;
  param_6[7] = 0.0;
  param_6[8] = fVar13;
  fVar10 = 1.0 - (float)((iVar2 + iVar3 * param_5) * 2 + 1) / fVar14;
  param_6[9] = fVar10;
  param_6[10] = 0.0;
  param_6[0xb] = 1.0;
  param_6[0xc] = fVar11;
  param_6[0xd] = fVar10;
  param_6[0xe] = 1.0;
  param_6[0xf] = 1.0;
  return;
}

