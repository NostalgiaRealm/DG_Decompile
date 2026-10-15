/*
 * FUN_1800e14a8 at 1800e14a8
 * undefined FUN_1800e14a8(void)
 * Address ranges: 1800e14a8-1800e15eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800e14a8(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                 longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  auVar9 = func_0x000180222c50(param_7,0,(ulonglong)param_4 << 3);
  iVar8 = 1;
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      if (iVar8 == 0) goto LAB_1800e15bc;
      sVar2 = *(short *)(param_5 + uVar7 * 2);
      if (sVar2 != 0) {
        uVar3 = FUN_180102160(param_3,sVar2,u_RT_CUSTOM_18023b3e8);
        lVar5 = FUN_1801021b0(param_3,*(undefined2 *)(param_5 + uVar7 * 2),u_RT_CUSTOM_18023b3e8);
        if (((lVar5 == 0) ||
            (plVar6 = *(longlong **)(param_1 + 0x6b0),
            iVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,lVar5,uVar3,0,param_7 + uVar7 * 8),
            iVar4 < 0)) ||
           (plVar6 = *(longlong **)(param_1 + 0x6b0),
           iVar4 = (**(code **)(*plVar6 + 0x58))
                             (plVar6,*(undefined8 *)(param_6 + uVar7 * 0x10),
                              *(undefined2 *)(param_6 + 8 + uVar7 * 0x10),lVar5,uVar3,
                              param_8 + uVar7 * 8), iVar4 < 0)) {
          auVar9 = thunk_FUN_180102fc0(lVar5);
          iVar8 = 0;
        }
        else {
          auVar9 = thunk_FUN_180102fc0(lVar5);
        }
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
    } while (uVar1 < param_4);
    if (iVar8 == 0) {
LAB_1800e15bc:
      FUN_1800e15f0(auVar9._0_8_,auVar9._8_8_,(ulonglong)param_4,param_7,param_8);
    }
  }
  return iVar8;
}

