/*
 * FUN_1800443b0 at 1800443b0
 * ulonglong __cdecl FUN_1800443b0(longlong param_1, uint param_2)
 * Address ranges: 1800443b0-1800444cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800443b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint extraout_w1;
  ulonglong extraout_x12;
  uint uVar7;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 local_48;
  
  uVar4 = FUN_180057f80(param_1,param_2);
  uVar5 = extraout_x12;
  if ((int)uVar4 != -1) {
    lVar1 = param_1 + (uVar4 & 0xffffffff) * 4;
    if (*(int *)(lVar1 + 0x434) == -1) {
      *(undefined4 *)(lVar1 + 0x434) = 0;
      uVar5 = FUN_180048760(*(longlong *)(param_1 + 0x480),extraout_w1,*(int *)(param_1 + 0x488));
      if ((uVar5 & 1) != 0) {
        uVar7 = 2;
        lVar2 = *(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 0x20;
        do {
          plVar6 = *(longlong **)(lVar2 + 0x6d0);
          local_50 = 0x1c;
          local_48 = 0;
          uStack_4c = uVar7;
          iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6,4,&local_50,0x10);
          if ((((iVar3 == 0) && (local_50 = 0x39, local_48._4_4_ != 0)) &&
              (plVar6 = *(longlong **)(lVar2 + 0x6d0),
              iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6,4,&local_50,0x10), iVar3 == 0)) &&
             (local_48._4_4_ != 0)) {
            *(char *)(param_1 + (uVar4 & 0xffffffff) + (ulonglong)*(uint *)(lVar1 + 0x434) * 0x10 +
                     0x334) = (char)uVar7;
            *(int *)(lVar1 + 0x434) = *(int *)(lVar1 + 0x434) + 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x11);
        FUN_180048b18(*(longlong *)(param_1 + 0x480),param_2);
      }
    }
    uVar5 = (ulonglong)*(uint *)(lVar1 + 0x434);
  }
  return uVar5 & 0xffffffff;
}

