/*
 * FUN_180019f70 at 180019f70
 * undefined __cdecl FUN_180019f70(longlong param_1, longlong param_2, char param_3)
 * Address ranges: 180019f70-18001a14b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019f70(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong local_50;
  longlong local_48;
  longlong lStack_40;
  
  if ((*(longlong *)(param_2 + 0xd0) == 0) ||
     (uVar5 = FUN_18004e830(*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508) + 8,0
                           ), (uVar5 & 1) == 0)) {
    lVar8 = 0x150;
    if (param_3 == '\0') {
      lVar8 = 0x120;
    }
    local_50 = *(ulonglong *)(param_2 + lVar8);
    plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330) + 0x1b500);
    EnterCriticalSection((LPCRITICAL_SECTION)(plVar6 + 5));
    lVar8 = FUN_18004a458(plVar6,&local_50);
    if (lVar8 != 0) {
      local_50 = local_50 & 0xffffffff00000000;
      puVar7 = FUN_18004a630(lVar8 + 8,(uint *)&local_50);
      if (((puVar7 != (ulonglong *)0x0) &&
          (uVar5 = (**(code **)(**(longlong **)(*puVar7 + 0x18) + 0x40))(), uVar5 < puVar7[3])) &&
         ((puVar7[1] == 0xffffffffffffffff ||
          (uVar5 = FUN_18004e830(puVar7[1] + 8,0), (uVar5 & 1) != 0)))) {
        plVar1 = *(longlong **)(*puVar7 + 0x18);
        (**(code **)(*plVar1 + 0x48))(plVar1,puVar7[3],*(undefined8 *)(*puVar7 + 0x20));
        WaitForSingleObject(*(HANDLE *)(*puVar7 + 0x20),0xffffffff);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(plVar6 + 5));
  }
  else {
    uVar5 = *(ulonglong *)(param_2 + 0xd0);
    lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508);
    while( true ) {
      uVar2 = *(uint *)(lVar8 + 0xb50);
      local_50 = 0;
      lVar9 = *(longlong *)(lVar8 + 0xb40);
      uVar10 = 0;
      lVar3 = (ulonglong)uVar2 * 8;
      plVar6 = *(longlong **)(lVar9 + 0x10);
      lStack_40 = (ulonglong)(uVar2 + 1) << 3;
      local_48 = lVar3;
      iVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,0,&local_48,&local_50);
      if (-1 < iVar4) {
        uVar10 = FUN_180064390((longlong *)(lVar3 + local_50),0,0);
        local_48 = 0;
        lStack_40 = 0;
        plVar6 = *(longlong **)(lVar9 + 0x10);
        (**(code **)(*plVar6 + 0x48))(plVar6,0,&local_48);
      }
      if (uVar5 <= uVar10) break;
      DataMemoryBarrier(2,2);
      Yield();
    }
    *(undefined8 *)(param_2 + 0xd0) = 0;
  }
  return;
}

