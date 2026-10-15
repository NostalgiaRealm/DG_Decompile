/*
 * FUN_1800de850 at 1800de850
 * undefined FUN_1800de850(void)
 * Address ranges: 1800de850-1800de95f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800de850(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong extraout_x12;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  int local_40 [4];
  
  auVar7 = func_0x0001801faba0();
  uVar3 = extraout_x12;
  if (auVar7._0_4_ != -1) {
    lVar1 = param_1 + (auVar7._0_8_ & 0xffffffff) * 4;
    if (*(int *)(lVar1 + 0x434) == -1) {
      *(undefined4 *)(lVar1 + 0x434) = 0;
      uVar3 = FUN_1800e2e40(*(undefined8 *)(param_1 + 0x480),auVar7._8_8_,
                            *(undefined4 *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x490),
                            *(undefined4 *)(param_1 + 0x48c),*(undefined1 *)(param_1 + 0x498));
      if ((uVar3 & 1) != 0) {
        uVar5 = 2;
        lVar6 = *(longlong *)(param_1 + 0x480) + (param_2 & 0xffffffff) * 0x18c0;
        do {
          plVar4 = *(longlong **)(lVar6 + 0x6b0);
          iVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4,0x1c,uVar5,local_40);
          if ((((iVar2 == 0) && (local_40[0] != 0)) &&
              (plVar4 = *(longlong **)(lVar6 + 0x6b0),
              iVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4,0x39,uVar5,local_40), iVar2 == 0)) &&
             (local_40[0] != 0)) {
            *(char *)(param_1 + (auVar7._0_8_ & 0xffffffff) +
                      (ulonglong)*(uint *)(lVar1 + 0x434) * 0x10 + 0x334) = (char)uVar5;
            *(int *)(lVar1 + 0x434) = *(int *)(lVar1 + 0x434) + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x21);
        FUN_1800e32e0(*(undefined8 *)(param_1 + 0x480),param_2 & 0xffffffff);
      }
    }
    uVar3 = (ulonglong)*(uint *)(lVar1 + 0x434);
  }
  return uVar3 & 0xffffffff;
}

