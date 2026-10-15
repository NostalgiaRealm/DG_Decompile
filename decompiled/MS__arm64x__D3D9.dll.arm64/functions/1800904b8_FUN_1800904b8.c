/*
 * FUN_1800904b8 at 1800904b8
 * undefined FUN_1800904b8(void)
 * Address ranges: 1800904b8-18009080f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800904b8(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_60;
  undefined8 local_58;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
    if (param_3 != 0) {
      uVar2 = 2;
    }
    uVar2 = FUN_1800e7220(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),uVar2);
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  if (param_4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1800e7220(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938),
                          param_6 * param_7);
  }
  iVar1 = param_6 * param_7;
  *(undefined4 *)(param_1 + 6) = uVar2;
  if (param_5 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = FUN_1800e7220(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940),iVar1);
  }
  *(int *)((longlong)param_1 + 0x34) = iVar3;
  if (((param_4 == 0) || ((int)param_1[6] != -1)) && (param_5 == 0 || iVar3 != -1)) {
    if (param_2 != 0) {
      FUN_1800e7b48(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),&local_60,
                    *(undefined4 *)((longlong)param_1 + 0x2c),0);
      lVar10 = *(longlong *)((longlong)param_1 + 0x1c);
      if ((lVar10 == 0) || ((param_8 & 1) == 0)) {
        lVar10 = *(longlong *)((longlong)param_1 + 0x14);
      }
      plVar4 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0);
      (**(code **)(*plVar4 + 0x90))(plVar4,lVar10,param_2,local_60);
    }
    if (param_3 != 0) {
      FUN_1800e7b48(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),&local_60,
                    *(undefined4 *)((longlong)param_1 + 0x2c),1);
      lVar10 = *(longlong *)((longlong)param_1 + 0x1c);
      if ((lVar10 == 0) || ((param_8 & 1) == 0)) {
        lVar10 = *(longlong *)((longlong)param_1 + 0x14);
      }
      plVar4 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0);
      (**(code **)(*plVar4 + 0x90))(plVar4,lVar10,param_3,local_60);
    }
    if ((((int)param_1[6] != -1) || (*(int *)((longlong)param_1 + 0x34) != -1)) &&
       ((param_4 != 0 || (param_5 != 0)))) {
      lVar9 = *(longlong *)((longlong)param_1 + 0x1c);
      lVar10 = lVar9;
      if (lVar9 == 0) {
        lVar10 = *(longlong *)((longlong)param_1 + 0x14);
      }
      uVar12 = 0;
      if (param_7 != 0) {
        do {
          uVar13 = 0;
          if (param_6 != 0) {
            do {
              iVar1 = uVar13 + uVar12 * param_6;
              if (param_4 == 0) {
                if (lVar9 == 0) {
                  *(undefined4 *)(param_5 + 0x14) = 1;
                  uVar6 = uVar13;
                  uVar8 = uVar12;
                }
                else {
                  uVar6 = uVar12;
                  uVar8 = 1;
                }
                *(uint *)(param_5 + 0xc) = uVar6;
                *(uint *)(param_5 + 0x10) = uVar8;
                FUN_1800e7b48(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940),
                              &local_58,*(undefined4 *)((longlong)param_1 + 0x34),iVar1);
                plVar4 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0)
                ;
                pcVar7 = *(code **)(*plVar4 + 0xa8);
                lVar5 = param_5;
                uVar11 = local_58;
              }
              else {
                if (lVar9 == 0) {
                  *(undefined8 *)(param_4 + 0x10) = 1;
                  uVar6 = uVar13;
                  uVar8 = uVar12;
                }
                else {
                  uVar6 = uVar12;
                  uVar8 = 1;
                }
                *(uint *)(param_4 + 8) = uVar6;
                *(uint *)(param_4 + 0xc) = uVar8;
                FUN_1800e7b48(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938),
                              &local_60,(int)param_1[6],iVar1);
                plVar4 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0)
                ;
                pcVar7 = *(code **)(*plVar4 + 0xa0);
                lVar5 = param_4;
                uVar11 = local_60;
              }
              (*pcVar7)(plVar4,lVar10,lVar5,uVar11);
              uVar13 = uVar13 + 1;
            } while (uVar13 < param_6);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < param_7);
      }
    }
    uVar11 = 1;
  }
  else {
    lVar10 = param_1[6];
    uVar11 = 0;
    if ((int)lVar10 != -1) {
      lVar9 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1938);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar9 + 0x28);
      FUN_1800e70e0(lVar9,(int)lVar10,iVar1);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar9 + 0x28);
    }
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    if (iVar3 != -1) {
      lVar10 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1940);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar10 + 0x28);
      FUN_1800e70e0(lVar10,iVar3,iVar1);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar10 + 0x28);
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  }
  return uVar11;
}

