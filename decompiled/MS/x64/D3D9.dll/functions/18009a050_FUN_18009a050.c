/*
 * FUN_18009a050 at 18009a050
 * undefined8 __fastcall FUN_18009a050(longlong * param_1, longlong param_2, longlong param_3, longlong param_4, longlong param_5, uint param_6, uint param_7, char param_8)
 * Address ranges: 18009a050-18009a3cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18009a050(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             uint param_6,uint param_7,char param_8)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong extraout_RAX;
  longlong extraout_RAX_00;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong local_res8;
  longlong local_res10 [2];
  longlong local_res20;
  undefined4 extraout_var;
  
  uVar8 = 1;
  uVar4 = 0xffffffff;
  if (param_2 != 0) {
    uVar4 = FUN_1800e1704(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),
                          (param_3 != 0) + 1);
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  if (param_4 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_1800e1704(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938),
                          param_6 * param_7);
  }
  uVar9 = param_6 * param_7;
  *(uint *)(param_1 + 6) = uVar4;
  if (param_5 == 0) {
    lVar6 = 0xffffffff;
  }
  else {
    uVar4 = FUN_1800e1704(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940),uVar9);
    lVar6 = CONCAT44(extraout_var,uVar4);
  }
  *(int *)((longlong)param_1 + 0x34) = (int)lVar6;
  if (((param_4 == 0) || ((int)param_1[6] != -1)) && ((param_5 == 0 || ((int)lVar6 != -1)))) {
    if (param_2 != 0) {
      FUN_1800e1d04(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),&local_res8,
                    *(uint *)((longlong)param_1 + 0x2c),0);
      lVar6 = *(longlong *)((longlong)param_1 + 0x1c);
      if ((lVar6 == 0) || (param_8 == '\0')) {
        lVar6 = *(longlong *)((longlong)param_1 + 0x14);
      }
      plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0 + *param_1);
      (**(code **)(*plVar2 + 0x90))(plVar2,lVar6,param_2,local_res8);
    }
    if (param_3 != 0) {
      FUN_1800e1d04(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),&local_res8,
                    *(uint *)((longlong)param_1 + 0x2c),1);
      lVar6 = *(longlong *)((longlong)param_1 + 0x1c);
      if ((lVar6 == 0) || (param_8 == '\0')) {
        lVar6 = *(longlong *)((longlong)param_1 + 0x14);
      }
      plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0 + *param_1);
      (**(code **)(*plVar2 + 0x90))(plVar2,lVar6,param_3,local_res8);
    }
    if ((((int)param_1[6] != -1) || (lVar6 = 0xffffffff, *(int *)((longlong)param_1 + 0x34) != -1))
       && ((lVar6 = param_5, param_4 != 0 || (param_5 != 0)))) {
      lVar3 = *(longlong *)((longlong)param_1 + 0x1c);
      local_res8 = lVar3;
      if (lVar3 == 0) {
        local_res8 = *(longlong *)((longlong)param_1 + 0x14);
      }
      uVar4 = 0;
      if (param_7 != 0) {
        do {
          uVar9 = 0;
          if (param_6 != 0) {
            do {
              iVar1 = uVar4 * param_6 + uVar9;
              if (param_4 == 0) {
                if (lVar3 == 0) {
                  *(undefined4 *)(param_5 + 0x14) = 1;
                  uVar7 = uVar9;
                  uVar5 = uVar4;
                }
                else {
                  uVar7 = uVar4;
                  uVar5 = 1;
                }
                *(uint *)(param_5 + 0xc) = uVar7;
                *(uint *)(param_5 + 0x10) = uVar5;
                FUN_1800e1d04(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940),
                              &local_res20,*(uint *)((longlong)param_1 + 0x34),iVar1);
                plVar2 = *(longlong **)(*param_1 + 0x6d0 + (ulonglong)*(uint *)(param_1 + 1) * 0x20)
                ;
                (**(code **)(*plVar2 + 0xa8))(plVar2,local_res8,param_5,local_res20);
              }
              else {
                if (lVar3 == 0) {
                  *(undefined8 *)(param_4 + 0x10) = 1;
                  uVar7 = uVar9;
                  uVar5 = uVar4;
                }
                else {
                  uVar7 = uVar4;
                  uVar5 = 1;
                }
                *(uint *)(param_4 + 8) = uVar7;
                *(uint *)(param_4 + 0xc) = uVar5;
                FUN_1800e1d04(*(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938),
                              local_res10,*(uint *)(param_1 + 6),iVar1);
                plVar2 = *(longlong **)(*param_1 + 0x6d0 + (ulonglong)*(uint *)(param_1 + 1) * 0x20)
                ;
                (**(code **)(*plVar2 + 0xa0))(plVar2,local_res8,param_4,local_res10[0]);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < param_6);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_7);
      }
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 6);
    uVar8 = 0;
    if (uVar4 != 0xffffffff) {
      lVar6 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
      FUN_1800e149c(lVar6,uVar4,uVar9);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
      lVar6 = extraout_RAX;
    }
    uVar4 = *(uint *)((longlong)param_1 + 0x34);
    if (uVar4 != 0xffffffff) {
      lVar6 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
      FUN_1800e149c(lVar6,uVar4,uVar9);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
      lVar6 = extraout_RAX_00;
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  }
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),uVar8);
}

