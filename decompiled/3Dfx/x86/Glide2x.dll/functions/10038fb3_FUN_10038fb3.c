/*
 * FUN_10038fb3 at 10038fb3
 * uint __fastcall FUN_10038fb3(int param_1)
 * Address ranges: 10038fb3-10039091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10038fb3(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar5;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_24;
  undefined1 local_1c [4];
  int *local_18 [5];
  uint uVar4;
  
  local_54 = 0x10000;
  local_5c[0] = 1;
  local_44 = 1;
  local_4c = (*(int *)(param_1 + 0x28) + 0xffU & 0xffffff00) << 10;
  local_40 = 1;
  local_3e = 1;
  uVar4 = 0;
  local_38 = 1;
  local_30 = 1;
  puVar5 = &local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)puVar5 = 0;
    puVar5 = (undefined8 *)((int)puVar5 + 4);
  }
  local_50 = 0;
  local_48 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  uVar1 = FUN_1003b91c(*(void **)(param_1 + 8),*(int *)(param_1 + 0xc),&DAT_10054088,0,local_5c,
                       0xac3,0,0,local_18);
  if ((char)uVar1 == '\0') goto LAB_1003907e;
  local_24 = (**(code **)(*local_18[0] + 0x2c))(local_18[0]);
  iVar2 = (**(code **)(*local_18[0] + 0x20))(local_18[0],0,0,local_1c);
  if (iVar2 < 0) {
LAB_10039073:
    bVar3 = (byte)uVar4;
    uVar1 = (**(code **)(*local_18[0] + 8))(local_18[0]);
  }
  else if (*(int *)(param_1 + 0x4c) == 0) {
    uVar1 = FUN_10039092((void *)(param_1 + 0x48),(undefined4 *)&local_24);
    if ((char)uVar1 == '\0') goto LAB_10039073;
    bVar3 = 1;
  }
  else {
    uVar1 = FUN_10039106((void *)(param_1 + 0x48),*(int *)(param_1 + 0x54) + 1,
                         (undefined4 *)&local_24);
    uVar4 = uVar1 & 0xff;
    bVar3 = (byte)uVar1;
    if (bVar3 == 0) goto LAB_10039073;
  }
  uVar4 = (uint)bVar3 << 8;
LAB_1003907e:
  return CONCAT31((int3)(uVar1 >> 8),(char)(uVar4 >> 8));
}

