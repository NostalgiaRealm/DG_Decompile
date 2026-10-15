/*
 * FUN_180201e10 at 180201e10
 * undefined FUN_180201e10(void)
 * Address ranges: 180201e10-180201ff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180201e10(undefined8 param_1,longlong param_2,int *param_3,int param_4,int param_5,
                  float *param_6,float *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  code *extraout_x11;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 auStack_b0 [16];
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  undefined1 auStack_80 [80];
  
  iVar5 = thunk_FUN_180223d24(param_3);
  if (iVar5 == 0) {
    iVar1 = param_3[3] * *(int *)(param_2 + 0x24);
    iVar5 = param_3[2] * *(int *)(param_2 + 0x20);
    iVar8 = param_3[1] * *(int *)(param_2 + 0x24);
    iVar7 = *param_3 * *(int *)(param_2 + 0x20);
  }
  else {
    iVar5 = *(int *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x1c);
    iVar8 = 0;
    iVar7 = 0;
  }
  uVar6 = thunk_FUN_180223c20(&local_c0,iVar7,iVar8,iVar5,iVar1);
  FUN_180201ff8(uVar6,param_2,auStack_b0,&local_c0);
  uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar6,auStack_80);
  fVar9 = (float)(iStack_94 - iStack_9c);
  iVar5 = *(int *)(param_2 + 0xc50);
  uVar2 = *(uint *)(param_2 + 0x20);
  *param_7 = (float)local_a0;
  param_7[1] = (float)iStack_9c;
  fVar12 = (float)(local_98 - local_a0);
  param_7[2] = fVar12;
  param_7[3] = fVar9;
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180201ef8);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)(local_b8 - local_c0) / uVar2;
  }
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = local_c0 / (int)uVar2;
  }
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180201f1c);
    (*pcVar4)();
  }
  iVar8 = 0;
  if (uVar3 != 0) {
    iVar8 = (((*(int *)(param_2 + 0xc40) - *(int *)(param_2 + 0xc48) * iVar5) - iVar1) *
            (local_98 - local_a0)) / (int)uVar3;
  }
  uVar2 = *(uint *)(param_2 + 0x24);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180201f3c);
    (*pcVar4)();
  }
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = local_bc / (int)uVar2;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)(local_b4 - local_bc) / uVar2;
  }
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180201f5c);
    (*pcVar4)();
  }
  iVar7 = 0;
  if (uVar3 != 0) {
    iVar7 = (((*(int *)(param_2 + 0xc44) - *(int *)(param_2 + 0xc4c) * iVar5) - iVar1) *
            (iStack_94 - iStack_9c)) / (int)uVar3;
  }
  param_6[2] = 0.0;
  param_6[3] = 0.0;
  param_6[7] = 0.0;
  param_6[6] = 1.0;
  param_6[10] = 0.0;
  fVar10 = (float)(int)(iVar8 << 1 | 1) / fVar12 - 1.0;
  fVar11 = 1.0 - (float)(int)(iVar7 << 1 | 1) / fVar9;
  *param_6 = fVar10;
  param_6[1] = fVar11;
  fVar12 = (float)(int)((iVar8 + iVar5 * param_4) * 2 | 1) / fVar12 - 1.0;
  param_6[4] = fVar12;
  param_6[5] = fVar11;
  fVar9 = 1.0 - (float)(int)((iVar7 + iVar5 * param_5) * 2 | 1) / fVar9;
  param_6[8] = fVar10;
  param_6[9] = fVar9;
  param_6[0xb] = 1.0;
  param_6[0xc] = fVar12;
  param_6[0xd] = fVar9;
  param_6[0xe] = 1.0;
  param_6[0xf] = 1.0;
  return;
}

