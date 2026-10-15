/*
 * FUN_180093e08 at 180093e08
 * undefined FUN_180093e08(void)
 * Address ranges: 180093e08-180094097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180093e08(longlong *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             longlong *param_6,int *param_7)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar8 = 2;
  if (*(char *)((longlong)param_1 + 0x4d) == '\x01') {
    FUN_180101df0(param_1[0xb] + 0x12c0);
  }
  lVar5 = (**(code **)(*param_1 + 0xc0))(param_1,1);
  if ((lVar5 != 0) && (uVar6 = FUN_180092718(param_1), (uVar6 & 1) != 0)) {
    uVar6 = (ulonglong)(uint)(param_2 + *(int *)((longlong)param_1 + 0x3c) * param_3);
    if ((*(int *)((longlong)param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
      local_70 = (ulonglong)local_70._4_4_ << 0x20;
      uVar7 = FUN_180092988();
      if ((uVar7 & 1) != 0) {
        lVar1 = *(longlong *)((longlong)param_1 + 0x84) + uVar6 * 0x20;
        iVar4 = (*__imp_USER32_dll_IsRectEmpty)(lVar1 + 0x10);
        local_68._0_4_ = *(int *)(lVar1 + 0x10);
        local_68._4_4_ = *(int *)(lVar1 + 0x14);
        local_60 = (ulonglong)*(uint *)(lVar1 + 0x18) << 0x20;
        local_58 = *(undefined4 *)(lVar1 + 0x1c);
        uStack_54 = 1;
        (**(code **)*param_1)(param_1,param_2,param_3);
        uVar8 = 0;
        if (iVar4 == 0) {
          uVar6 = FUN_1800ebed8(*(undefined8 *)(param_1[0xb] + 0x1508),*(undefined8 *)(lVar5 + 0x14)
                                ,uVar6,param_2 + (*(int *)((longlong)param_1 + 0x34) + param_3) *
                                                 *(int *)((longlong)param_1 + 0x3c),
                                param_1[0xb] + 0x1760,&local_68,
                                (ulonglong)(uint)(*param_7 * local_68._4_4_) +
                                (ulonglong)(uint)((int)local_68 * (int)local_70) + *param_6,*param_7
                                ,0);
          if ((uVar6 & 1) == 0) {
            uVar8 = 2;
          }
        }
      }
    }
    else {
      (**(code **)*param_1)(param_1,param_2,param_3);
      uVar8 = 0;
      uVar7 = FUN_1800f2288(*(undefined8 *)(param_1[10] + 0x1b500),
                            *(undefined8 *)((longlong)param_1 + 0xc4));
      if ((uVar7 & 1) == 0) {
        lVar5 = param_1[0x27];
        if (lVar5 == 0) {
          lVar5 = FUN_1800e9320(*(undefined8 *)(param_1[0xb] + 0x1508));
        }
        cVar3 = FUN_1800e8548(*(longlong *)(param_1[0xb] + 0x1508) + 8,0);
        if (cVar3 == '\0' || (cVar3 == '\0' || lVar5 == 0)) {
          FUN_1800f2030(*(undefined8 *)(param_1[10] + 0x1b500),
                        *(undefined8 *)((longlong)param_1 + 0xc4),0);
        }
        else {
          FUN_1800e93d8(*(undefined8 *)(param_1[0xb] + 0x1508),lVar5);
        }
      }
      lVar5 = uVar6 * 0x20;
      local_70 = 0;
      piVar2 = (int *)(*(longlong *)((longlong)param_1 + 0xd4) + lVar5);
      local_68 = (ulonglong)*(uint *)(*(longlong *)((longlong)param_1 + 0xd4) + lVar5);
      local_60 = (ulonglong)(uint)(piVar2[1] + *piVar2);
      (**(code **)(**(longlong **)((longlong)param_1 + 0xc4) + 0x40))
                (*(longlong **)((longlong)param_1 + 0xc4),0,&local_68,&local_70);
      *param_6 = local_70 + (ulonglong)*(uint *)(*(longlong *)((longlong)param_1 + 0xd4) + lVar5);
      *param_7 = *(int *)(lVar5 + *(longlong *)((longlong)param_1 + 0xd4) + 8);
    }
  }
  return uVar8;
}

