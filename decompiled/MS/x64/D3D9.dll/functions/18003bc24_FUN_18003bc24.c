/*
 * FUN_18003bc24 at 18003bc24
 * undefined __fastcall FUN_18003bc24(longlong param_1, uint param_2, undefined8 * param_3, longlong param_4, int param_5, uint param_6, byte param_7)
 * Address ranges: 18003bc24-18003bf07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003bc24(longlong param_1,uint param_2,undefined8 *param_3,longlong param_4,int param_5,
                  uint param_6,byte param_7)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 local_res10;
  
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
    if (2 < param_6) {
      uVar9 = param_6 - 2;
      if (uVar9 != 0) {
        local_res10 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
          if (0x1000U - iVar6 < 0x10) {
            FUN_180038960(param_1,0,CONCAT71((int7)((ulonglong)(param_4 + -0x30) >> 8),1),0);
            iVar6 = 0;
          }
          uVar4 = (0x1000U - iVar6) / 3;
          uVar8 = uVar9;
          if (uVar4 <= uVar9) {
            uVar8 = uVar4;
          }
          uVar4 = uVar8 * 3;
          if (param_4 == 0) {
            FUN_180038b30(param_1,4,(ulonglong)param_3,uVar13,*(longlong *)(param_1 + 0xf710),iVar2,
                          uVar1,0,uVar4,param_7);
          }
          else {
            FUN_18003aaf8(param_1,4,(undefined8 *)(param_4 + -0x30),uVar13,
                          *(longlong *)(param_1 + 0xf710),iVar2,uVar1,0,uVar4,'\0','\0');
          }
          uVar12 = 0;
          if (uVar8 != 0) {
            do {
              uVar7 = 0;
              do {
                *(uint *)(*(longlong *)(param_1 + 0x88) + uVar7 * 4) =
                     (int)uVar7 + local_res10 + 1 + param_5 + uVar12;
                uVar11 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar11;
              } while ((int)uVar11 < 2);
              uVar12 = uVar12 + 1;
              *(int *)(*(longlong *)(param_1 + 0x88) + 8) = param_5;
              *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0xc;
            } while (uVar12 < uVar8);
          }
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar4;
          local_res10 = local_res10 + uVar8;
          uVar9 = uVar9 - uVar8;
        } while (uVar9 != 0);
      }
      FUN_180038960(param_1,0,0,0);
    }
  }
  else {
    uVar7 = (ulonglong)param_2;
    if (param_4 == 0) {
      FUN_180038b30(param_1,param_2,(ulonglong)param_3,uVar13,*(longlong *)(param_1 + 0xfd68),iVar2,
                    uVar1,0,0,param_7);
    }
    else {
      param_3 = (undefined8 *)(param_4 + -0x30);
      FUN_18003aaf8(param_1,param_2,param_3,uVar13,*(longlong *)(param_1 + 0xfd68),iVar2,uVar1,0,0,
                    '\0',*(char *)(param_4 + 0x1c));
    }
    cVar5 = FUN_180035080(param_1,uVar7,param_3,uVar13);
    if (cVar5 != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar3 + 0x68))(plVar3,param_6,param_5);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xf6d0) + 0x620));
  }
  return;
}

