/*
 * FUN_100ce420 at 100ce420
 * undefined FUN_100ce420(void)
 * Address ranges: 100ce420-100ce5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100ce420(int param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint uStack_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  
  uVar4 = 0;
  puVar2 = (undefined4 *)FUN_100ccac8(param_1,param_2);
  local_78 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 4);
    if ((int)puVar2[2] < 4) {
      uStack_54 = *(undefined4 *)(&DAT_101626d8 + puVar2[2] * 4);
    }
    else {
      uStack_54 = 0;
    }
    local_3c = *(undefined4 *)(iVar1 + 0xde);
    uStack_40 = *(undefined4 *)(iVar1 + 0xda);
    local_48 = *(undefined1 *)(iVar1 + 0x26);
    local_58 = 0;
    local_50 = *(undefined4 *)(&DAT_10165708 + *(int *)(iVar1 + 0xce) * 4);
    local_44 = 0;
    uStack_7c = *(undefined4 *)(param_1 + 0x14);
    uStack_5c = *(undefined4 *)(&DAT_10165720 + *(int *)(iVar1 + 0x1c) * 4);
    uStack_74 = *param_3;
    local_70 = param_3[1];
    uStack_6c = puVar2[7];
    local_68 = puVar2[8];
    uStack_64 = param_3[2];
    local_60 = param_3[3];
    uStack_4c = (uint)(puVar2[3] == 1);
    local_47 = *(int *)(iVar1 + 0x18) == 1;
    local_80 = param_1;
    puVar3 = (undefined4 *)FUN_1010f710(*(undefined4 *)(param_1 + 0x10),&local_80);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar2 = puVar3;
      FUN_10110388(*(undefined4 *)(param_1 + 0x10),*puVar3,0);
      FUN_100ccb20(param_1,puVar2[5],puVar3);
      if (param_4 == '\0') {
        FUN_100ccb88(param_1,puVar2);
      }
      FUN_100ccc08(param_1,puVar2[5],puVar3);
      *(undefined1 *)((int)puVar2 + 0x25) = 1;
      uVar4 = 1;
    }
  }
  return uVar4;
}

