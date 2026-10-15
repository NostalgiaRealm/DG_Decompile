/*
 * FUN_1801682f0 at 1801682f0
 * undefined FUN_1801682f0(void)
 * Address ranges: 1801682f0-1801684ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801682f0(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  code *extraout_x11;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar5,0);
  lVar6 = param_1 + (ulonglong)param_2 * 0x70;
  *(undefined4 *)(lVar6 + 0x6ffc) = *param_3;
  *(undefined4 *)(lVar6 + 0x6fb0) = param_3[1];
  *(undefined4 *)(lVar6 + 0x6fb4) = param_3[2];
  *(undefined4 *)(lVar6 + 0x6fb8) = param_3[3];
  *(undefined4 *)(lVar6 + 0x6fc0) = param_3[5];
  *(undefined4 *)(lVar6 + 0x6fc4) = param_3[6];
  *(undefined4 *)(lVar6 + 0x6fc8) = param_3[7];
  *(undefined4 *)(lVar6 + 0x6fd0) = param_3[9];
  *(undefined4 *)(lVar6 + 0x6fd4) = param_3[10];
  *(undefined4 *)(lVar6 + 0x6fd8) = param_3[0xb];
  *(undefined4 *)(lVar6 + 0x6fe0) = param_3[0xd];
  *(undefined4 *)(lVar6 + 0x6fe4) = param_3[0xe];
  *(undefined4 *)(lVar6 + 0x6fe8) = param_3[0xf];
  fVar7 = (float)FUN_180104138((float)param_3[0x10] * (float)param_3[0x10] +
                               (float)param_3[0x11] * (float)param_3[0x11] +
                               (float)param_3[0x12] * (float)param_3[0x12]);
  *(float *)(lVar6 + 0x6ff0) = (float)param_3[0x10] / fVar7;
  *(float *)(lVar6 + 0x6ff4) = (float)param_3[0x11] / fVar7;
  *(float *)(lVar6 + 0x6ff8) = (float)param_3[0x12] / fVar7;
  *(undefined4 *)(lVar6 + 0x6fbc) = param_3[0x13];
  fVar7 = (float)param_3[0x14];
  if ((float)param_3[0x14] == 0.0) {
    fVar7 = 1e-07;
  }
  *(float *)(lVar6 + 0x6fcc) = fVar7;
  *(undefined4 *)(lVar6 + 0x7004) = param_3[0x15];
  *(undefined4 *)(lVar6 + 0x7008) = param_3[0x16];
  *(undefined4 *)(lVar6 + 0x700c) = param_3[0x17];
  uVar8 = FUN_180104118((float)param_3[0x19] * 0.5);
  *(undefined4 *)(lVar6 + 0x6fec) = uVar8;
  fVar7 = (float)FUN_180104118((float)param_3[0x18] * 0.5);
  *(float *)(lVar6 + 0x6fdc) = fVar7;
  fVar7 = fVar7 - *(float *)(lVar6 + 0x6fec);
  *(float *)(lVar6 + 0x7000) = fVar7;
  if (fVar7 <= 0.0) {
    *(float *)(lVar6 + 0x7000) = 1.0;
  }
  lVar1 = param_1 + (ulonglong)param_2;
  iVar4 = (int)param_2 >> 3;
  *(uint *)(lVar6 + 0x7010) = (uint)(*(char *)(param_3 + 0x1a) != '\0');
  *(undefined1 *)(param_1 + 0xf691) = 1;
  lVar2 = param_1 + (ulonglong)*(byte *)(lVar1 + 0xfd8) * 4 + 0xfc8;
  *(byte *)(lVar2 + iVar4) =
       *(byte *)(lVar2 + iVar4) & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  uVar3 = *(int *)(lVar6 + 0x6ffc) - 1U & 3;
  *(char *)(lVar1 + 0xfd8) = (char)uVar3;
  lVar6 = param_1 + (ulonglong)uVar3 * 4 + 0xfc8;
  *(byte *)(lVar6 + iVar4) = *(byte *)(lVar6 + iVar4) | (byte)(1 << (ulonglong)(param_2 & 7));
  *(undefined1 *)(param_1 + 0xf6c5) = 1;
  return;
}

