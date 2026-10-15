/*
 * FUN_1800f2030 at 1800f2030
 * undefined FUN_1800f2030(void)
 * Address ranges: 1800f2030-1800f221b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f2030(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined8 local_60 [2];
  
  uVar9 = 1;
  local_60[0] = param_2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  lVar5 = FUN_1800f2540(param_1,local_60);
  if (lVar5 == 0) goto LAB_1800f21ec;
  local_60[0] = CONCAT44(local_60[0]._4_4_,param_3);
  uVar9 = 1;
  if (param_3 == -1) {
    uVar3 = *(uint *)(lVar5 + 0x18);
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        if ((uint)uVar7 < *(uint *)(lVar5 + 0x18)) {
          lVar2 = *(longlong *)(lVar5 + 0x10) + uVar7 * 0x30;
          plVar6 = (longlong *)(lVar2 + 0x10);
          puVar10 = (ulonglong *)(lVar2 + 0x28);
          plVar11 = (longlong *)(lVar2 + 0x18);
        }
        else {
          plVar6 = (longlong *)&DAT_00000008;
          puVar10 = (ulonglong *)&DAT_00000020;
          plVar11 = (longlong *)&DAT_00000010;
        }
        uVar9 = 1;
        uVar8 = (**(code **)(**(longlong **)(*plVar6 + 0x18) + 0x40))();
        if (uVar8 < *puVar10) {
          if (*plVar11 != -1) {
            bVar4 = FUN_1800e8548(*plVar11 + 8,0);
            uVar9 = (ulonglong)bVar4;
            if (bVar4 == 0) goto LAB_1800f21d8;
          }
          plVar11 = *(longlong **)(*plVar6 + 0x18);
          (**(code **)(*plVar11 + 0x48))(plVar11,*puVar10,*(undefined8 *)(*plVar6 + 0x20));
          (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(*plVar6 + 0x20),0xffffffff);
        }
LAB_1800f21d8:
        uVar1 = (uint)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  else {
    plVar6 = (longlong *)FUN_1800f2718(lVar5 + 8,local_60);
    if (plVar6 != (longlong *)0x0) {
      uVar9 = 1;
      uVar7 = (**(code **)(**(longlong **)(*plVar6 + 0x18) + 0x40))();
      if (uVar7 < (ulonglong)plVar6[3]) {
        if (plVar6[1] != -1) {
          bVar4 = FUN_1800e8548(plVar6[1] + 8,0);
          uVar9 = (ulonglong)bVar4;
          if (bVar4 == 0) goto LAB_1800f21e8;
        }
        plVar11 = *(longlong **)(*plVar6 + 0x18);
        (**(code **)(*plVar11 + 0x48))(plVar11,plVar6[3],*(undefined8 *)(*plVar6 + 0x20));
        (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(*plVar6 + 0x20),0xffffffff);
      }
    }
  }
LAB_1800f21e8:
  uVar9 = uVar9 & 0xffffffff;
LAB_1800f21ec:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return uVar9;
}

