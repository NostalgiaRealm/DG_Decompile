/*
 * _guTexChangeAttributes@48_native at 10004de0
 * undefined _guTexChangeAttributes@48_native(void)
 * Address ranges: 10004de0-10004ffb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
_guTexChangeAttributes_48_native
          (undefined8 param_1,undefined8 param_2,uint param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,undefined4 param_10,int param_11,undefined4 param_12,
          int param_13,undefined4 param_14,int param_15)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  uint extraout_w1;
  uint extraout_w11;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 local_90;
  
  iVar9 = FUN_1001beb0();
  uVar10 = 0;
  if (*(char *)(iVar9 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar9 + 0x38);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    if (((*(int *)(iVar9 + 0x5c) != 0 && extraout_w11 != 0xffffffff) &&
        (extraout_w11 < *(uint *)(iVar9 + 0x60))) &&
       (puVar6 = (undefined8 *)(*(int *)(iVar9 + 0x5c) + extraout_w11 * 0xc4),
       *(int *)((int)puVar6 + 0x44) < *(int *)(*(int *)(iVar9 + 0x1c) + 0x797))) {
      uStack_c8._0_4_ = (uint)puVar6[1];
      uStack_c8._4_4_ = (uint)((ulonglong)puVar6[1] >> 0x20);
      uVar2 = extraout_w1;
      if (extraout_w1 == 0xffffffff) {
        uVar2 = (uint)uStack_c8;
      }
      if (param_3 == 0xffffffff) {
        param_3 = uStack_c8._4_4_;
      }
      local_b8._0_4_ = (int)puVar6[3];
      local_b8._4_4_ = (int)((ulonglong)puVar6[3] >> 0x20);
      uStack_c8 = CONCAT44(param_3,uVar2);
      if (param_4 == -1) {
        param_4 = (int)local_b8;
      }
      if (param_5 == -1) {
        param_5 = local_b8._4_4_;
      }
      local_b8 = CONCAT44(param_5,param_4);
      uStack_98._4_4_ = (int)((ulonglong)puVar6[7] >> 0x20);
      local_90._0_4_ = (int)puVar6[8];
      if (param_6 == -1) {
        param_6 = uStack_98._4_4_;
      }
      if (param_7 == -1) {
        param_7 = (int)local_90;
      }
      uStack_98 = CONCAT44(param_6,(int)puVar6[7]);
      local_90 = CONCAT44((int)((ulonglong)puVar6[8] >> 0x20),param_7);
      local_c0._0_4_ = (int)puVar6[2];
      if (param_8 == -1) {
        param_8 = (int)local_c0;
      }
      uStack_a8._0_4_ = (int)puVar6[5];
      uStack_a8._4_4_ = (int)((ulonglong)puVar6[5] >> 0x20);
      local_c0 = CONCAT44((int)((ulonglong)puVar6[2] >> 0x20),param_8);
      if (param_9 == -1) {
        param_9 = (int)uStack_a8;
      }
      if (param_11 == -1) {
        param_11 = uStack_a8._4_4_;
      }
      uStack_a8 = CONCAT44(param_11,param_9);
      local_b0._0_4_ = (int)puVar6[4];
      local_b0._4_4_ = (int)((ulonglong)puVar6[4] >> 0x20);
      if (param_13 == -1) {
        param_13 = local_b0._4_4_;
      }
      if (param_15 == -1) {
        param_15 = (int)local_b0;
      }
      local_b0 = CONCAT44(param_13,param_15);
      uVar4 = *(uint *)(&DAT_10096998 + param_7 * 4);
      uVar5 = uVar4 >> (ulonglong)(*(byte *)(param_8 + 0x1009698c) & 0x1f);
      if (uVar5 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      if (param_8 - 4U < 3) {
        uVar3 = uVar4;
        uVar4 = uVar5;
      }
      if ((uVar2 == (uVar3 | uVar4 << 0x10) >> 0x10) && ((uVar3 & 0xffff) == param_3)) {
        uVar10 = 1;
        puVar6[1] = uStack_c8;
        *puVar6 = *puVar6;
        puVar6[3] = local_b8;
        puVar6[2] = local_c0;
        puVar6[5] = uStack_a8;
        puVar6[4] = local_b0;
        puVar6[7] = uStack_98;
        puVar6[6] = puVar6[6];
        puVar6[9] = puVar6[9];
        puVar6[8] = local_90;
        puVar6[0xb] = puVar6[0xb];
        puVar6[10] = puVar6[10];
        puVar6[0xd] = puVar6[0xd];
        puVar6[0xc] = puVar6[0xc];
        puVar6[0xf] = puVar6[0xf];
        puVar6[0xe] = puVar6[0xe];
        puVar6[0x11] = puVar6[0x11];
        puVar6[0x10] = puVar6[0x10];
        puVar6[0x13] = puVar6[0x13];
        puVar6[0x12] = puVar6[0x12];
        puVar6[0x15] = puVar6[0x15];
        puVar6[0x14] = puVar6[0x14];
        puVar6[0x17] = puVar6[0x17];
        puVar6[0x16] = puVar6[0x16];
        *(undefined4 *)(puVar6 + 0x18) = *(undefined4 *)(puVar6 + 0x18);
      }
    }
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
  }
  return uVar10;
}

