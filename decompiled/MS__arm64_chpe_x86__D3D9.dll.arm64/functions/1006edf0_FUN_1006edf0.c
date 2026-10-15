/*
 * FUN_1006edf0 at 1006edf0
 * undefined FUN_1006edf0(void)
 * Address ranges: 1006edf0-1006ef53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006edf0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int local_50 [2];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = param_1[3];
  uVar7 = *(undefined8 *)(param_1 + 4);
  iVar5 = param_1[6];
  FUN_1005df78(iVar1,0,0,0);
  if ((uVar3 >> 1 & 1) == 0) {
    FUN_10071158(iVar1 + 0xf768,iVar2,uVar7,0);
  }
  else {
    local_50[0] = iVar2;
    if (*(int *)(iVar2 + 8) == 9) {
      iVar4 = *(int *)(iVar1 + 0xf76c);
      local_48 = uVar7;
      uVar6 = FUN_10120fc8(*(undefined4 *)(iVar1 + 0xf774),
                           *(undefined4 *)(*(int *)(iVar4 + 0x1300) + 0xc),
                           *(undefined8 *)(*(int *)(iVar4 + 0x1304) + 0x938),&local_40);
      if ((uVar6 & 1) == 0) goto LAB_1006ef30;
      FUN_10116480(*(undefined4 *)(*(int *)(iVar1 + 0xf76c) + 0x1304),local_40 & 0xffffffff,0,
                   local_38 & 0xffffffff);
    }
    else {
      if (*(int *)(iVar2 + 8) != 0xb) goto LAB_1006ef30;
      local_38 = 0;
      local_40 = 0;
      local_48 = uVar7;
    }
    FUN_10071898(iVar1 + 0xf77c,local_50,&local_48);
    (*(code *)PTR_FUN_1016c074)(iVar1 + 0xf7c8);
    FUN_10070c78(iVar1 + 0xf768,iVar2);
    (*(code *)PTR_FUN_1016c0c0)(iVar1 + 0xf7c8);
  }
LAB_1006ef30:
  if ((char)iVar5 != '\0') {
    FUN_10062e10(iVar1,iVar2);
  }
  return;
}

