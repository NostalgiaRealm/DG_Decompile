/*
 * FUN_10001520 at 10001520
 * undefined FUN_10001520(void)
 * Address ranges: 10001520-100016a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10001520(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_1015e6e4;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  if (DAT_10170abc == 0) {
    DAT_10170abc = FUN_101322b0(0x100);
    DAT_10170ab4 = 0x40;
    if (DAT_10170abc != 0) goto LAB_100015cc;
LAB_100015c0:
    uVar2 = 0;
  }
  else {
LAB_100015cc:
    if (DAT_10170ab4 == DAT_10170ab8) {
      iVar3 = DAT_10170ab4 << 3;
      if ((DAT_10170ab4 & 0x7fffffff) >> 0x1d != 0) {
        iVar3 = -1;
      }
      iVar3 = FUN_101322b0(iVar3);
      if (iVar3 == 0) goto LAB_100015c0;
      FUN_101325a0(iVar3,DAT_10170abc,((ulonglong)DAT_10170ab4 & 0x3fffffff) << 2);
      FUN_101322d0(DAT_10170abc);
      DAT_10170ab4 = DAT_10170ab4 << 1;
      puVar1 = (undefined4 *)(iVar3 + DAT_10170ab8 * 4);
      DAT_10170abc = iVar3;
    }
    else {
      puVar1 = (undefined4 *)(DAT_10170abc + DAT_10170ab8 * 4);
    }
    *puVar1 = param_1;
    uVar2 = 1;
    DAT_10170ab8 = DAT_10170ab8 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x25) = uVar2;
  *(undefined8 *)((int)param_1 + 0x2e) = 0;
  *(undefined8 *)((int)param_1 + 0x26) = 0;
  *(undefined8 *)((int)param_1 + 0x3e) = 0;
  *(undefined8 *)((int)param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_1015e684;
  param_1[0x18] = &PTR_FUN_1015e680;
  return param_1;
}

