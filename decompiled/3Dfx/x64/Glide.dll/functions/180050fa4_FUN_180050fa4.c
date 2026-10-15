/*
 * FUN_180050fa4 at 180050fa4
 * undefined8 __fastcall FUN_180050fa4(longlong param_1)
 * Address ranges: 180050fa4-1800511a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180050fa4(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  longlong *local_res10;
  longlong *local_res18 [2];
  int local_40;
  int iStack_3c;
  
  local_res18[0] = (longlong *)0x0;
  if ((*(longlong **)(param_1 + 0x688) == (longlong *)0x0) ||
     (uVar4 = (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))(), (int)uVar4 == 0)) {
    iVar2 = (**(code **)(param_1 + 0x2b8))(&DAT_180064a58,local_res18);
    if (-1 < iVar2) {
      if (*(longlong **)(param_1 + 0x688) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x688) + 0x10))();
      }
      *(longlong **)(param_1 + 0x688) = local_res18[0];
    }
    local_res18[0] = *(longlong **)(param_1 + 0x688);
    if (local_res18[0] == (longlong *)0x0) {
      return 0;
    }
    plVar1 = (longlong *)(param_1 + 0x690);
    FUN_18005dbc0((LPVOID)*plVar1);
    iVar2 = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    local_res10 = (longlong *)0x0;
    while (uVar4 = (**(code **)(*local_res18[0] + 0x60))(local_res18[0],iVar2,&local_res10),
          -1 < (int)uVar4) {
      iVar3 = (**(code **)(*local_res10 + 0x50))();
      if (-1 < iVar3) {
        uVar8 = 0xffffffff;
        uVar7 = 0;
        do {
          if (((*(int *)(param_1 + 0x20 + uVar7 * 0x28) == local_40) &&
              (*(int *)(param_1 + 0x24 + uVar7 * 0x28) == iStack_3c)) &&
             ((local_40 != 0 || (iStack_3c != 0)))) {
            (**(code **)(*local_res10 + 0x10))();
            local_res10 = (longlong *)0x0;
            uVar8 = uVar7;
            break;
          }
          if (*(longlong *)(param_1 + 0x18 + uVar7 * 0x28) == 0) {
            uVar5 = (uint)uVar7;
            if ((uint)uVar8 != 0xffffffff) {
              uVar5 = (uint)uVar8;
            }
            uVar8 = (ulonglong)uVar5;
          }
          uVar5 = (uint)uVar7 + 1;
          uVar7 = (ulonglong)uVar5;
        } while (uVar5 < 0x10);
        iVar3 = (int)uVar8;
        if (local_res10 == (longlong *)0x0) {
          if (iVar3 != -1) goto LAB_180051116;
        }
        else if (iVar3 == -1) {
          (**(code **)(*local_res10 + 0x10))(local_res10);
        }
        else {
          lVar6 = (longlong)iVar3;
          *(longlong **)(param_1 + 0x18 + lVar6 * 0x28) = local_res10;
          *(ulonglong *)(param_1 + 0x20 + lVar6 * 0x28) = CONCAT44(iStack_3c,local_40);
          *(undefined1 *)(param_1 + 0x2c + lVar6 * 0x28) = 1;
LAB_180051116:
          local_res8[0] = iVar3;
          FUN_18000944c(plVar1,local_res8);
        }
      }
      iVar2 = iVar2 + 1;
    }
    uVar8 = 0;
    do {
      if (*(char *)(param_1 + 0x2c + uVar8 * 0x28) != '\0') {
        if (*(uint *)(param_1 + 0x698) != 0) {
          uVar7 = 0;
          do {
            if (*(int *)(*plVar1 + uVar7 * 4) == (int)uVar8) {
              if ((int)uVar7 != -1) goto LAB_18005118a;
              break;
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(param_1 + 0x698));
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x18 + uVar8 * 0x28) + 0x10))();
        *(undefined1 *)(param_1 + 0x2c + uVar8 * 0x28) = 0;
      }
LAB_18005118a:
      uVar5 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar5;
    } while (uVar5 < 0x10);
  }
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}

