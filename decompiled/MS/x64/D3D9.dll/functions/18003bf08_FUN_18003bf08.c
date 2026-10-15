/*
 * FUN_18003bf08 at 18003bf08
 * undefined __fastcall FUN_18003bf08(longlong param_1, uint param_2, undefined8 * param_3, longlong param_4, longlong param_5, undefined4 param_6, uint param_7, uint param_8, char param_9, byte param_10)
 * Address ranges: 18003bf08-18003c32f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003bf08(longlong param_1,uint param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,uint param_7,uint param_8,char param_9,
                  byte param_10)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int local_res10;
  uint *local_58;
  
  lVar10 = 0;
  do {
    plVar3 = *(longlong **)(param_1 + 0xf9b0 + lVar10 * 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  if (*(longlong **)(param_1 + 0xf9d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf9d0) + 8))();
  }
  FUN_180038960(param_1,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x1028);
  iVar2 = *(int *)(param_1 + 0x106c);
  uVar13 = *(ulonglong *)(param_1 + 0xfd60);
  if (param_2 == 6) {
    if (2 < param_8) {
      uVar9 = param_8 - 2;
      if (uVar9 != 0) {
        local_res10 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
          if (0x1000U - iVar6 < 0x10) {
            FUN_180038960(param_1,0,CONCAT71((int7)((ulonglong)(param_4 + -0x30) >> 8),1),0);
            iVar6 = 0;
          }
          uVar12 = (0x1000U - iVar6) / 3;
          uVar8 = uVar9;
          if (uVar12 <= uVar9) {
            uVar8 = uVar12;
          }
          if (param_4 == 0) {
            FUN_180038b30(param_1,4,(ulonglong)param_3,uVar13,*(longlong *)(param_1 + 0xf710),iVar2,
                          uVar1,0,uVar8 * 3,param_10);
          }
          else {
            FUN_18003aaf8(param_1,4,(undefined8 *)(param_4 + -0x30),uVar13,
                          *(longlong *)(param_1 + 0xf710),iVar2,uVar1,0,0,uVar8 * 3 != 0,'\0');
          }
          if (uVar8 != 0) {
            uVar12 = 0;
            local_58 = *(uint **)(param_1 + 0x88);
            do {
              uVar5 = (ulonglong)(uVar12 + param_7 + 1 + local_res10);
              if (param_9 == '\0') {
                uVar14 = (uint)*(ushort *)(param_5 + uVar5 * 2);
              }
              else {
                uVar14 = *(uint *)(param_5 + uVar5 * 4);
              }
              uVar5 = (ulonglong)(uVar12 + param_7 + 2 + local_res10);
              if (param_9 == '\0') {
                uVar7 = (uint)*(ushort *)(param_5 + (ulonglong)param_7 * 2);
                uVar11 = (uint)*(ushort *)(param_5 + uVar5 * 2);
              }
              else {
                uVar7 = *(uint *)(param_5 + (ulonglong)param_7 * 4);
                uVar11 = *(uint *)(param_5 + uVar5 * 4);
              }
              uVar12 = uVar12 + 1;
              *local_58 = uVar14;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 4) = uVar11;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 8) = uVar7;
              local_58 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
              *(uint **)(param_1 + 0x88) = local_58;
            } while (uVar12 < uVar8);
          }
          local_res10 = local_res10 + uVar8;
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar8 * 3;
          *(undefined4 *)(param_1 + 0x98) = param_6;
          uVar9 = uVar9 - uVar8;
        } while (uVar9 != 0);
      }
      FUN_180038960(param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x98) = 0;
      return;
    }
    return;
  }
  if (*(longlong *)(param_1 + 0xfd78) == 0) {
    return;
  }
  uVar5 = (ulonglong)param_2;
  if (param_4 == 0) {
    uVar9 = 1;
    FUN_180038b30(param_1,param_2,(ulonglong)param_3,uVar13,*(longlong *)(param_1 + 0xfd68),iVar2,
                  uVar1,0,0,param_10);
  }
  else {
    param_3 = (undefined8 *)(param_4 + -0x30);
    FUN_18003aaf8(param_1,param_2,param_3,uVar13,*(longlong *)(param_1 + 0xfd68),iVar2,uVar1,0,0,
                  '\0',*(char *)(param_4 + 0x1c));
    uVar9 = *(uint *)(param_4 + 0x2c);
  }
  cVar4 = FUN_180035080(param_1,uVar5,param_3,uVar13);
  if (cVar4 != '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0xfd78) + 0x30) == 1) {
      param_7 = FUN_18003c870(*(longlong *)(param_1 + 0xfd78),param_5,param_7,param_8);
      if (param_7 == 0xffffffff) goto LAB_18003c30b;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      lVar10 = *plVar3;
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      lVar10 = *plVar3;
    }
    if (uVar9 < 2) {
      (**(code **)(lVar10 + 0x60))(plVar3,param_8,param_7,param_6);
    }
    else {
      (**(code **)(lVar10 + 0xa0))(plVar3,param_8,uVar9,param_7,param_6,0);
    }
  }
LAB_18003c30b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6d0) + 0x620));
  return;
}

