/*
 * FUN_18002f4e8 at 18002f4e8
 * undefined FUN_18002f4e8(void)
 * Address ranges: 18002f4e8-18002f7a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f4e8(longlong param_1,int param_2,undefined8 param_3,longlong param_4,int param_5,
                  uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  lVar9 = 0;
  do {
    plVar4 = *(longlong **)(param_1 + 0xf9b0 + lVar9 * 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))
                (plVar4,*(undefined4 *)(param_1 + 0xf9d8 + lVar9 * 4),
                 *(undefined4 *)(param_1 + 0xf9e8 + lVar9 * 4),0);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 4);
  plVar4 = *(longlong **)(param_1 + 0xf9d0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))
              (plVar4,*(undefined4 *)(param_1 + 0xf9f8),*(undefined4 *)(param_1 + 0xf9fc),0);
  }
  FUN_18002a810(param_1,0,0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x1028);
  uVar3 = *(undefined4 *)(param_1 + 0x106c);
  uVar10 = *(undefined8 *)(param_1 + 0xfd60);
  if (param_2 == 6) {
    if (2 < param_6) {
      iVar8 = 0;
      for (param_6 = param_6 - 2; param_6 != 0; param_6 = param_6 - uVar1) {
        iVar6 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
        if (0x1000U - iVar6 < 0x10) {
          FUN_18002a810(param_1,0,1,0);
          iVar6 = 0;
        }
        uVar1 = (0x1000U - iVar6) / 3;
        if (param_6 < (0x1000U - iVar6) / 3) {
          uVar1 = param_6;
        }
        if (param_4 == 0) {
          FUN_18002aa20(param_1,4,param_3);
        }
        else {
          FUN_18002dd38(param_1,4,param_4 + -0x30,uVar10,*(undefined8 *)(param_1 + 0xf710),uVar3,
                        uVar2,0,uVar1 * 3,0,0);
        }
        uVar7 = 0;
        if (uVar1 != 0) {
          do {
            **(int **)(param_1 + 0x88) = uVar7 + param_5 + 1 + iVar8;
            iVar6 = uVar7 + param_5 + 2 + iVar8;
            uVar7 = uVar7 + 1;
            *(int *)(*(longlong *)(param_1 + 0x88) + 4) = iVar6;
            *(int *)(*(longlong *)(param_1 + 0x88) + 8) = param_5;
            *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 0xc;
          } while (uVar7 < uVar1);
        }
        iVar8 = uVar1 + iVar8;
        *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar1 * 3;
      }
      FUN_18002a810(param_1,0,0,0);
    }
  }
  else {
    if (param_4 == 0) {
      FUN_18002aa20(param_1,param_2,param_3);
    }
    else {
      FUN_18002dd38(param_1,param_2,param_4 + -0x30,uVar10,*(undefined8 *)(param_1 + 0xfd68),uVar3,
                    uVar2,0,0,0,*(undefined1 *)(param_4 + 0x1c));
    }
    uVar5 = FUN_180026a80(param_1);
    if ((uVar5 & 1) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar4 + 0x68))(plVar4,param_6,param_5);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0xf6d0) + 0x620);
  }
  return;
}

