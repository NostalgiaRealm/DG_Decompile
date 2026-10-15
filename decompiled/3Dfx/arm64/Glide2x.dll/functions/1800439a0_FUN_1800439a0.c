/*
 * FUN_1800439a0 at 1800439a0
 * ulonglong __cdecl FUN_1800439a0(longlong param_1, uint param_2)
 * Address ranges: 1800439a0-180043aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800439a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint extraout_w1;
  ulonglong extraout_x12;
  uint uVar6;
  longlong lVar7;
  int local_40 [4];
  
  uVar3 = FUN_180057130(param_1,param_2);
  uVar4 = extraout_x12;
  if ((int)uVar3 != -1) {
    lVar1 = param_1 + (uVar3 & 0xffffffff) * 4;
    if (*(int *)(lVar1 + 0x434) == -1) {
      *(undefined4 *)(lVar1 + 0x434) = 0;
      uVar4 = FUN_18004dcf8(*(longlong *)(param_1 + 0x480),extraout_w1,*(int *)(param_1 + 0x488),
                            *(ulonglong *)(param_1 + 0x490),(ulonglong)*(uint *)(param_1 + 0x48c),
                            *(byte *)(param_1 + 0x498));
      if ((uVar4 & 1) != 0) {
        uVar6 = 2;
        lVar7 = *(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 0x18c0;
        do {
          plVar5 = *(longlong **)(lVar7 + 0x6b0);
          iVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5,0x1c,uVar6,local_40);
          if ((((iVar2 == 0) && (local_40[0] != 0)) &&
              (plVar5 = *(longlong **)(lVar7 + 0x6b0),
              iVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5,0x39,uVar6,local_40), iVar2 == 0)) &&
             (local_40[0] != 0)) {
            *(char *)(param_1 + (uVar3 & 0xffffffff) + (ulonglong)*(uint *)(lVar1 + 0x434) * 0x10 +
                     0x334) = (char)uVar6;
            *(int *)(lVar1 + 0x434) = *(int *)(lVar1 + 0x434) + 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x21);
        FUN_18004e198(*(longlong *)(param_1 + 0x480),param_2);
      }
    }
    uVar4 = (ulonglong)*(uint *)(lVar1 + 0x434);
  }
  return uVar4 & 0xffffffff;
}

