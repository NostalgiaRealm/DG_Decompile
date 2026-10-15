/*
 * FUN_1004f89c at 1004f89c
 * uint __fastcall FUN_1004f89c(int param_1)
 * Address ranges: 1004f89c-1004f982
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1004f89c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar6;
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
  uint uVar5;
  
  local_54 = 0x10000;
  local_5c[0] = 1;
  local_44 = 1;
  local_4c = (*(int *)(param_1 + 0x28) + 0xffU & 0xffffff00) << 10;
  uVar5 = 0;
  local_40 = 1;
  local_3e = 1;
  local_38 = 1;
  local_30 = 1;
  puVar6 = &local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)puVar6 = 0;
    puVar6 = (undefined8 *)((int)puVar6 + 4);
  }
  local_50 = 0;
  local_48 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) * 0x18 + *(int *)(param_1 + 8));
  uVar2 = (**(code **)(*piVar1 + 0x6c))
                    (piVar1,&DAT_10066914,0,local_5c,0xac3,0,&DAT_10063c78,local_18);
  if ((int)uVar2 < 0) goto LAB_1004f96f;
  local_24 = (**(code **)(*local_18[0] + 0x2c))(local_18[0]);
  iVar3 = (**(code **)(*local_18[0] + 0x20))(local_18[0],0,0,local_1c);
  if (iVar3 < 0) {
LAB_1004f964:
    bVar4 = (byte)uVar5;
    uVar2 = (**(code **)(*local_18[0] + 8))(local_18[0]);
  }
  else if (*(int *)(param_1 + 0x4c) == 0) {
    uVar2 = FUN_1004f983((void *)(param_1 + 0x48),(undefined4 *)&local_24);
    if ((char)uVar2 == '\0') goto LAB_1004f964;
    bVar4 = 1;
  }
  else {
    uVar2 = FUN_1004f9f7((void *)(param_1 + 0x48),*(int *)(param_1 + 0x54) + 1,
                         (undefined4 *)&local_24);
    uVar5 = uVar2 & 0xff;
    bVar4 = (byte)uVar2;
    if (bVar4 == 0) goto LAB_1004f964;
  }
  uVar5 = (uint)bVar4 << 8;
LAB_1004f96f:
  return CONCAT31((int3)(uVar2 >> 8),(char)(uVar5 >> 8));
}

