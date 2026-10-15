/*
 * FUN_10038a68 at 10038a68
 * undefined FUN_10038a68(void)
 * Address ranges: 10038a68-10038b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10038a68(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  if (((*(uint *)(param_1 + 0x104) >> 4 & 1) == 0) ||
     ((&DAT_100be33a)[*(int *)(param_1 + 0x11c) * 0x228] == '\0')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    local_40 = 0x30;
    uStack_34 = 0;
    uStack_3c = 0;
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_1c = 0;
    uStack_14 = 0;
    iVar1 = (*(code *)PTR_FUN_100ba204)(0,&local_40);
    if (((iVar1 != 0) && (uStack_3c._4_4_ != 0)) && (uVar2 = 0, DAT_100c2940 != 0)) {
      do {
        iVar1 = *(int *)(*(int *)(DAT_100c2950 + uVar2 * 4) + 0xfc);
        if (iVar1 != 0 && uStack_3c._4_4_ == iVar1) {
          return 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_100c2940);
    }
  }
  return iVar3;
}

