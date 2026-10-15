/*
 * FUN_10130670 at 10130670
 * undefined FUN_10130670(void)
 * Address ranges: 10130670-10130773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10130670(undefined8 *param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_1016d044;
  puVar1 = PTR_DAT_1016d040;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  FUN_101325a0(param_1 + 4,puVar1,uVar2);
  FUN_101325a0(param_1 + 0x14,puVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = param_2;
  iVar3 = DAT_1016d054;
  *(code **)((int)param_1 + DAT_1016d054 + 0xa0) = FUN_1012ffc0;
  *(code **)((int)param_1 + iVar3 + 0x20) = FUN_1012ffc0;
  iVar3 = DAT_1016d058;
  *(short *)((int)param_1 + DAT_1016d058 + 0xa0) = param_4 << 2;
  *(short *)((int)param_1 + iVar3 + 0x20) = param_4 << 2;
  iVar3 = DAT_1016d050;
  *(undefined4 *)((int)param_1 + DAT_1016d050 + 0xa0) = param_3;
  *(undefined4 *)((int)param_1 + iVar3 + 0x20) = param_3;
  return param_1;
}

