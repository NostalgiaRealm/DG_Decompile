/*
 * FUN_100402b0 at 100402b0
 * undefined FUN_100402b0(void)
 * Address ranges: 100402b0-100404a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100402b0(int param_1,int param_2,undefined4 param_3,undefined8 param_4,ulonglong param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  piVar1 = (int *)(param_1 + 0x44);
  iVar5 = *piVar1;
  piVar2 = (int *)(param_1 + 0x34);
  if ((iVar5 == 0) || ((*piVar2 == 8 && ((param_5 & 1) != 0)))) {
    uStack_468 = 0;
    local_470 = 0;
    uStack_458 = 0;
    local_460 = 0;
    local_450 = 0;
    if (*piVar2 == 8) {
      local_448 = 0;
      if (iVar5 != 0) {
        uVar3 = (*(code *)PTR_FUN_1016c004)(0);
        uVar4 = (*(code *)PTR_FUN_1016c034)(uVar3,*piVar1);
        (*(code *)PTR_FUN_1016c038)(uVar3,0,0x100,&local_448);
        (*(code *)PTR_FUN_1016c034)(uVar3,uVar4);
        (*(code *)PTR_FUN_1016c014)(uVar3);
        iVar5 = *piVar1;
      }
    }
    else {
      local_448 = *(undefined4 *)(param_1 + 0x38);
      uStack_444 = *(undefined4 *)(param_1 + 0x3c);
      local_440 = *(undefined4 *)(param_1 + 0x40);
    }
    if (iVar5 == 0) {
      local_470 = CONCAT44(*(undefined4 *)(param_1 + 0x18),0x28);
      uStack_468 = CONCAT26((short)*piVar2,CONCAT24(1,-*(int *)(param_1 + 0x1c)));
      uVar3 = 0;
      if ((*piVar2 - 0x10U & 0xffffffef) == 0) {
        uVar3 = 3;
      }
      local_460 = CONCAT44(local_460._4_4_,uVar3);
      iVar5 = (*(code *)PTR_FUN_1016c00c)(0,&local_470,0,param_1 + 0x58,param_2,param_3);
      *piVar1 = iVar5;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        (*(code *)PTR_FUN_1016c024)(iVar5,0x18,auStack_490);
        *(undefined4 *)(param_1 + 0x5c) = local_484;
        *(bool *)(param_1 + 0x60) = param_2 != 0;
        iVar5 = *piVar1;
      }
      *(undefined2 *)(param_1 + 0x61) = 0;
    }
  }
  return iVar5 != 0;
}

