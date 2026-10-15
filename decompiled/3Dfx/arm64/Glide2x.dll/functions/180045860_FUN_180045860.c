/*
 * FUN_180045860 at 180045860
 * ulonglong __cdecl FUN_180045860(undefined8 param_1, longlong param_2, uint param_3)
 * Address ranges: 180045860-1800459ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180045860(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint local_50 [4];
  
  uVar7 = 1;
  if (param_3 == 0xffffffff) {
    uVar3 = *(uint *)(param_2 + 0x18);
    uVar5 = 0;
    if (uVar3 != 0) {
      local_50[0] = 0xffffffff;
      do {
        if ((uint)uVar5 < *(uint *)(param_2 + 0x18)) {
          lVar2 = *(longlong *)(param_2 + 0x10) + uVar5 * 0x30;
          plVar8 = (longlong *)(lVar2 + 0x10);
          puVar4 = (ulonglong *)(lVar2 + 0x28);
          plVar9 = (longlong *)(lVar2 + 0x18);
        }
        else {
          plVar8 = (longlong *)&DAT_00000008;
          puVar4 = (ulonglong *)&DAT_00000020;
          plVar9 = (longlong *)0x10;
        }
        uVar7 = 1;
        uVar6 = (**(code **)(**(longlong **)(*plVar8 + 0x18) + 0x40))();
        if (uVar6 < *puVar4) {
          if (*plVar9 != -1) {
            uVar6 = FUN_18004aca0(*plVar9 + 8,0);
            uVar7 = uVar6 & 0xff;
            if ((uVar6 & 0xff) == 0) goto LAB_1800459d4;
          }
          plVar9 = *(longlong **)(*plVar8 + 0x18);
          (**(code **)(*plVar9 + 0x48))(plVar9,*puVar4,*(undefined8 *)(*plVar8 + 0x20));
          WaitForSingleObject(*(HANDLE *)(*plVar8 + 0x20),0xffffffff);
        }
LAB_1800459d4:
        uVar1 = (uint)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  else {
    local_50[0] = param_3;
    puVar4 = FUN_180046aa0(param_2 + 8,local_50);
    if (puVar4 != (ulonglong *)0x0) {
      uVar7 = 1;
      uVar5 = (**(code **)(**(longlong **)(*puVar4 + 0x18) + 0x40))();
      if (uVar5 < puVar4[3]) {
        if (puVar4[1] != 0xffffffffffffffff) {
          uVar5 = FUN_18004aca0(puVar4[1] + 8,0);
          uVar7 = uVar5 & 0xff;
          if ((uVar5 & 0xff) == 0) goto LAB_1800459e4;
        }
        plVar8 = *(longlong **)(*puVar4 + 0x18);
        (**(code **)(*plVar8 + 0x48))(plVar8,puVar4[3],*(undefined8 *)(*puVar4 + 0x20));
        WaitForSingleObject(*(HANDLE *)(*puVar4 + 0x20),0xffffffff);
      }
    }
  }
LAB_1800459e4:
  return uVar7 & 0xffffffff;
}

