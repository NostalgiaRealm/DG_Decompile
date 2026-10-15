/*
 * FUN_10090af0 at 10090af0
 * undefined FUN_10090af0(void)
 * Address ranges: 10090af0-10090c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10090af0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 local_40 [4];
  
  iVar7 = FUN_10091750(param_2,&DAT_100b17a0,0x10);
  local_40[0] = param_3;
  if (iVar7 == 0) {
    uVar6 = FUN_100013d8(param_1 + 0x18,local_40);
  }
  else {
    iVar7 = FUN_10091750(param_2,&DAT_100b17b0,0x10);
    if (iVar7 == 0) {
      piVar1 = (int *)(param_1 + 0x24);
    }
    else {
      iVar7 = FUN_10091750(param_2,&DAT_100b17c0,0x10);
      if (iVar7 != 0) {
        iVar7 = FUN_10091750(param_2,&DAT_100b17d0,0x10);
        if (iVar7 == 0) {
          uVar6 = FUN_100013d8(param_1 + 0x3c,local_40);
          return uVar6;
        }
        return 0;
      }
      piVar1 = (int *)(param_1 + 0x30);
    }
    puVar2 = (uint *)(piVar1 + 2);
    puVar3 = (uint *)(piVar1 + 1);
    uVar4 = *puVar2;
    if (*puVar3 == uVar4) {
      uVar5 = uVar4 << 1;
      if (uVar4 == 0) {
        uVar5 = 0x10;
      }
      iVar7 = uVar5 * 4;
      if (uVar5 >> 0x1e != 0) {
        iVar7 = -1;
      }
      iVar7 = FUN_100914b0(iVar7);
      if (iVar7 == 0) {
        return 0;
      }
      FUN_100917a0(iVar7,*piVar1,*puVar2 << 2);
      FUN_100914d0(*piVar1);
      *piVar1 = iVar7;
      *puVar2 = uVar5;
    }
    uVar6 = 1;
    *(undefined4 *)(*piVar1 + *puVar3 * 4) = param_3;
    *puVar3 = *puVar3 + 1;
  }
  return uVar6;
}

