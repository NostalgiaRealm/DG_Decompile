/*
 * FUN_1011f420 at 1011f420
 * undefined FUN_1011f420(void)
 * Address ranges: 1011f420-1011f4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1011f420(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar1 = (uint *)(param_1 + 2);
  puVar2 = (uint *)(param_1 + 1);
  uVar4 = *puVar1;
  if (*puVar2 == uVar4) {
    uVar5 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar5 = 0x10;
    }
    uVar7 = (undefined4)((ulonglong)uVar5 * 0xc);
    if ((ulonglong)uVar5 * 0xc >> 0x20 != 0) {
      uVar7 = 0xffffffff;
    }
    iVar6 = FUN_101322b0(uVar7);
    if (iVar6 == 0) {
      return 0;
    }
    FUN_101325a0(iVar6,*param_1,((ulonglong)(*puVar1 * 3) & 0x3fffffff) << 2);
    FUN_101322d0(*param_1);
    *param_1 = iVar6;
    *puVar1 = uVar5;
  }
  puVar3 = (undefined8 *)(*param_1 + *puVar2 * 0xc);
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar2 = *puVar2 + 1;
  return 1;
}

