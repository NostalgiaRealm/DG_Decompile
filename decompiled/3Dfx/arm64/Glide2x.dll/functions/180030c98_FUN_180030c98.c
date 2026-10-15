/*
 * FUN_180030c98 at 180030c98
 * undefined __cdecl FUN_180030c98(longlong param_1, int param_2, int param_3)
 * Address ranges: 180030c98-180030dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030c98(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_40 [16];
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar7 = *(longlong *)(param_1 + 0x3028);
  iVar1 = *(int *)(lVar6 + 0x3c);
  plVar4 = *(longlong **)(lVar7 + 0x3218);
  uVar5 = 2;
  if (*(int *)(lVar6 + 0x40) != 1) {
    uVar5 = 0;
  }
  iVar2 = *(int *)(lVar6 + 0x34);
  iVar3 = *(int *)(lVar6 + 0x38);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4,auStack_40);
  FUN_18004b880(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x1508),8,
                *plVar4 + (ulonglong)
                          (*(int *)(lVar7 + 0x31d0) *
                          (uVar5 | (uint)(iVar3 != 0) << 3 | (uint)(iVar1 == 1) |
                          (uint)(iVar2 != 0) << 2)));
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3038) + 0x58))();
  FUN_18004b8e8(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x1508),
                *(int *)(param_1 + 0x18) + 9,
                lVar6 + (ulonglong)(uint)(*(int *)(param_1 + 0x3030) * param_2));
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3038) + 0x58))();
  FUN_18004b8e8(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x1508),
                *(int *)(param_1 + 0x18) + 0xc,
                lVar6 + (ulonglong)(uint)(*(int *)(param_1 + 0x3030) * param_3));
  FUN_18004b098(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x31c0) + 0x1508),
                *(ulonglong *)(param_1 + 0x3038),0,1,0x80);
  return;
}

