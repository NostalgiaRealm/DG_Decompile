/*
 * FUN_180022478 at 180022478
 * undefined FUN_180022478(void)
 * Address ranges: 180022478-180022663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022478(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  
  lVar5 = (**(code **)(*param_1 + 0x28))();
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar8 = DAT_18024de60;
  if ((lVar5 != 0) &&
     (plVar9 = (longlong *)(&DAT_180253850)[(uVar6 & 0xffffffff) * 0x4b], plVar9 != (longlong *)0x0)
     ) {
    if ((param_2 & 1) != 0) {
      (**(code **)(*plVar9 + 0xd0))(plVar9,lVar5,*(undefined4 *)(DAT_18024de60 + 0x808));
    }
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x60))(plVar9,lVar5,0,0,4,2,2,0,0,0);
    if (plVar9 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar9 + 0x28))();
      if (cVar1 == '\0') {
        uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
        auVar10 = func_0x000180220598(DAT_18024de60,uVar7);
        lVar5 = auVar10._0_8_;
        if (lVar5 != 0) {
          uVar7 = FUN_180100d48(lVar5,auVar10._8_8_,FUN_180100f08);
          *(undefined8 *)(lVar5 + 0x30) = uVar7;
        }
      }
      cVar2 = (**(code **)(*plVar9 + 0x40))(plVar9);
      if (cVar2 != '\0') {
        (**(code **)(*plVar9 + 0x48))(plVar9);
        uVar3 = (**(code **)(*plVar9 + 0x28))(plVar9);
        *(bool *)(lVar8 + 0x820) = (uVar3 & 0xff) == 0;
        uVar4 = (**(code **)(*param_1 + 0x30))(param_1);
        FUN_180022760(param_1,uVar4,uVar3);
        if (*(longlong *)(DAT_18024de60 + 0x3b0) != 0) {
          (*__imp_USER32_dll_PostMessageW)(*(longlong *)(DAT_18024de60 + 0x3b0),0x408,0,0);
        }
      }
      (**(code **)(*plVar9 + 0x20))(plVar9);
      if (cVar1 == '\0') {
        uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
        auVar10 = func_0x000180220598(DAT_18024de60,uVar7);
        lVar8 = auVar10._0_8_;
        if (lVar8 != 0) {
          FUN_180100d48(lVar8,auVar10._8_8_,*(undefined8 *)(lVar8 + 0x30));
          *(undefined8 *)(lVar8 + 0x30) = 0;
        }
      }
    }
  }
  return;
}

