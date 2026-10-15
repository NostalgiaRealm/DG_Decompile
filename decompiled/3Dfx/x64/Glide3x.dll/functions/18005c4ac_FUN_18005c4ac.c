/*
 * FUN_18005c4ac at 18005c4ac
 * undefined __fastcall FUN_18005c4ac(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18005c4ac-18005c6fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005c4ac(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong local_res10 [2];
  longlong local_res20;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  ulonglong local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  if (*(longlong **)(param_2 + 0xda0) != (longlong *)0x0) {
    lVar3 = (**(code **)(**(longlong **)(param_2 + 0xda0) + 0x50))();
    if ((*(ulonglong *)(lVar3 + 0x10) ==
         (ulonglong)*(uint *)(param_2 + 0x18) / (ulonglong)*(uint *)(param_2 + 0x20)) &&
       (*(uint *)(lVar3 + 0x18) == *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24))) {
      bVar6 = *(uint *)(param_2 + 0x28) < param_3;
    }
    else {
      bVar6 = true;
      FUN_18005c700(param_1,param_2);
    }
    if (!bVar6) {
      return;
    }
  }
  lVar3 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  local_80 = (ulonglong)*(uint *)(param_2 + 0x18) / (ulonglong)*(uint *)(param_2 + 0x20);
  local_6c = 1;
  local_78 = *(uint *)(param_2 + 0x1c) / *(uint *)(param_2 + 0x24);
  local_60 = 1;
  local_90[0] = 3;
  local_70 = *(undefined4 *)(&DAT_180063040 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_b8 = *(undefined4 *)(&DAT_180063030 + (longlong)*(int *)(param_2 + 0x34) * 4);
  local_88 = 0;
  local_74 = 0x10001;
  local_64 = 0;
  local_54 = 4;
  local_50 = 0;
  local_48 = 0;
  local_b4 = 4;
  local_b0 = 0x1688;
  local_98 = 0;
  local_a8 = 0xffffffff00000000;
  uStack_a0 = 0;
  local_58 = local_b8;
  if ((*(int *)(param_2 + 0x28) == 0) && (param_3 != 0)) {
    uVar2 = FUN_180048dac(*(longlong *)(lVar3 + 0x2230 + param_1),2);
    *(uint *)(param_2 + 0xdb0) = uVar2;
    uVar2 = FUN_180048dac(*(longlong *)(lVar3 + 0x2238 + param_1),2);
    *(uint *)(param_2 + 0xdb4) = uVar2;
  }
  if ((*(int *)(param_2 + 0xdb0) != -1) && (*(int *)(param_2 + 0xdb4) != -1)) {
    for (uVar2 = *(uint *)(param_2 + 0x28); uVar2 < param_3; uVar2 = uVar2 + 1) {
      lVar4 = FUN_180048508(param_1 + 0x6d0,(ulonglong)*(uint *)(param_2 + 0x10),local_90);
      uVar5 = (ulonglong)uVar2;
      *(longlong *)(param_2 + 0xda0 + uVar5 * 8) = lVar4;
      if (lVar4 == 0) {
        return;
      }
      FUN_1800493ac(*(longlong *)(lVar3 + 0x2230 + param_1),local_res10,*(uint *)(param_2 + 0xdb0),
                    uVar2);
      plVar1 = *(longlong **)(param_1 + 0x6d0 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
      (**(code **)(*plVar1 + 0x90))
                (plVar1,*(undefined8 *)(param_2 + 0xda0 + uVar5 * 8),&local_b8,local_res10[0]);
      FUN_1800493ac(*(longlong *)(lVar3 + 0x2238 + param_1),&local_res20,*(uint *)(param_2 + 0xdb4),
                    uVar2);
      plVar1 = *(longlong **)(param_1 + 0x6d0 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x20);
      (**(code **)(*plVar1 + 0xa0))
                (plVar1,*(undefined8 *)(param_2 + 0xda0 + uVar5 * 8),&local_58,local_res20);
      *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
    }
  }
  return;
}

