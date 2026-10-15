/*
 * FUN_1801a15e8 at 1801a15e8
 * undefined FUN_1801a15e8(void)
 * Address ranges: 1801a15e8-1801a181b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1801a15e8(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5,
             undefined8 param_6,uint param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [16];
  uint local_90;
  uint local_88;
  short local_84;
  short local_82;
  undefined4 local_7c;
  undefined1 auStack_68 [16];
  uint local_58;
  uint local_50;
  short local_4c;
  short local_4a;
  undefined4 local_44;
  
  *param_2 = param_4 + 0x60;
  param_2[1] = param_3 + 0x60;
  lVar8 = *(longlong *)(param_4 + 0x7c);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(param_4 + 0x74);
  }
  param_2[2] = lVar8;
  lVar8 = *(longlong *)(param_3 + 0x7c);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(param_3 + 0x74);
  }
  param_2[3] = lVar8;
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar8 = (*extraout_x11)(uVar5,auStack_a0);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar8 + 0x20);
  uVar5 = (*(code *)puVar4)(0x180224000);
  lVar8 = (*extraout_x11_00)(uVar5,auStack_a0);
  uVar1 = *(undefined4 *)(lVar8 + 0x20);
  *(undefined4 *)(param_2 + 4) = 3;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar1;
  uVar5 = FUN_180193b50(lVar8,param_3,param_4);
  *(char *)(param_2 + 0xb) = (char)uVar5;
  *(bool *)((longlong)param_2 + 0x5b) = *(int *)(param_4 + 0x44) - 3U < 3;
  puVar6 = (undefined8 *)
           FUN_1801b8ff8(uVar5,auStack_68,param_3,param_4,param_9,param_10,(int)param_2[4]);
  uVar5 = *puVar6;
  uVar10 = puVar6[3];
  uVar9 = puVar6[2];
  *(undefined8 *)((longlong)param_2 + 0x3c) = puVar6[1];
  *(undefined8 *)((longlong)param_2 + 0x34) = uVar5;
  *(undefined8 *)((longlong)param_2 + 0x4c) = uVar10;
  *(undefined8 *)((longlong)param_2 + 0x44) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(puVar6 + 4);
  uVar5 = (*(code *)puVar4)(0x180224000);
  (*extraout_x11_01)(uVar5,auStack_a0);
  uVar5 = (*(code *)puVar4)(0x180224000);
  (*extraout_x11_02)(uVar5,auStack_68);
  if ((((*(int *)((longlong)param_2 + 0x34) != 0) || ((int)param_2[7] != 0)) ||
      (*(uint *)((longlong)param_2 + 0x3c) != local_90 >> (ulonglong)(param_5 & 0x1f))) ||
     (bVar3 = true, *(uint *)(param_2 + 8) != local_88 >> (ulonglong)(param_5 & 0x1f))) {
    bVar3 = false;
  }
  if (((*(int *)((longlong)param_2 + 0x44) != 0) || ((int)param_2[9] != 0)) ||
     ((*(uint *)((longlong)param_2 + 0x4c) != local_58 >> (ulonglong)(param_7 & 0x1f) ||
      (bVar2 = true, *(uint *)(param_2 + 10) != local_50 >> (ulonglong)(param_7 & 0x1f))))) {
    bVar2 = false;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_44;
  *(undefined4 *)(param_2 + 6) = local_7c;
  *(bool *)((longlong)param_2 + 0x5a) = bVar2 && bVar3;
  if (((!bVar2) || (!bVar3)) ||
     ((local_4a != 1 || (((local_82 != 1 || (local_4c != 1)) || (uVar7 = 1, local_84 != 1)))))) {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)param_2 + 0x59) = uVar7;
  return param_2;
}

