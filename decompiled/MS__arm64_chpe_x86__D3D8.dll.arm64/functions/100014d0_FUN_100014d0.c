/*
 * FUN_100014d0 at 100014d0
 * undefined FUN_100014d0(void)
 * Address ranges: 100014d0-10001657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100014d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_101292f4;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  if (DAT_1013ced8 == 0) {
    DAT_1013ced8 = FUN_100fece0(0x100);
    DAT_1013ced0 = 0x40;
    if (DAT_1013ced8 != 0) goto LAB_1000157c;
LAB_10001570:
    uVar2 = 0;
  }
  else {
LAB_1000157c:
    if (DAT_1013ced0 == DAT_1013ced4) {
      iVar3 = DAT_1013ced0 << 3;
      if ((DAT_1013ced0 & 0x7fffffff) >> 0x1d != 0) {
        iVar3 = -1;
      }
      iVar3 = FUN_100fece0(iVar3);
      if (iVar3 == 0) goto LAB_10001570;
      FUN_100ff660(iVar3,DAT_1013ced8,((ulonglong)DAT_1013ced0 & 0x3fffffff) << 2);
      FUN_100fed00(DAT_1013ced8);
      DAT_1013ced0 = DAT_1013ced0 << 1;
      puVar1 = (undefined4 *)(iVar3 + DAT_1013ced4 * 4);
      DAT_1013ced8 = iVar3;
    }
    else {
      puVar1 = (undefined4 *)(DAT_1013ced8 + DAT_1013ced4 * 4);
    }
    *puVar1 = param_1;
    uVar2 = 1;
    DAT_1013ced4 = DAT_1013ced4 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x25) = uVar2;
  *(undefined8 *)((int)param_1 + 0x2e) = 0;
  *(undefined8 *)((int)param_1 + 0x26) = 0;
  *(undefined8 *)((int)param_1 + 0x3e) = 0;
  *(undefined8 *)((int)param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_10129294;
  param_1[0x18] = &PTR_FUN_10129290;
  return param_1;
}

