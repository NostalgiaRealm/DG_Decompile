/*
 * FUN_1800ba458 at 1800ba458
 * ulonglong __fastcall FUN_1800ba458(longlong param_1, int * param_2, longlong param_3)
 * Address ranges: 1800ba458-1800ba57c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ba458(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  BOOL BVar9;
  int *piVar10;
  ulonglong uVar11;
  LPCRITICAL_SECTION p_Var12;
  ulonglong uVar13;
  undefined8 local_res8 [4];
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_a8 [34];
  
  p_Var12 = DAT_1801123a8;
  BVar9 = TryEnterCriticalSection(DAT_1801123a8);
  if (BVar9 == 0) {
    p_Var12 = (LPCRITICAL_SECTION)0x0;
    FUN_1800044dc(0);
  }
  uVar13 = 0x8876086c;
  if ((*(uint *)(param_1 + -0x59c0) & 0x200) == 0) {
    local_f8[0] = *(undefined4 *)(param_1 + -0x5990);
    piVar10 = FUN_18000385c(p_Var12,local_a8,param_2,*(HWND *)(param_1 + -0x59c8));
    local_b0 = 0;
    uVar1 = *(undefined8 *)piVar10;
    uVar2 = *(undefined8 *)(piVar10 + 2);
    uVar3 = *(undefined8 *)(piVar10 + 4);
    uVar4 = *(undefined8 *)(piVar10 + 6);
    uVar5 = *(undefined8 *)(piVar10 + 8);
    uVar6 = *(undefined8 *)(piVar10 + 10);
    uVar7 = *(undefined8 *)(piVar10 + 0xc);
    uVar8 = *(undefined8 *)(piVar10 + 0xe);
    local_res8[0] = 0;
    local_f0 = uVar1;
    uStack_e8 = uVar2;
    local_e0 = uVar3;
    uStack_d8 = uVar4;
    local_d0 = uVar5;
    uStack_c8 = uVar6;
    local_c0 = uVar7;
    uStack_b8 = uVar8;
    uVar11 = FUN_180004f88((longlong *)(param_1 + -0x6838),1,(longlong)local_f8,(longlong)local_res8
                           ,param_3,0);
    uVar13 = uVar11 & 0xffffffff;
    if (-1 < (int)uVar11) {
      *(undefined8 *)param_2 = uVar1;
      *(undefined8 *)(param_2 + 2) = uVar2;
      *(undefined8 *)(param_2 + 4) = uVar3;
      *(undefined8 *)(param_2 + 6) = uVar4;
      *(undefined8 *)(param_2 + 8) = uVar5;
      *(undefined8 *)(param_2 + 10) = uVar6;
      *(undefined8 *)(param_2 + 0xc) = uVar7;
      *(undefined8 *)(param_2 + 0xe) = uVar8;
    }
  }
  LeaveCriticalSection(DAT_1801123a8);
  return uVar13;
}

