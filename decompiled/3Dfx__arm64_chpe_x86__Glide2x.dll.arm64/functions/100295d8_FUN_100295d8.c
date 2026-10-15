/*
 * FUN_100295d8 at 100295d8
 * undefined FUN_100295d8(void)
 * Address ranges: 100295d8-1002977f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100295d8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  int iVar5;
  uint uVar6;
  int extraout_w11;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_3c;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 4);
  iVar5 = *(int *)(iVar2 + 0x18);
  uVar6 = *(uint *)(iVar2 + 0xc2) & 4;
  local_2c = *(undefined4 *)(iVar2 + 0xde);
  uStack_30 = *(undefined4 *)(iVar2 + 0xda);
  iVar2 = FUN_10055650((int *)(iVar3 + 4));
  local_60 = *(undefined4 *)(iVar3 + 0xa4);
  uStack_44 = *(undefined4 *)(&DAT_10096de8 + iVar2 * 4);
  uStack_64 = *(undefined4 *)(iVar3 + 0xa0);
  local_68 = *(undefined4 *)(iVar3 + 0x94);
  uStack_6c = *(undefined4 *)(iVar3 + 0x2960);
  uStack_4c = *(undefined4 *)(&DAT_100978e0 + *(int *)(extraout_w11 + 0x1c) * 4);
  local_50 = *(undefined4 *)(iVar3 + 0xb8);
  uStack_54 = *(undefined4 *)(iVar3 + 0xb4);
  local_58 = *(undefined4 *)(iVar3 + 0xac);
  uStack_5c = *(undefined4 *)(iVar3 + 0xa8);
  uStack_3c = (uint)(uVar6 != 0);
  local_37 = iVar5 == 1;
  local_48 = 0;
  local_34 = 0;
  local_70 = extraout_w1;
  iVar3 = FUN_1006a910(*(undefined4 *)(iVar3 + 0x295c),&local_70);
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = iVar3;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_10029780(param_1);
    iVar2 = *(int *)(param_1 + 4);
    iVar3 = 0x1d58;
    if (*(char *)(*(int *)(iVar2 + 4) + 0x50) != '\0') {
      iVar3 = 0x1158;
    }
    FUN_1006b840(*(undefined4 *)(iVar2 + 0x295c),*piVar1,iVar3 + iVar2,iVar2 + 0x2958);
    uVar4 = 1;
    *(undefined1 *)(*piVar1 + 0xd5a) = 0;
  }
  return uVar4;
}

