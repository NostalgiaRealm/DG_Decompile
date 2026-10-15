/*
 * FUN_1800bc750 at 1800bc750
 * int __fastcall FUN_1800bc750(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, uint param_8, undefined8 * param_9, longlong param_10)
 * Address ranges: 1800bc750-1800bca13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800bc750(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 int param_7,uint param_8,undefined8 *param_9,longlong param_10)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  bool bVar6;
  BOOL BVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_res8 [8];
  undefined4 local_58 [6];
  
  lVar1 = param_1 + -0x6838;
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar4 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar4 = true;
    BVar7 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar7 == 0) {
      FUN_1800044dc(0);
    }
  }
  uVar5 = param_8;
  local_res8[0] = 0;
  local_58[0] = 0x2a;
  iVar8 = FUN_1800052d8(lVar1,param_2,param_3,param_4,&param_5,param_6,param_7,param_8,param_9,
                        local_res8,local_58);
  if (iVar8 == 0x876086f) {
    uVar12 = 1;
  }
  else {
    uVar12 = param_5;
    if (iVar8 < 0) goto LAB_1800bc9df;
  }
  if (param_10 != 0) {
    iVar8 = -0x7789f794;
    goto LAB_1800bc9df;
  }
  iVar8 = -0x7ff8fff2;
  plVar9 = FUN_1800ad210(lVar1,param_2,param_3,param_4,(short)uVar12,param_6,param_7,uVar5,
                         local_58[0],*(undefined8 *)(param_1 + -0x59a0),local_res8[0]);
  if (plVar9 == (longlong *)0x0) goto LAB_1800bc9df;
  bVar6 = FUN_1800c3bb4(plVar9);
  if (bVar6) {
    iVar2 = *(int *)(param_1 + -0x594c);
    if (*(int *)(param_1 + -0x5950) == iVar2) {
      uVar13 = 0x10;
      if (iVar2 != 0) {
        uVar13 = (ulonglong)(uint)(iVar2 * 2);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar13;
      uVar10 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      puVar11 = (undefined8 *)thunk_FUN_1800fbccc(uVar10);
      if (puVar11 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar11,*(undefined8 **)(param_1 + -0x5958),
                      (ulonglong)*(uint *)(param_1 + -0x594c) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + -0x5958));
        *(undefined8 **)(param_1 + -0x5958) = puVar11;
        *(int *)(param_1 + -0x594c) = (int)uVar13;
        goto LAB_1800bc94b;
      }
    }
    else {
LAB_1800bc94b:
      *(longlong **)(*(longlong *)(param_1 + -0x5958) + (ulonglong)*(uint *)(param_1 + -0x5950) * 8)
           = plVar9;
      *(int *)(param_1 + -0x5950) = *(int *)(param_1 + -0x5950) + 1;
      uVar10 = FUN_1800c3e18((longlong)(plVar9 + 0x23),(longlong *)&DAT_1800fd690,param_9);
      iVar8 = (int)uVar10;
      if (-1 < iVar8) {
        *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) =
             *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) -
             (ulonglong)local_res8[0];
        FUN_18000150c(lVar1,plVar9 + 0x22);
        goto LAB_1800bc9df;
      }
      FUN_180007c30(lVar1,(longlong)plVar9);
    }
    FUN_1800c3d54(plVar9);
  }
  FUN_1800c38ac(plVar9);
  FUN_1800fbcf0(plVar9);
LAB_1800bc9df:
  if (bVar4) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return iVar8;
}

