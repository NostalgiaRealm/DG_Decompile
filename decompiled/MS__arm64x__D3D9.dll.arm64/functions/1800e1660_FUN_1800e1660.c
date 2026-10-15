/*
 * FUN_1800e1660 at 1800e1660
 * undefined FUN_1800e1660(void)
 * Address ranges: 1800e1660-1800e175f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800e1660(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  
  param_6[1] = 0;
  *param_6 = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  iVar6 = 1;
  uVar7 = 0;
  do {
    if (iVar6 == 0) goto LAB_1800e1718;
    uVar2 = FUN_180102160(param_3,(&DAT_18024b190)[uVar7],u_RT_CUSTOM_18023b3e8);
    lVar4 = FUN_1801021b0(param_3,(&DAT_18024b190)[uVar7],u_RT_CUSTOM_18023b3e8);
    if ((lVar4 == 0) ||
       (plVar5 = *(longlong **)(param_1 + (param_2 & 0xffffffff) * 0x18c0 + 0x6b0),
       iVar3 = (**(code **)(*plVar5 + 0x90))(plVar5,lVar4,uVar2,0,param_6 + uVar7), iVar3 < 0)) {
      iVar6 = 0;
    }
    thunk_FUN_180102fc0(lVar4);
    uVar1 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar1;
  } while (uVar1 < 4);
  if (iVar6 == 0) {
LAB_1800e1718:
    lVar4 = 0;
    do {
      if ((longlong *)param_6[lVar4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_6[lVar4] + 0x10))();
        param_6[lVar4] = 0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
  }
  return iVar6;
}

