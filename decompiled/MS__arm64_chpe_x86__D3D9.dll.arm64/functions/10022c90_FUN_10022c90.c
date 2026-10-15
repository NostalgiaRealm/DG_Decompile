/*
 * FUN_10022c90 at 10022c90
 * undefined FUN_10022c90(void)
 * Address ranges: 10022c90-10022d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10022c90(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [32];
  
  uVar1 = 0;
  if (param_2 == 0) {
    local_48 = 0;
    uStack_3c = *(undefined4 *)(param_1 + 0x98);
    local_40 = 0;
    local_38 = *(undefined4 *)(param_1 + 0x9c);
    uStack_34 = *(undefined4 *)(param_1 + 0xa0);
    if (param_3 == (undefined4 *)0x0) {
      puVar4 = (undefined8 *)(param_1 + 0x78);
      puVar3 = (undefined8 *)FUN_10022a40(puVar4,auStack_30,&local_48);
      uVar1 = 1;
    }
    else {
      local_60 = *param_3;
      uStack_5c = param_3[1];
      local_58 = param_3[4];
      uStack_54 = param_3[2];
      local_50 = param_3[3];
      uStack_4c = param_3[5];
      uVar2 = FUN_10022430(&local_48,auStack_30,&local_60);
      uVar1 = FUN_10022390(&local_60,uVar2);
      puVar4 = (undefined8 *)(param_1 + 0x78);
      puVar3 = (undefined8 *)FUN_10022a40(puVar4,auStack_30,&local_60);
    }
    uVar5 = *puVar3;
    puVar4[1] = puVar3[1];
    *puVar4 = uVar5;
    puVar4[2] = puVar3[2];
  }
  return uVar1;
}

