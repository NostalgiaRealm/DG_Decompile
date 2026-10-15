/*
 * FUN_10009130 at 10009130
 * undefined FUN_10009130(void)
 * Address ranges: 10009130-10009267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009130(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar6 = FUN_100076f8();
  iVar7 = FUN_10008f48(uVar6,param_1);
  uVar8 = 0;
  if (iVar7 != 0) {
    if ((param_2 - 0x46U < 2) && (puVar1 = (uint *)(param_4 + 0x18), (*puVar1 & 3) == 0)) {
      uVar2 = *(undefined4 *)(param_4 + 8);
      uVar3 = *(undefined4 *)(param_4 + 0xc);
      uVar4 = *(undefined4 *)(param_4 + 0x10);
      uVar5 = *(undefined4 *)(param_4 + 0x14);
      uVar8 = (*(code *)PTR_FUN_100a8134)
                        (*(undefined4 *)(iVar7 + 0x1c),param_1,param_2,param_3,param_4);
      *(undefined4 *)(param_4 + 8) = uVar2;
      *(undefined4 *)(param_4 + 0xc) = uVar3;
      *(undefined4 *)(param_4 + 0x10) = uVar4;
      *(undefined4 *)(param_4 + 0x14) = uVar5;
      *puVar1 = *puVar1 & 0xfffffffc;
    }
    else {
      uVar8 = (*(code *)PTR_FUN_100a8134)
                        (*(undefined4 *)(iVar7 + 0x1c),param_1,param_2,param_3,param_4);
    }
  }
  FUN_10008100(uVar6);
  return uVar8;
}

