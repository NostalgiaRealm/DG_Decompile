/*
 * FUN_1007c660 at 1007c660
 * undefined FUN_1007c660(void)
 * Address ranges: 1007c660-1007c763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007c660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)(param_1 + 0x8e8);
  puVar2 = (uint *)(param_1 + 0x8f0);
  puVar3 = (uint *)(param_1 + 0x8ec);
  uVar5 = *puVar2;
  if (*puVar3 == uVar5) {
    uVar6 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar6 = 0x10;
    }
    uVar8 = (undefined4)((ulonglong)uVar6 * 0x18);
    if ((ulonglong)uVar6 * 0x18 >> 0x20 != 0) {
      uVar8 = 0xffffffff;
    }
    iVar7 = FUN_100914b0(uVar8);
    if (iVar7 == 0) {
      return;
    }
    FUN_100917a0(iVar7,*piVar1,((ulonglong)(*puVar2 * 3) & 0x1fffffff) << 3);
    FUN_100914d0(*piVar1);
    *piVar1 = iVar7;
    *puVar2 = uVar6;
  }
  puVar4 = (undefined8 *)(*piVar1 + *puVar3 * 0x18);
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = param_2;
  *(undefined4 *)((int)puVar4 + 0xc) = param_3;
  *(undefined4 *)(puVar4 + 2) = param_4;
  *(undefined4 *)((int)puVar4 + 0x14) = param_5;
  *puVar3 = *puVar3 + 1;
  return;
}

