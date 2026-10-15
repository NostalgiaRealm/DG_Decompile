/*
 * FUN_1800dea30 at 1800dea30
 * undefined FUN_1800dea30(void)
 * Address ranges: 1800dea30-1800deb4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800dea30(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong extraout_x12;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  
  param_2 = param_2 & 0xffffffff;
  auVar7 = func_0x0001801faba0(param_1,param_2);
  uVar4 = extraout_x12;
  if (auVar7._0_4_ != -1) {
    lVar1 = param_1 + (auVar7._0_8_ & 0xffffffff) * 4;
    if (*(int *)(lVar1 + 0x434) == -1) {
      *(undefined4 *)(lVar1 + 0x434) = 0;
      uVar4 = FUN_1800f8ca8(*(undefined8 *)(param_1 + 0x480),auVar7._8_8_,
                            *(undefined4 *)(param_1 + 0x488));
      if ((uVar4 & 1) != 0) {
        uVar6 = 2;
        lVar2 = *(longlong *)(param_1 + 0x480) + param_2 * 0x20;
        do {
          plVar5 = *(longlong **)(lVar2 + 0x6d0);
          local_50 = 0x1c;
          local_48 = 0;
          uStack_4c = uVar6;
          iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5,4,&local_50,0x10);
          if ((((iVar3 == 0) && (local_50 = 0x39, local_48._4_4_ != 0)) &&
              (plVar5 = *(longlong **)(lVar2 + 0x6d0),
              iVar3 = (**(code **)(*plVar5 + 0x68))(plVar5,4,&local_50,0x10), iVar3 == 0)) &&
             (local_48._4_4_ != 0)) {
            *(char *)(param_1 + (auVar7._0_8_ & 0xffffffff) +
                      (ulonglong)*(uint *)(lVar1 + 0x434) * 0x10 + 0x334) = (char)uVar6;
            *(int *)(lVar1 + 0x434) = *(int *)(lVar1 + 0x434) + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x11);
        FUN_1800f9060(*(undefined8 *)(param_1 + 0x480),param_2);
      }
    }
    uVar4 = (ulonglong)*(uint *)(lVar1 + 0x434);
  }
  return uVar4 & 0xffffffff;
}

