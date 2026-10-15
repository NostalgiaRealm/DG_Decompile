/*
 * FUN_1004c2e0 at 1004c2e0
 * undefined FUN_1004c2e0(void)
 * Address ranges: 1004c2e0-1004c43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1004c2e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_40 [4];
  
  iVar6 = FUN_10083af0(param_2,&DAT_1009e7b0,0x10);
  if (iVar6 == 0) {
    piVar7 = (int *)(param_1 + 0x18);
  }
  else {
    iVar6 = FUN_10083af0(param_2,&DAT_1009e7c0,0x10);
    if (iVar6 == 0) {
      piVar7 = (int *)(param_1 + 0x24);
    }
    else {
      iVar6 = FUN_10083af0(param_2,&DAT_1009e7d0,0x10);
      if (iVar6 != 0) {
        iVar6 = FUN_10083af0(param_2,&DAT_1009e7e0,0x10);
        if (iVar6 == 0) {
          local_40[0] = param_3;
          uVar5 = FUN_1004ca40(param_1 + 0x3c,local_40);
          return uVar5;
        }
        return 0;
      }
      piVar7 = (int *)(param_1 + 0x30);
    }
  }
  puVar1 = (uint *)(piVar7 + 2);
  puVar2 = (uint *)(piVar7 + 1);
  uVar3 = *puVar1;
  if (*puVar2 == uVar3) {
    uVar4 = uVar3 << 1;
    if (uVar3 == 0) {
      uVar4 = 0x10;
    }
    iVar6 = uVar4 * 4;
    if (uVar4 >> 0x1e != 0) {
      iVar6 = -1;
    }
    iVar6 = FUN_10083400(iVar6);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_10083b40(iVar6,*piVar7,*puVar1 << 2);
    FUN_10083420(*piVar7);
    *piVar7 = iVar6;
    *puVar1 = uVar4;
  }
  *(undefined4 *)(*piVar7 + *puVar2 * 4) = param_3;
  *puVar2 = *puVar2 + 1;
  return 1;
}

