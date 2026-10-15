/*
 * FUN_180051450 at 180051450
 * undefined FUN_180051450(void)
 * Address ranges: 180051450-1800516b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051450(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint extraout_s18;
  undefined8 extraout_d19;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  
  lVar5 = *(longlong *)(param_1 + 8);
  uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x1508) + 0xb78);
  local_40 = 0xffffffff;
  local_3c = 1;
  iVar1 = *(int *)(param_2 + 0x10);
  local_80 = param_2;
  local_78 = param_2;
  uStack_70 = param_3;
  local_68 = uVar4;
  local_3b = param_4;
  if (iVar1 == 8) {
    lVar5 = *(longlong *)(lVar5 + 0x1500);
LAB_180051658:
    uVar3 = FUN_1800f3cb8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar5 + 0x18),uVar4,
                          &local_60);
    uVar4 = local_68;
    if ((uVar3 & 1) == 0) goto LAB_180051684;
    uVar3 = local_50 & 0xffffffff;
    uVar4 = uStack_58;
  }
  else {
    if (iVar1 == 9) {
      lVar5 = FUN_180051838(param_1 + 0x28,&local_80);
      if (*(longlong *)(lVar5 + 8) == 0) {
        FUN_1800518b8(param_1 + 0x28,&local_80);
        uVar3 = FUN_1800f3cb8(*(undefined8 *)(param_1 + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78),
                              &local_60);
        uVar6 = local_60;
        uVar7 = local_50 & 0xffffffff;
        uVar4 = local_68;
        if ((uVar3 & 1) != 0) {
          FUN_1800ea888(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),local_60,0,uVar7);
          uVar4 = local_68;
        }
      }
      else {
        uStack_58 = *(undefined8 *)(lVar5 + 0x10);
        local_60 = *(undefined8 *)(lVar5 + 8);
        uStack_48 = *(undefined8 *)(lVar5 + 0x20);
        local_50 = *(ulonglong *)(lVar5 + 0x18);
        FUN_1800518b8(param_1 + 0x28,&local_80);
        uVar7 = (ulonglong)extraout_s18;
        uVar6 = extraout_d19;
      }
      FUN_1800ea8d8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),uVar6,0,uVar7);
      uVar2 = uStack_58;
      FUN_1800ea928(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),uVar6,0,uVar7,1,uStack_58,
                    uVar7 << 3);
      FUN_180051348(param_1,param_2,*(undefined8 *)(param_1 + 0x18),uVar2,uVar7);
      goto LAB_180051684;
    }
    if (iVar1 != 10) {
      if (iVar1 != 0xb) {
        return;
      }
      FUN_1800518b8(param_1 + 0x28,&local_80);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1500);
      uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78);
      goto LAB_180051658;
    }
    uVar3 = FUN_1800f3cb8(*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(*(longlong *)(lVar5 + 0x1500) + 0x18),uVar4,&local_60);
    uVar6 = local_60;
    if ((uVar3 & 1) == 0) {
      FUN_18004e178(param_2,0,param_3,1);
      return;
    }
    uVar3 = local_50 & 0xffffffff;
    FUN_1800ea8d8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),local_60,2,uVar3);
    uVar4 = uStack_58;
    FUN_1800ea928(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),uVar6,2,uVar3,1,uStack_58,
                  uVar3 << 3);
  }
  FUN_180051348(param_1,param_2,*(undefined8 *)(param_1 + 0x18),uVar4,uVar3);
  uVar4 = local_68;
LAB_180051684:
  *(undefined8 *)(param_2 + 0x18) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  FUN_180051140(param_1,&local_78);
  return;
}

