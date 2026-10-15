/*
 * FUN_180021400 at 180021400
 * undefined __fastcall FUN_180021400(longlong param_1, int param_2, int param_3)
 * Address ranges: 180021400-180021555
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021400(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x3028);
  uVar5 = 0;
  if (*(int *)(lVar7 + 0x40) == 1) {
    uVar5 = 2;
  }
  iVar1 = *(int *)(lVar7 + 0x38);
  iVar2 = *(int *)(lVar7 + 0x3c);
  iVar3 = *(int *)(lVar7 + 0x34);
  plVar6 = *(longlong **)(lVar4 + 0x3398);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,local_res8);
  FUN_18004a7e4(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 0x1508),8,
                (ulonglong)
                ((uVar5 | -(uint)(iVar1 != 0) & 8 | (uint)(iVar2 == 1) | -(uint)(iVar3 != 0) & 4) *
                *(int *)(lVar4 + 0x3350)) + *plVar6);
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x3038) + 0x58))();
  FUN_18004a82c(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 0x1508),
                *(int *)(param_1 + 0x18) + 9,
                (ulonglong)(uint)(param_2 * *(int *)(param_1 + 0x3030)) + lVar7);
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x3038) + 0x58))();
  FUN_18004a82c(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 0x1508),
                *(int *)(param_1 + 0x18) + 0xc,
                (ulonglong)(uint)(param_3 * *(int *)(param_1 + 0x3030)) + lVar7);
  FUN_18004a068(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3028) + 0x3340) + 0x1508),
                *(ulonglong *)(param_1 + 0x3038),0,1,0x80);
  return;
}

