/*
 * FUN_1800889b8 at 1800889b8
 * undefined FUN_1800889b8(void)
 * Address ranges: 1800889b8-180088c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800889b8(longlong param_1,ulonglong param_2,int param_3,longlong param_4,int param_5,
             int *param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong extraout_x12;
  ulonglong extraout_x13;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 local_60;
  int iStack_5c;
  uint local_58;
  int local_54;
  
  uVar14 = param_2 & 0xffffffff;
  uVar13 = (uint)param_2;
  if (*(char *)(param_1 + 0x169) == '\0') {
    uVar8 = FUN_180085858(param_1,uVar14,param_3,param_4,param_5,param_6);
    return uVar8;
  }
  FUN_1800e5470(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  lVar9 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 200))(param_1 + -0xe0);
  if ((lVar9 != 0) && (uVar10 = FUN_180084320(param_1 + -0xe0), (uVar10 & 1) != 0)) {
    (*(code *)**(undefined8 **)(param_1 + -0xe0))(param_1 + -0xe0,uVar14,param_3);
    plVar11 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
    iVar6 = (**(code **)(*plVar11 + 0x70))
                      (plVar11,*(undefined8 *)(param_1 + -0x28),
                       uVar13 + *(int *)(param_1 + -0xa4) * param_3,2,0,&local_60);
    if (-1 < iVar6) {
      uVar15 = *(uint *)(param_1 + -0xb4);
      bVar2 = (&DAT_180231708)[uVar15];
      uVar1 = *(uint *)(&DAT_180231470 + (ulonglong)uVar15 * 4);
      if (uVar1 == 0x18) {
        uVar1 = 0x20;
      }
      uVar12 = uVar1 >> 3;
      if (uVar1 < 8) {
        uVar12 = *(uint *)(&DAT_180231630 + (ulonglong)uVar15 * 4);
      }
      uVar7 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),uVar14,uVar12);
      uVar15 = uVar7;
      if (uVar1 < 8) {
        bVar3 = *(byte *)(extraout_x12 + (extraout_x13 & 0xffffffff));
        if (bVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180088acc);
          (*pcVar4)();
        }
        uVar15 = 0;
        if (bVar3 != 0) {
          uVar15 = uVar7 / bVar3;
        }
      }
      uVar7 = param_6[1];
      if (uVar7 <= (uint)param_6[3]) {
        iVar6 = *param_6;
        bVar5 = uVar7 == param_6[3];
        do {
          if (bVar5) {
            uVar15 = param_6[2];
          }
          thunk_FUN_180001218((ulonglong)(uVar7 * local_58) + (ulonglong)(iVar6 * uVar12) +
                              CONCAT44(iStack_5c,local_60),
                              (ulonglong)(uVar7 * param_5) + (ulonglong)(iVar6 * uVar12) + param_4,
                              (uVar15 - iVar6) * uVar12);
          uVar7 = uVar7 + 1;
          iVar6 = 0;
          bVar5 = uVar7 == param_6[3];
        } while (uVar7 <= (uint)param_6[3]);
      }
      uVar15 = (uint)bVar2;
      plVar11 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
      (**(code **)(*plVar11 + 0x78))
                (plVar11,*(undefined8 *)(param_1 + -0x28),
                 uVar13 + *(int *)(param_1 + -0xa4) * param_3);
      iStack_5c = param_6[1];
      local_60 = 0;
      if (uVar1 < 8) {
        iStack_5c = iStack_5c * uVar15;
      }
      local_58 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar13 & 0x1f);
      if (local_58 == 0) {
        local_58 = 1;
      }
      local_54 = param_6[3] + 1;
      if (uVar1 < 8) {
        local_54 = uVar15 + param_6[3] * uVar15;
      }
      (**(code **)(*(longlong *)(param_1 + -0xe0) + 0x10))
                (param_1 + -0xe0,uVar13 + *(int *)(param_1 + -0xa4) * param_3,&local_60);
      uVar8 = 1;
      goto LAB_180088be4;
    }
  }
  uVar8 = 0;
LAB_180088be4:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar8;
}

