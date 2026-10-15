/*
 * FUN_18001e6a0 at 18001e6a0
 * undefined __cdecl FUN_18001e6a0(longlong param_1)
 * Address ranges: 18001e6a0-18001e863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e6a0(longlong param_1)

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
  
  lVar8 = *(longlong *)(param_1 + 0x31b0);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x620));
  lVar6 = *(longlong *)(lVar8 + 0x618);
  *(longlong *)(lVar8 + 0x618) = param_1;
  if (lVar6 != param_1) {
    uStack_50 = *(undefined8 *)(param_1 + 0x31d0);
    local_58 = *(undefined8 *)(param_1 + 0x31c8);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0x38))(plVar1,0,2,&local_58);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,2,&local_58);
    uStack_40 = *(undefined8 *)(param_1 + 0x31f8);
    local_48 = *(undefined8 *)(param_1 + 0x31f0);
    local_38 = *(undefined8 *)(param_1 + 0x3200);
    FUN_180051518(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),8,3,
                  (longlong)&local_48);
    uVar5 = 1;
    FUN_180051518(*(longlong *)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),0xc,1,
                  param_1 + 0x3210);
    local_60[0] = 0;
    local_60[1] = 0x3c;
    FUN_180051598(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  *(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),0,uVar5,
                  (longlong *)(param_1 + 0x3b70),local_60 + 1,local_60);
    FUN_180051620(*(longlong *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0),
                  *(uint *)(*(longlong *)(param_1 + 0x3b40) + 0x31b8),
                  *(longlong *)(param_1 + 0x3b78),0x2a);
    iVar7 = 0;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x33)) {
      do {
        puVar2 = *(undefined8 **)(param_1 + 0xcf90 + (longlong)iVar7 * 8);
        puVar2[0x624] = 0;
        puVar2[0x625] = 0;
        puVar2[0x626] = 0;
        puVar2[0x627] = 0;
        if (*(uint *)(puVar2[2] + 0x30) < 0x10) {
          lVar6 = (ulonglong)*(uint *)(puVar2[2] + 0x30) * 2;
          cVar3 = (&DAT_180065b00)[lVar6];
          uVar4 = (&DAT_180065b01)[lVar6];
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

