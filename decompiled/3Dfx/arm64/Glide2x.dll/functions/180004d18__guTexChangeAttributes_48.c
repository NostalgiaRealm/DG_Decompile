/*
 * _guTexChangeAttributes@48 at 180004d18
 * undefined8 __cdecl _guTexChangeAttributes@48(uint param_1, uint param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12)
 * Address ranges: 180004d18-180004f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
_guTexChangeAttributes_48
          (uint param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
          int param_8,int param_9,int param_10,int param_11,int param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
                    /* 0x4d18  128  _guTexChangeAttributes@48
                       0x4d18  285  guTexChangeAttributes */
  lVar4 = FUN_180016878();
  uVar6 = 0;
  if (*(char *)(lVar4 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar4 + 0x60));
    if (((*(longlong *)(lVar4 + 0xa0) != 0 && param_1 != 0xffffffff) &&
        (param_1 < *(uint *)(lVar4 + 0xa8))) &&
       (puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0xa0) + (ulonglong)param_1 * 0xd0),
       *(int *)((longlong)puVar5 + 0x4c) < *(int *)(*(longlong *)(lVar4 + 0x30) + 0x833))) {
      uStack_118._0_4_ = (uint)puVar5[1];
      uStack_118._4_4_ = (uint)((ulonglong)puVar5[1] >> 0x20);
      if (param_2 == 0xffffffff) {
        param_2 = (uint)uStack_118;
      }
      if (param_3 == 0xffffffff) {
        param_3 = uStack_118._4_4_;
      }
      local_100._0_4_ = (int)puVar5[4];
      local_100._4_4_ = (int)((ulonglong)puVar5[4] >> 0x20);
      uStack_118 = CONCAT44(param_3,param_2);
      if (param_4 == -1) {
        param_4 = (int)local_100;
      }
      if (param_5 == -1) {
        param_5 = local_100._4_4_;
      }
      local_100 = CONCAT44(param_5,param_4);
      local_e0._4_4_ = (int)((ulonglong)puVar5[8] >> 0x20);
      uStack_d8._0_4_ = (int)puVar5[9];
      if (param_6 == -1) {
        param_6 = local_e0._4_4_;
      }
      if (param_7 == -1) {
        param_7 = (int)uStack_d8;
      }
      local_f0._0_4_ = (int)puVar5[6];
      local_f0._4_4_ = (int)((ulonglong)puVar5[6] >> 0x20);
      local_e0 = CONCAT44(param_6,(int)puVar5[8]);
      uStack_d8 = CONCAT44((int)((ulonglong)puVar5[9] >> 0x20),param_7);
      local_110._0_4_ = (int)puVar5[2];
      if (param_8 == -1) {
        param_8 = (int)local_110;
      }
      local_110 = CONCAT44((int)((ulonglong)puVar5[2] >> 0x20),param_8);
      if (param_9 == -1) {
        param_9 = (int)local_f0;
      }
      if (param_10 == -1) {
        param_10 = local_f0._4_4_;
      }
      local_f0 = CONCAT44(param_10,param_9);
      uStack_f8._0_4_ = (int)puVar5[5];
      uStack_f8._4_4_ = (int)((ulonglong)puVar5[5] >> 0x20);
      if (param_11 == -1) {
        param_11 = uStack_f8._4_4_;
      }
      if (param_12 == -1) {
        param_12 = (int)uStack_f8;
      }
      uStack_f8 = CONCAT44(param_11,param_12);
      uVar2 = *(uint *)(&DAT_180063bd0 + (longlong)param_7 * 4);
      uVar3 = uVar2 >> (ulonglong)((byte)(&DAT_180063bc4)[param_8] & 0x1f);
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar1 = uVar2;
      if (param_8 - 4U < 3) {
        uVar1 = uVar3;
        uVar3 = uVar2;
      }
      if ((param_2 == (uVar3 | uVar1 << 0x10) >> 0x10) && ((uVar3 & 0xffff) == param_3)) {
        uVar6 = 1;
        puVar5[1] = uStack_118;
        *puVar5 = *puVar5;
        puVar5[3] = puVar5[3];
        puVar5[2] = local_110;
        puVar5[5] = uStack_f8;
        puVar5[4] = local_100;
        puVar5[7] = puVar5[7];
        puVar5[6] = local_f0;
        puVar5[9] = uStack_d8;
        puVar5[8] = local_e0;
        puVar5[0xb] = puVar5[0xb];
        puVar5[10] = puVar5[10];
        puVar5[0xd] = puVar5[0xd];
        puVar5[0xc] = puVar5[0xc];
        puVar5[0xf] = puVar5[0xf];
        puVar5[0xe] = puVar5[0xe];
        puVar5[0x11] = puVar5[0x11];
        puVar5[0x10] = puVar5[0x10];
        puVar5[0x13] = puVar5[0x13];
        puVar5[0x12] = puVar5[0x12];
        puVar5[0x15] = puVar5[0x15];
        puVar5[0x14] = puVar5[0x14];
        puVar5[0x17] = puVar5[0x17];
        puVar5[0x16] = puVar5[0x16];
        puVar5[0x19] = puVar5[0x19];
        puVar5[0x18] = puVar5[0x18];
      }
    }
    FUN_1800608a0((uint *)(lVar4 + 0x60));
  }
  return uVar6;
}

