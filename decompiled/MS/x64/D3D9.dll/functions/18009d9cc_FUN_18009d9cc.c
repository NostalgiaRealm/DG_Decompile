/*
 * FUN_18009d9cc at 18009d9cc
 * undefined4 __fastcall FUN_18009d9cc(longlong * param_1, int param_2, int param_3, undefined8 param_4, uint param_5, longlong * param_6, uint * param_7)
 * Address ranges: 18009d9cc-18009dc77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18009d9cc(longlong *param_1,int param_2,int param_3,undefined8 param_4,uint param_5,
             longlong *param_6,uint *param_7)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong local_res8;
  int local_res10;
  undefined8 local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar10 = 2;
  local_res10 = param_2;
  if (*(char *)((longlong)param_1 + 0x4d) == '\x01') {
    FUN_1800fb1f0(param_1[0xb] + 0x12c0);
  }
  local_res8 = (**(code **)(*param_1 + 0xc0))(param_1,1);
  if ((local_res8 != 0) && (bVar3 = FUN_18009bf6c((longlong)param_1), bVar3)) {
    uVar11 = param_3 * *(int *)((longlong)param_1 + 0x3c) + param_2;
    if ((*(int *)((longlong)param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
      param_5 = 0;
      bVar3 = FUN_18009c104((longlong)param_1,param_2,param_3,param_6,param_7,&param_5);
      if (bVar3) {
        lVar1 = *(longlong *)((longlong)param_1 + 0x84);
        lVar9 = (ulonglong)uVar11 * 0x20;
        BVar5 = IsRectEmpty((RECT *)(lVar9 + lVar1 + 0x10));
        iVar2 = local_res10;
        local_58._0_4_ = *(int *)(lVar9 + lVar1 + 0x10);
        local_58._4_4_ = *(int *)(lVar9 + 0x14 + lVar1);
        local_50 = (ulonglong)*(uint *)(lVar9 + 0x18 + lVar1) << 0x20;
        local_48 = *(undefined4 *)(lVar9 + 0x1c + lVar1);
        local_44 = 1;
        (**(code **)*param_1)(param_1,local_res10,param_3);
        uVar10 = 0;
        if ((BVar5 == 0) &&
           (cVar4 = FUN_1800e5688(*(longlong *)(param_1[0xb] + 0x1508),
                                  *(longlong **)(local_res8 + 0x14),uVar11,
                                  (*(int *)((longlong)param_1 + 0x34) + param_3) *
                                  *(int *)((longlong)param_1 + 0x3c) + iVar2,
                                  (longlong *)(param_1[0xb] + 0x1760),(int *)&local_58,
                                  (uint *)((ulonglong)(*param_7 * local_58._4_4_) +
                                           (ulonglong)((int)local_58 * param_5) + *param_6),*param_7
                                 ), cVar4 == '\0')) {
          uVar10 = 2;
        }
      }
    }
    else {
      (**(code **)*param_1)();
      uVar10 = 0;
      cVar4 = FUN_1800eac4c(*(longlong **)(param_1[10] + 0x1b500),
                            *(ulonglong *)((longlong)param_1 + 0xc4));
      if (cVar4 == '\0') {
        uVar6 = param_1[0x27];
        if (uVar6 == 0) {
          uVar6 = FUN_1800e3108(*(longlong *)(param_1[0xb] + 0x1508));
        }
        uVar7 = FUN_1800e2ae8(*(longlong *)(param_1[0xb] + 0x1508) + 8,'\0');
        if (((char)uVar7 == '\0') || (uVar6 == 0)) {
          FUN_1800eab50(*(longlong **)(param_1[10] + 0x1b500),
                        *(ulonglong *)((longlong)param_1 + 0xc4),0);
        }
        else {
          lVar1 = *(longlong *)(param_1[0xb] + 0x1508);
          do {
            uVar8 = FUN_1800e3070(lVar1);
          } while (uVar8 < uVar6);
        }
      }
      lVar1 = *(longlong *)((longlong)param_1 + 0xd4);
      local_res8 = 0;
      lVar9 = (ulonglong)uVar11 * 0x20;
      local_58 = (ulonglong)*(uint *)(lVar9 + lVar1);
      local_50 = (ulonglong)(uint)(*(int *)(lVar9 + 4 + lVar1) + *(int *)(lVar9 + lVar1));
      (**(code **)(**(longlong **)((longlong)param_1 + 0xc4) + 0x40))
                (*(longlong **)((longlong)param_1 + 0xc4),0,&local_58,&local_res8);
      *param_6 = (ulonglong)*(uint *)(lVar9 + *(longlong *)((longlong)param_1 + 0xd4)) + local_res8;
      *param_7 = *(uint *)(lVar9 + 8 + *(longlong *)((longlong)param_1 + 0xd4));
    }
  }
  return uVar10;
}

