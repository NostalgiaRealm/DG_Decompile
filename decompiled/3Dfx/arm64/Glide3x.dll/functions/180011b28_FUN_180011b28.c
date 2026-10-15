/*
 * FUN_180011b28 at 180011b28
 * undefined __cdecl FUN_180011b28(longlong param_1)
 * Address ranges: 180011b28-180011ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011b28(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar8 = *(longlong *)(param_1 + 0x3330);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x620));
  lVar6 = *(longlong *)(lVar8 + 0x618);
  *(longlong *)(lVar8 + 0x618) = param_1;
  if (lVar6 != param_1) {
    uStack_50 = *(undefined8 *)(param_1 + 0x3350);
    local_58 = *(undefined8 *)(param_1 + 0x3348);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0x38))(plVar1,0,2,&local_58);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,2,&local_58);
    uStack_40 = *(undefined8 *)(param_1 + 0x3378);
    local_48 = *(undefined8 *)(param_1 + 0x3370);
    local_38 = *(undefined8 *)(param_1 + 0x3380);
    FUN_180054258(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),8,3,
                  (longlong)&local_48);
    uVar5 = 1;
    FUN_180054258(*(longlong *)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),0xc,1,
                  param_1 + 0x3390);
    local_60[0] = 0;
    local_60[1] = 0x50;
    FUN_1800542d8(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  *(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),0,uVar5,
                  (longlong *)(param_1 + 0x4520),local_60 + 1,local_60);
    FUN_180054360(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                  *(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),
                  *(longlong *)(param_1 + 0x4528),0x2a);
    iVar7 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
      do {
        puVar2 = *(undefined8 **)(param_1 + 0xd940 + (longlong)iVar7 * 8);
        puVar2[0x624] = 0;
        puVar2[0x625] = 0;
        puVar2[0x626] = 0;
        puVar2[0x627] = 0;
        if (*(uint *)(puVar2[2] + 0x30) < 0x10) {
          lVar6 = (ulonglong)*(uint *)(puVar2[2] + 0x30) * 2;
          cVar3 = (&DAT_180067930)[lVar6];
          uVar4 = (&DAT_180067931)[lVar6];
          if ((cVar3 == '\x02') && (cVar3 = '\x02', *(int *)((longlong)puVar2 + 0x1c) != 0)) {
            cVar3 = '\x03';
          }
        }
        else {
          uVar4 = 0;
          cVar3 = '\0';
        }
        (**(code **)*puVar2)(puVar2,cVar3,uVar4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(*(longlong *)(param_1 + 8) + 0x33));
    }
  }
  return;
}

