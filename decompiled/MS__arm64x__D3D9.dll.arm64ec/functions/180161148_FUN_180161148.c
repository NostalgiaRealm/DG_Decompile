/*
 * FUN_180161148 at 180161148
 * undefined FUN_180161148(void)
 * Address ranges: 180161148-1801613ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180161148(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
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
LAB_180161350:
    uVar3 = FUN_180212808(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar5 + 0x18),uVar4,
                          &local_60);
    uVar4 = local_68;
    if ((uVar3 & 1) == 0) goto LAB_18016137c;
    uVar3 = local_50 & 0xffffffff;
    uVar4 = uStack_58;
  }
  else {
    if (iVar1 == 9) {
      lVar5 = FUN_180161530(param_1 + 0x28,&local_80);
      if (*(longlong *)(lVar5 + 8) == 0) {
        FUN_1801615b0(param_1 + 0x28,&local_80);
        uVar3 = FUN_180212808(*(undefined8 *)(param_1 + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78),
                              &local_60);
        uVar7 = local_60;
        uVar6 = local_50 & 0xffffffff;
        uVar4 = local_68;
        if ((uVar3 & 1) != 0) {
          FUN_180209f40(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),local_60,0,uVar6);
          uVar4 = local_68;
        }
      }
      else {
        uStack_58 = *(undefined8 *)(lVar5 + 0x10);
        uVar7 = *(undefined8 *)(lVar5 + 8);
        uStack_48 = *(undefined8 *)(lVar5 + 0x20);
        uVar6 = *(ulonglong *)(lVar5 + 0x18);
        local_60 = uVar7;
        local_50 = uVar6;
        FUN_1801615b0(param_1 + 0x28,&local_80);
        uVar6 = uVar6 & 0xffffffff;
      }
      FUN_180209fa8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),uVar7,0,uVar6);
      uVar2 = uStack_58;
      FUN_18020a010(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),uVar7,0,uVar6,1,uStack_58,
                    uVar6 << 3);
      FUN_180161010(param_1,param_2,*(undefined8 *)(param_1 + 0x18),uVar2,uVar6);
      goto LAB_18016137c;
    }
    if (iVar1 != 10) {
      if (iVar1 != 0xb) {
        return;
      }
      FUN_1801615b0(param_1 + 0x28,&local_80);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1500);
      uVar4 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1508) + 0xb78);
      goto LAB_180161350;
    }
    uVar3 = FUN_180212808(*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(*(longlong *)(lVar5 + 0x1500) + 0x18),uVar4,&local_60);
    uVar7 = local_60;
    if ((uVar3 & 1) == 0) {
      FUN_18015ddc8(param_2,0,param_3,1);
      return;
    }
    uVar3 = local_50 & 0xffffffff;
    FUN_180209fa8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),local_60,2,uVar3);
    uVar4 = uStack_58;
    FUN_18020a010(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),uVar7,2,uVar3,1,uStack_58,
                  uVar3 << 3);
  }
  FUN_180161010(param_1,param_2,*(undefined8 *)(param_1 + 0x18),uVar4,uVar3);
  uVar4 = local_68;
LAB_18016137c:
  *(undefined8 *)(param_2 + 0x18) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  FUN_180160e18(param_1,&local_78);
  return;
}

