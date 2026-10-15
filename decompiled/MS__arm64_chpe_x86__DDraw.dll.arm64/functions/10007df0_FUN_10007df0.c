/*
 * FUN_10007df0 at 10007df0
 * undefined FUN_10007df0(void)
 * Address ranges: 10007df0-10008043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10007df0(int param_1,int param_2,undefined4 param_3,int param_4,ulonglong param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_490 [12];
  undefined4 local_484;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  
  piVar2 = (int *)(param_1 + 0x44);
  iVar6 = *piVar2;
  piVar3 = (int *)(param_1 + 0x34);
  if ((iVar6 == 0) || ((*piVar3 == 8 && ((param_5 & 1) != 0)))) {
    uStack_468 = 0;
    local_470 = 0;
    uStack_458 = 0;
    local_460 = 0;
    local_450 = 0;
    local_448 = 0;
    if (*piVar3 == 8) {
      if (param_4 == 0) {
        local_448 = 0;
      }
      else {
        uVar7 = 0;
        do {
          *(undefined1 *)((int)&local_448 + uVar7 * 4 + 2) =
               *(undefined1 *)(param_4 + 2 + uVar7 * 4);
          *(undefined1 *)((int)&local_448 + uVar7 * 4 + 1) =
               *(undefined1 *)(param_4 + 1 + uVar7 * 4);
          *(undefined1 *)(&local_448 + uVar7) = *(undefined1 *)(param_4 + uVar7 * 4);
          iVar1 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(undefined1 *)((int)&local_448 + iVar1 + 3) = 0;
        } while (uVar7 < 0x100);
      }
      if (iVar6 != 0) {
        uVar4 = (*(code *)PTR_FUN_100ba008)(0);
        uVar5 = (*(code *)PTR_FUN_100ba058)(uVar4,*piVar2);
        (*(code *)PTR_FUN_100ba05c)(uVar4,0,0x100,&local_448);
        (*(code *)PTR_FUN_100ba058)(uVar4,uVar5);
        (*(code *)PTR_FUN_100ba01c)(uVar4);
      }
    }
    else {
      local_448 = *(undefined4 *)(param_1 + 0x38);
      uStack_444 = *(undefined4 *)(param_1 + 0x3c);
      local_440 = *(undefined4 *)(param_1 + 0x40);
    }
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      local_470 = CONCAT44(*(undefined4 *)(param_1 + 0x18),0x28);
      uStack_468 = CONCAT26((short)*piVar3,CONCAT24(1,-*(int *)(param_1 + 0x1c)));
      uVar4 = 0;
      if ((*piVar3 - 0x10U & 0xffffffef) == 0) {
        uVar4 = 3;
      }
      local_460 = CONCAT44(local_460._4_4_,uVar4);
      iVar6 = (*(code *)PTR_FUN_100ba010)(0,&local_470,0,param_1 + 0x58,param_2,param_3);
      *piVar2 = iVar6;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        (*(code *)PTR_FUN_100ba034)(iVar6,0x18,auStack_490);
        *(undefined4 *)(param_1 + 0x5c) = local_484;
        *(bool *)(param_1 + 0x60) = param_2 != 0;
        iVar6 = *piVar2;
      }
      *(undefined2 *)(param_1 + 0x61) = 0;
    }
  }
  return iVar6 != 0;
}

