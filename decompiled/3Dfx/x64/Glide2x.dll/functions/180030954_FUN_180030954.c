/*
 * FUN_180030954 at 180030954
 * undefined __fastcall FUN_180030954(longlong param_1, uint param_2, uint param_3)
 * Address ranges: 180030954-180030bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030954(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong local_res20;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 local_48;
  
  local_88 = 0x100;
  local_84 = 0x100;
  local_80 = 0x100;
  local_7c = 0x100;
  local_res20 = FUN_180031098((longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x5c8),
                              (undefined8 *)&local_88);
  if (local_res20 == 0) {
    return;
  }
  uVar5 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0);
  uVar2 = *(uint *)(lVar3 + 0x5f4);
  plVar1 = (longlong *)(lVar3 + 0x5e8);
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar8 = uVar2;
    do {
      uVar5 = uVar8 + uVar9 >> 1;
      uVar7 = *(ulonglong *)(*plVar1 + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar7 <= local_res20) {
        if (local_res20 <= uVar7) break;
        uVar9 = uVar5 + 1;
        uVar4 = uVar8;
        uVar5 = uVar9;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar9);
    if ((uVar5 != uVar2) &&
       (uVar7 = (ulonglong)uVar5, *(ulonglong *)(*plVar1 + uVar7 * 0x18) == local_res20))
    goto LAB_180030a1b;
  }
  FUN_180031574(plVar1,uVar5,local_res20,&local_res20);
  uVar7 = (ulonglong)uVar5;
LAB_180030a1b:
  uVar7 = *(ulonglong *)(*plVar1 + 0x10 + uVar7 * 0x18);
  local_res20 = uVar7;
  if (*(ulonglong *)(param_1 + 0x3120) != uVar7) {
    FUN_18004d140(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  (ulonglong)(*(int *)(param_1 + 0x18) + 0x10),1,(longlong)&local_res20);
    *(ulonglong *)(param_1 + 0x3120) = uVar7;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar10 = 8;
  uVar7 = 0;
  if (*(int *)(lVar3 + 0x40) == 1) {
    uVar7 = uVar10;
  }
  uVar6 = 0;
  if (*(int *)(lVar3 + 0x3c) == 1) {
    uVar6 = 4;
  }
  local_78 = *(uint *)(&DAT_180062c78 + (uVar7 | uVar6));
  local_74 = (-(uint)(*(int *)(lVar3 + 0x34) != 0) & 2) + 1;
  local_6c = 3;
  local_64 = 1;
  local_60 = 8;
  local_70 = (-(uint)(*(int *)(lVar3 + 0x38) != 0) & 2) + 1;
  local_4c = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_48 = 0x7f7fffff;
  uVar7 = FUN_1800311c4((longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x608),&local_78)
  ;
  local_res20 = uVar7;
  if (*(ulonglong *)(param_1 + 0x3128) != uVar7) {
    FUN_18004d0ec(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  *(uint *)(param_1 + 0x18),uVar10,(longlong *)&local_res20);
    *(ulonglong *)(param_1 + 0x3128) = uVar7;
  }
  lVar3 = *(longlong *)(param_1 + 0x30a8 + (ulonglong)param_2 * 8);
  plVar1 = (longlong *)(param_1 + 0x3130);
  if (*plVar1 != lVar3) {
    *plVar1 = lVar3;
    FUN_18004d140(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  (ulonglong)(*(int *)(param_1 + 0x18) + 0x14),1,(longlong)plVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x30a8 + (ulonglong)param_3 * 8);
  plVar1 = (longlong *)(param_1 + 0x3138);
  if (*plVar1 != lVar3) {
    *plVar1 = lVar3;
    FUN_18004d140(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3028) + 0x31b8),
                  (ulonglong)(*(int *)(param_1 + 0x18) + 0x18),1,(longlong)plVar1);
  }
  return;
}

