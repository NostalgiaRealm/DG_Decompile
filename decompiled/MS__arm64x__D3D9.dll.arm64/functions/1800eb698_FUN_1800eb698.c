/*
 * FUN_1800eb698 at 1800eb698
 * undefined FUN_1800eb698(void)
 * Address ranges: 1800eb698-1800eb89b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800eb698(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,uint param_5,
                  undefined8 param_6,uint param_7,char param_8)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_c0 [8];
  longlong local_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  int local_a0 [8];
  undefined8 local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar2 = (ulonglong)param_4;
  iVar7 = (**(code **)(*param_2 + 0x70))(param_2,local_a0,auStack_c0);
  if (iVar7 < 0) {
    return false;
  }
  if (local_a0[0] == 4 && param_8 == '\0') {
    local_b0 = 0;
    uStack_a8 = 0;
    local_b8 = 0;
    iVar7 = (**(code **)(*param_2 + 0x40))(param_2,0,&local_b0,&local_b8);
    if (-1 < iVar7) {
      bVar6 = FUN_1800f2030(*(undefined8 *)(param_1 + 0xb18),param_2,0);
      if ((bVar6 & 1) != 0) {
        thunk_FUN_180001218(uVar2 + local_b8,param_6,param_5 - param_4);
      }
      local_b0 = uVar2;
      uStack_a8 = (ulonglong)param_5;
      (**(code **)(*param_2 + 0x48))(param_2,0,&local_b0);
      if ((param_7 & 1) != 0) {
        (**(code **)(*param_2 + 0x48))(param_2,0,0);
      }
      FUN_1800e8bb8(param_1,param_2,0,1,0);
      if ((bVar6 & 1) != 0) {
        return (bool)bVar6;
      }
    }
  }
  lStack_78 = 0;
  local_80 = 0;
  lStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    iVar7 = param_5 - param_4;
    uVar8 = FUN_1800f0470(param_3,iVar7,&local_80);
    if ((uVar8 & 1) != 0) {
      thunk_FUN_180001218(local_80,param_6,iVar7);
      goto LAB_1800eb7f0;
    }
  }
  iVar7 = (int)local_60;
LAB_1800eb7f0:
  lVar5 = lStack_68;
  lVar4 = local_70;
  lVar3 = lStack_78;
  bVar1 = lStack_78 != 0;
  if (bVar1) {
    FUN_1800f0b40(param_3,iVar7,local_70,lStack_68,
                  *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                  *(undefined8 *)(param_1 + 0xb78));
    FUN_1800e8bb8(param_1,param_2,0,1,0x400);
    FUN_1800e8038(param_1);
    FUN_1800e80d8(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
              (*(longlong **)(param_1 + 0x688),param_2,uVar2,lVar3,lVar4 - lVar5,iVar7);
    FUN_1800e8088(param_1);
  }
  return bVar1;
}

