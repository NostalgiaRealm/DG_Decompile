/*
 * FUN_10019c70 at 10019c70
 * undefined FUN_10019c70(void)
 * Address ranges: 10019c70-10019e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10019c70(int param_1)

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
  iVar2 = FUN_100593e0((int *)(iVar3 + 4));
  local_60 = *(undefined4 *)(iVar3 + 0xa4);
  uStack_44 = *(undefined4 *)(&DAT_10099bb8 + iVar2 * 4);
  uStack_64 = *(undefined4 *)(iVar3 + 0xa0);
  local_68 = *(undefined4 *)(iVar3 + 0x94);
  uStack_6c = *(undefined4 *)(iVar3 + 0x29dc);
  uStack_4c = *(undefined4 *)(&DAT_1009b9b0 + *(int *)(extraout_w11 + 0x1c) * 4);
  local_50 = *(undefined4 *)(iVar3 + 0xb8);
  uStack_54 = *(undefined4 *)(iVar3 + 0xb4);
  local_58 = *(undefined4 *)(iVar3 + 0xac);
  uStack_5c = *(undefined4 *)(iVar3 + 0xa8);
  uStack_3c = (uint)(uVar6 != 0);
  local_37 = iVar5 == 1;
  local_48 = 0;
  local_34 = 0;
  local_70 = extraout_w1;
  iVar3 = FUN_1006e5b0(*(undefined4 *)(iVar3 + 0x29d8),&local_70);
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = iVar3;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_10019e18(param_1);
    iVar2 = *(int *)(param_1 + 4);
    iVar3 = 0x1dd4;
    if (*(char *)(*(int *)(iVar2 + 4) + 0x50) != '\0') {
      iVar3 = 0x11d4;
    }
    FUN_1006f4e0(*(undefined4 *)(iVar2 + 0x29d8),*piVar1,iVar3 + iVar2,iVar2 + 0x29d4);
    uVar4 = 1;
    *(undefined1 *)(*piVar1 + 0xd5a) = 0;
  }
  return uVar4;
}

