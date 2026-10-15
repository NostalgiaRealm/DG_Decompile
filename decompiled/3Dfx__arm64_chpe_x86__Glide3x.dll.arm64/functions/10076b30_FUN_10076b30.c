/*
 * FUN_10076b30 at 10076b30
 * undefined FUN_10076b30(void)
 * Address ranges: 10076b30-10076ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10076b30(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int local_80 [6];
  undefined4 local_68 [2];
  undefined8 local_60;
  ulonglong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + 0x520;
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x172c0);
  puVar5 = (undefined4 *)FUN_1007dc70(0x48);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[2] = iVar1;
    puVar5[3] = param_2;
    puVar5[4] = 0;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    puVar5[10] = param_3;
    *(undefined8 *)(puVar5 + 0xb) = 0;
    *(undefined1 *)(puVar5 + 0xd) = 0;
    *puVar5 = &PTR_FUN_10099388;
    puVar5[0xe] = &PTR_FUN_10099370;
    puVar5[0x10] = 0;
    puVar5[0x11] = uVar4;
  }
  if (puVar5 != (undefined4 *)0x0) {
    local_68[0] = 1;
    uStack_58 = (ulonglong)(uint)puVar5[10];
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_38 = 0;
    local_60 = 0x10000;
    local_40 = 0x100000000;
    local_50 = 0x1000100000001;
    uStack_48 = 0x100000000;
    if (param_4 == 2) {
      uVar6 = 0xac3;
    }
    else if (param_4 == 3) {
      uVar6 = 0x400;
    }
    else {
      uVar6 = 0;
    }
    local_80[0] = param_4;
    FUN_100612b8(puVar5[2],puVar5[3],local_80,param_5,local_68,uVar6,param_7,param_8,puVar5 + 0x10);
    if (puVar5[0x10] == 0) {
      FUN_1007cd30(puVar5);
      FUN_1007dd10(puVar5,0x48);
      puVar5 = (undefined4 *)0x0;
    }
  }
  puVar2 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = puVar5 + 0xe;
  }
  return puVar2;
}

