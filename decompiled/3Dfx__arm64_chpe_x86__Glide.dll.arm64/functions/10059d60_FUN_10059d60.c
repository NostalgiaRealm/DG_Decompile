/*
 * FUN_10059d60 at 10059d60
 * undefined FUN_10059d60(void)
 * Address ranges: 10059d60-10059ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10059d60(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  local_70 = param_2;
  uStack_6c = param_3;
  local_68[0] = param_4;
  (*(code *)PTR_FUN_1009d03c)(param_1 + 0x1c);
  uVar2 = 0;
  if (((*(char *)(param_1 + 0x34) != '\0') ||
      (uVar3 = FUN_1005a350(param_1,&local_70), (uVar3 & 1) != 0)) &&
     (puVar1 = (undefined4 *)FUN_1005a168(param_1,&local_70), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = local_68[0];
    local_70 = puVar1 + 1;
    puVar1 = (undefined4 *)FUN_1005a3d0(local_70,&uStack_6c);
    if (puVar1 == (undefined4 *)0x0) {
      local_68[0] = 0xffffffff;
      uVar3 = FUN_1005a3d0(local_70,local_68);
      if ((int)uVar3 != 0) {
        uVar2 = FUN_100598f8(uVar3,uVar3 & 0xffffffff);
      }
      local_60 = param_5;
      uStack_5c = param_6;
      local_58 = param_3;
      uStack_54 = param_7;
      local_50 = param_8;
      FUN_1005a460(local_70,&uStack_6c,&local_60);
    }
    else {
      uVar2 = FUN_100598f8(puVar1,puVar1);
      *puVar1 = param_5;
      puVar1[1] = param_6;
      puVar1[2] = param_3;
      puVar1[3] = param_7;
      *(undefined8 *)(puVar1 + 4) = param_8;
    }
  }
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x1c);
  return uVar2;
}

