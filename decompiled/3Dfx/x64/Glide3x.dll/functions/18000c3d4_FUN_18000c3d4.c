/*
 * FUN_18000c3d4 at 18000c3d4
 * undefined __fastcall FUN_18000c3d4(longlong param_1)
 * Address ranges: 18000c3d4-18000c6e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000c3d4(longlong param_1)

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
  
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508) + 0xb78);
  local_48 = *(undefined8 *)(param_1 + 0x3390);
  local_40 = *(undefined8 *)(param_1 + 0x3398);
  FUN_18004a4e8(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),2,&local_48);
  FUN_1800458bc(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                *(ulonglong *)(param_1 + 0x3390),
                *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500),
                *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),uVar1);
  FUN_1800458bc(*(longlong *)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                *(ulonglong *)(param_1 + 0x3398),
                *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1500),
                *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),uVar1);
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x3390) + 0x50))
                     (*(longlong **)(param_1 + 0x3390),local_res8);
  FUN_18004a7e4(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),7,*plVar4);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3380) + 0x58))();
  FUN_18004a82c(lVar6,6,lVar5);
  FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                *(ulonglong *)(param_1 + 0x3380),0,1,0x80);
  iVar7 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
    do {
      lVar6 = (longlong)iVar7;
      if (*(char *)(param_1 + 0x32f6 + lVar6) != '\0') {
        lVar5 = *(longlong *)(param_1 + 0xd830 + lVar6 * 8);
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x3028) + 0x3340);
        if (*(char *)(lVar5 + 0x3020) != '\0') {
          bVar3 = FUN_18004c030(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),
                                (longlong *)(lVar2 + 0x16d0),*(int *)(lVar5 + 0x3030) << 2,
                                *(int *)(lVar5 + 0x3030) * 5,(undefined8 *)(lVar5 + 0x20));
          if (bVar3) {
            if (*(int *)(lVar2 + 4) == 0x10de) {
              FUN_18004a068(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),0,1,0);
            }
            *(undefined1 *)(lVar5 + 0x3020) = 0;
          }
        }
        if (*(char *)(lVar5 + 0x3021) != '\0') {
          bVar3 = FUN_18004c030(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),
                                (longlong *)(lVar2 + 0x16d0),*(int *)(lVar5 + 0x3030) * 2,
                                *(int *)(lVar5 + 0x3030) * 3,(undefined8 *)(lVar5 + 0x1020));
          if (bVar3) {
            if (*(int *)(lVar2 + 4) == 0x10de) {
              FUN_18004a068(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),0,1,0);
            }
            *(undefined1 *)(lVar5 + 0x3021) = 0;
          }
        }
        if (*(char *)(lVar5 + 0x3022) != '\0') {
          bVar3 = FUN_18004c030(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),
                                (longlong *)(lVar2 + 0x16d0),*(int *)(lVar5 + 0x3030) * 3,
                                *(int *)(lVar5 + 0x3030) * 4,(undefined8 *)(lVar5 + 0x2020));
          if (bVar3) {
            if (*(int *)(lVar2 + 4) == 0x10de) {
              FUN_18004a068(*(longlong *)(lVar2 + 0x1508),*(ulonglong *)(lVar5 + 0x3038),0,1,0);
            }
            *(undefined1 *)(lVar5 + 0x3022) = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x32f6 + lVar6) = 0;
      }
      FUN_180028160(*(undefined8 **)(param_1 + 0xd830 + lVar6 * 8));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
  }
  return;
}

