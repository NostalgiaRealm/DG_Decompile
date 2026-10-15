/*
 * FUN_1801a1360 at 1801a1360
 * undefined FUN_1801a1360(void)
 * Address ranges: 1801a1360-1801a15e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801a1360(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  undefined1 auStack_80 [64];
  
  local_88 = (code *)__hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar2 = (*extraout_x11)(param_4);
  if (iVar2 == 1) {
    uVar5 = 0xf;
    uVar7 = 0x22;
  }
  else if (iVar2 == 2) {
    uVar5 = 0x10;
    uVar7 = 0x23;
  }
  else if (iVar2 == 4) {
    uVar5 = 0x11;
    uVar7 = 0x24;
  }
  else if (iVar2 == 8) {
    uVar5 = 0x12;
    uVar7 = 0x25;
  }
  else {
    if (iVar2 != 0x10) {
      return 0;
    }
    uVar5 = 0x13;
    uVar7 = 0x26;
  }
  local_a0 = param_1 + 0x1c000;
  FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1930),&local_98,
                *(undefined4 *)(param_4 + 0x8c),0);
  FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x1cf18) + 0x1940),&local_90,
                *(undefined4 *)(param_3 + 0x94),*(undefined4 *)(param_2 + 0x28));
  lVar6 = *(longlong *)(param_4 + 0x7c);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_4 + 0x74);
  }
  lVar4 = *(longlong *)(param_3 + 0x7c);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_3 + 0x74);
  }
  *(longlong *)(param_2 + 0x58) = lVar6;
  *(undefined8 *)(param_2 + 0x68) = local_98;
  *(longlong *)(param_2 + 0x78) = lVar4;
  *(undefined8 *)(param_2 + 0x80) = local_90;
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0xa8);
  FUN_1801a0908(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_4 + 0x2c),
                uVar5,0,0,0);
  pcVar1 = local_88;
  if (((*(char *)(*(longlong *)(param_1 + 0x1cf10) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x20 +
                 0x6e9) != '\0') && ((&DAT_18022dd48)[*(uint *)(param_4 + 0x2c)] != '\0')) &&
     ((&DAT_18022dd48)[*(uint *)(param_3 + 0x2c)] != '\0')) {
    (*local_88)(0x180224000);
    lVar4 = (*extraout_x11_00)(lVar6,auStack_80);
    iVar2 = *(int *)(lVar4 + 0x20);
    (*pcVar1)(0x180224000);
    lVar6 = (*extraout_x11_01)(lVar6,auStack_80);
    if ((iVar2 - 0x2cU < 2) && (*(int *)(lVar6 + 0x20) - 0x2cU < 2)) {
      *(int *)(param_2 + 0x28) =
           *(int *)(param_2 + 0x20) +
           (*(int *)(param_2 + 0x24) + *(int *)(param_3 + 0x34)) * *(int *)(param_3 + 0x3c);
      *(int *)(param_2 + 0x34) =
           *(int *)(param_2 + 0x2c) +
           (*(int *)(param_2 + 0x30) + *(int *)(param_4 + 0x34)) * *(int *)(param_4 + 0x3c);
      puVar3 = (undefined8 *)
               FUN_18020d168(*(undefined8 *)(*(longlong *)(local_a0 + 0xf18) + 0x1930),&local_a0,
                             *(undefined4 *)(param_4 + 0x8c),1);
      *(undefined8 *)(param_2 + 0x68) = *puVar3;
      FUN_1801a0908(param_1,param_2,*(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_4 + 0x2c),
                    uVar7,1,0,0);
    }
  }
  return 1;
}

