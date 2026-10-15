/*
 * FUN_1000dc50 at 1000dc50
 * undefined FUN_1000dc50(void)
 * Address ranges: 1000dc50-1000dd67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000dc50(int param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  uVar3 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
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
    FUN_10121020(auStack_90);
    uStack_78 = param_2[1];
    local_80 = *param_2;
    uStack_68 = param_2[3];
    local_70 = param_2[2];
    uStack_58 = param_2[5];
    local_60 = param_2[4];
    uStack_48 = param_2[7];
    local_50 = param_2[6];
    local_40 = *(undefined4 *)(param_2 + 8);
    FUN_10023460(param_1,&local_80);
    uVar3 = 0;
    FUN_10120f70(auStack_90);
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar3;
}

