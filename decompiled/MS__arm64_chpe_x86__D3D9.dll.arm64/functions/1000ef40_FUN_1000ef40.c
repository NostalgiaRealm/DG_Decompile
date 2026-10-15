/*
 * FUN_1000ef40 at 1000ef40
 * undefined FUN_1000ef40(void)
 * Address ranges: 1000ef40-1000f057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ef40(int param_1,undefined8 *param_2)

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
    if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar2 == 0) {
        FUN_100071d0(0);
      }
    }
    FUN_10157b40(auStack_90);
    uStack_78 = param_2[1];
    local_80 = *param_2;
    uStack_68 = param_2[3];
    local_70 = param_2[2];
    uStack_58 = param_2[5];
    local_60 = param_2[4];
    uStack_48 = param_2[7];
    local_50 = param_2[6];
    local_40 = *(undefined4 *)(param_2 + 8);
    FUN_10028f80(param_1,&local_80);
    uVar3 = 0;
    FUN_10157a90(auStack_90);
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar3;
}

