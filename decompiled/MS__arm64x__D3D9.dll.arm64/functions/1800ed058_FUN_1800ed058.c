/*
 * FUN_1800ed058 at 1800ed058
 * undefined FUN_1800ed058(void)
 * Address ranges: 1800ed058-1800ed14b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ed058(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4,
                 longlong param_5)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 1;
  uVar8 = 0;
  if (param_3 != 0) {
    do {
      if (iVar7 == 0) goto LAB_1800ed104;
      *(undefined8 *)(param_5 + uVar8 * 8) = 0;
      sVar2 = *(short *)(param_4 + uVar8 * 2);
      if (sVar2 != 0) {
        uVar3 = FUN_180102160(param_2,sVar2,u_RT_CUSTOM_18023b3e8);
        lVar4 = FUN_1801021b0(param_2,*(undefined2 *)(param_4 + uVar8 * 2),u_RT_CUSTOM_18023b3e8);
        if (lVar4 != 0) {
          uVar5 = FUN_1800f41c8(lVar4,uVar3,lVar4);
          *(undefined8 *)(param_5 + uVar8 * 8) = uVar5;
          thunk_FUN_180102fc0(lVar4);
          if (*(longlong *)(param_5 + uVar8 * 8) != 0) goto LAB_1800ed0f4;
        }
        iVar7 = 0;
      }
LAB_1800ed0f4:
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
    if (iVar7 == 0) {
LAB_1800ed104:
      uVar8 = 0;
      do {
        plVar6 = *(longlong **)(param_5 + uVar8 * 8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))();
          *(undefined8 *)(param_5 + uVar8 * 8) = 0;
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < param_3);
    }
  }
  return iVar7;
}

