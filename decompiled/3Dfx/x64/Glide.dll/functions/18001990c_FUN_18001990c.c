/*
 * FUN_18001990c at 18001990c
 * undefined __fastcall FUN_18001990c(longlong param_1)
 * Address ranges: 18001990c-180019c1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001990c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [32];
  undefined8 local_48;
  undefined8 local_40;
  
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0xb78);
  local_48 = *(undefined8 *)(param_1 + 0x3210);
  local_40 = *(undefined8 *)(param_1 + 0x3218);
  FUN_180048384(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),2,&local_48);
  FUN_180043758(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                *(ulonglong *)(param_1 + 0x3210),
                *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500),
                *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),uVar1);
  FUN_180043758(*(longlong *)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                *(ulonglong *)(param_1 + 0x3218),
                *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1500),
                *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),uVar1);
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x3210) + 0x50))
                     (*(longlong **)(param_1 + 0x3210),local_res8);
  FUN_180048680(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),7,*plVar4);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3200) + 0x58))();
  FUN_1800486c8(lVar6,6,lVar5);
  FUN_180047f04(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                *(ulonglong *)(param_1 + 0x3200),0,1,0x80);
  iVar7 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      lVar6 = (longlong)iVar7;
      if (*(char *)(param_1 + 0x3176 + lVar6) != '\0') {
        lVar5 = *(longlong *)(param_1 + 0xcd10 + lVar6 * 8);
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x3028) + 0x31c0);
        if (*(char *)(lVar5 + 0x3020) != '\0') {
          bVar3 = FUN_180049ecc(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),
                                (longlong *)(lVar2 + 0x16d0),*(int *)(lVar5 + 0x3030) << 2,
                                *(int *)(lVar5 + 0x3030) * 5,(undefined8 *)(lVar5 + 0x20));
          if (bVar3) {
            if (*(int *)(lVar2 + 4) == 0x10de) {
              FUN_180047f04(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),0,1,0);
            }
            *(undefined1 *)(lVar5 + 0x3020) = 0;
          }
        }
        if (*(char *)(lVar5 + 0x3021) != '\0') {
          bVar3 = FUN_180049ecc(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),
                                (longlong *)(lVar2 + 0x16d0),*(int *)(lVar5 + 0x3030) * 2,
                                *(int *)(lVar5 + 0x3030) * 3,(undefined8 *)(lVar5 + 0x1020));
          if (bVar3) {
            if (*(int *)(lVar2 + 4) == 0x10de) {
              FUN_180047f04(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),0,1,0);
            }
            *(undefined1 *)(lVar5 + 0x3021) = 0;
          }
        }
        if (*(char *)(lVar5 + 0x3022) != '\0') {
          bVar3 = FUN_180049ecc(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),
                                (longlong *)(lVar2 + 0x16d0),*(int *)(lVar5 + 0x3030) * 3,
                                *(int *)(lVar5 + 0x3030) * 4,(undefined8 *)(lVar5 + 0x2020));
          if (bVar3) {
            if (*(int *)(lVar2 + 4) == 0x10de) {
              FUN_180047f04(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),0,1,0);
            }
            *(undefined1 *)(lVar5 + 0x3022) = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x3176 + lVar6) = 0;
      }
      FUN_1800359bc(*(undefined8 **)(param_1 + 0xcd10 + lVar6 * 8));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  return;
}

