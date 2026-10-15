/*
 * FUN_180051b48 at 180051b48
 * undefined __cdecl FUN_180051b48(undefined8 param_1, longlong param_2, RECT * param_3, int param_4, int param_5, float * param_6, float * param_7)
 * Address ranges: 180051b48-180051d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051b48(undefined8 param_1,longlong param_2,RECT *param_3,int param_4,int param_5,
                  float *param_6,float *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  tagRECT local_c0;
  tagRECT tStack_b0;
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  undefined1 auStack_80 [80];
  
  BVar5 = IsRectEmpty(param_3);
  if (BVar5 == 0) {
    iVar2 = param_3->bottom * *(int *)(param_2 + 0x24);
    iVar1 = param_3->right * *(int *)(param_2 + 0x20);
    iVar8 = param_3->top * *(int *)(param_2 + 0x24);
    iVar7 = param_3->left * *(int *)(param_2 + 0x20);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x18);
    iVar2 = *(int *)(param_2 + 0x1c);
    iVar8 = 0;
    iVar7 = 0;
  }
  uVar6 = SetRect(&local_c0,iVar7,iVar8,iVar1,iVar2);
  FUN_180051d30((ulonglong)uVar6,param_2,&tStack_b0,&local_c0.left);
  (**(code **)(**(longlong **)(param_2 + 8) + 0x60))(*(longlong **)(param_2 + 8),auStack_80);
  uVar6 = *(uint *)(param_2 + 0x20);
  fVar12 = (float)(iStack_94 - iStack_9c);
  iVar1 = *(int *)(param_2 + 0xc50);
  *param_7 = (float)local_a0;
  param_7[1] = (float)iStack_9c;
  fVar9 = (float)(local_98 - local_a0);
  param_7[2] = fVar9;
  param_7[3] = fVar12;
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180051c2c);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = (uint)(local_c0.right - local_c0.left) / uVar6;
  }
  iVar2 = 0;
  if (uVar6 != 0) {
    iVar2 = local_c0.left / (int)uVar6;
  }
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180051c50);
    (*pcVar4)();
  }
  iVar8 = 0;
  if (uVar3 != 0) {
    iVar8 = (((*(int *)(param_2 + 0xc40) - *(int *)(param_2 + 0xc48) * iVar1) - iVar2) *
            (local_98 - local_a0)) / (int)uVar3;
  }
  uVar6 = *(uint *)(param_2 + 0x24);
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180051c70);
    (*pcVar4)();
  }
  iVar2 = 0;
  if (uVar6 != 0) {
    iVar2 = local_c0.top / (int)uVar6;
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = (uint)(local_c0.bottom - local_c0.top) / uVar6;
  }
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180051c90);
    (*pcVar4)();
  }
  iVar7 = 0;
  if (uVar3 != 0) {
    iVar7 = (((*(int *)(param_2 + 0xc44) - *(int *)(param_2 + 0xc4c) * iVar1) - iVar2) *
            (iStack_94 - iStack_9c)) / (int)uVar3;
  }
  param_6[2] = 0.0;
  param_6[3] = 0.0;
  param_6[7] = 0.0;
  param_6[6] = 1.0;
  param_6[0xf] = 1.0;
  param_6[10] = 0.0;
  fVar11 = (float)(int)(iVar8 << 1 | 1) / fVar9 - 1.0;
  fVar10 = 1.0 - (float)(int)(iVar7 << 1 | 1) / fVar12;
  *param_6 = fVar11;
  param_6[1] = fVar10;
  fVar9 = (float)(int)((iVar8 + iVar1 * param_4) * 2 | 1) / fVar9 - 1.0;
  param_6[4] = fVar9;
  param_6[5] = fVar10;
  param_6[0xb] = 1.0;
  param_6[0xc] = fVar9;
  fVar9 = 1.0 - (float)(int)((iVar7 + iVar1 * param_5) * 2 | 1) / fVar12;
  param_6[8] = fVar11;
  param_6[9] = fVar9;
  param_6[0xd] = fVar9;
  param_6[0xe] = 1.0;
  return;
}

