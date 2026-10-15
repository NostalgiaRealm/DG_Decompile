/*
 * FUN_1800e1348 at 1800e1348
 * undefined FUN_1800e1348(void)
 * Address ranges: 1800e1348-1800e144b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800e1348(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                 longlong param_5,longlong param_6)

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
  
  auVar9 = func_0x000180222c50(param_6,0,(ulonglong)param_4 << 3);
  iVar8 = 1;
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      if (iVar8 == 0) goto LAB_1800e1420;
      sVar2 = *(short *)(param_5 + uVar7 * 2);
      if (sVar2 != 0) {
        uVar3 = FUN_180102160(param_3,sVar2,u_RT_CUSTOM_18023b3e8);
        lVar5 = FUN_1801021b0(param_3,*(undefined2 *)(param_5 + uVar7 * 2),u_RT_CUSTOM_18023b3e8);
        if ((lVar5 == 0) ||
           (plVar6 = *(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x18c0 + 0x6b0),
           iVar4 = (**(code **)(*plVar6 + 0x78))(plVar6,lVar5,uVar3,0,param_6 + uVar7 * 8),
           iVar4 < 0)) {
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
LAB_1800e1420:
      FUN_1800e1450(auVar9._0_8_,auVar9._8_8_,(ulonglong)param_4,param_6);
    }
  }
  return iVar8;
}

