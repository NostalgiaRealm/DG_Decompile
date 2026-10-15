/*
 * FUN_1000dd70 at 1000dd70
 * undefined FUN_1000dd70(void)
 * Address ranges: 1000dd70-1000deef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000dd70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  uVar3 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar2 == 0) {
        FUN_10006560(0);
      }
    }
    FUN_10121020(auStack_b0);
    local_a8 = *param_3;
    uStack_9c = *(undefined8 *)(param_3 + 3);
    local_a4 = *(undefined8 *)(param_3 + 1);
    uStack_8c = *(undefined8 *)(param_3 + 7);
    local_94 = *(undefined8 *)(param_3 + 5);
    uStack_7c = *(undefined8 *)(param_3 + 0xb);
    local_84 = *(undefined8 *)(param_3 + 9);
    local_74 = *(undefined8 *)(param_3 + 0xd);
    local_6c = param_3[0xf];
    local_68 = *(undefined8 *)(param_3 + 0x10);
    local_60 = param_3[0x12];
    local_5c = param_3[0x13];
    uStack_58 = param_3[0x14];
    local_54 = param_3[0x15];
    uStack_50 = param_3[0x16];
    local_4c = param_3[0x17];
    uStack_48 = param_3[0x18];
    local_44 = param_3[0x19];
    FUN_10023240(param_1,param_2,&local_a8);
    uVar3 = 0;
    FUN_10120f70(auStack_b0);
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar3;
}

