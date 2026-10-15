/*
 * FUN_180058170 at 180058170
 * undefined FUN_180058170(void)
 * Address ranges: 180058170-18005836b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058170(longlong *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6ffc) = *param_3;
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdf6) = param_3[1];
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fb4) = param_3[2];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdf7) = param_3[3];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdf8) = param_3[5];
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fc4) = param_3[6];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdf9) = param_3[7];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdfa) = param_3[9];
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fd4) = param_3[10];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdfb) = param_3[0xb];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdfc) = param_3[0xd];
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fe4) = param_3[0xe];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xdfd) = param_3[0xf];
  fVar4 = (float)FUN_180001210((float)param_3[0x10] * (float)param_3[0x10] +
                               (float)param_3[0x11] * (float)param_3[0x11] +
                               (float)param_3[0x12] * (float)param_3[0x12]);
  *(float *)(param_1 + (ulonglong)param_2 * 0xe + 0xdfe) = (float)param_3[0x10] / fVar4;
  *(float *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6ff4) = (float)param_3[0x11] / fVar4;
  *(float *)(param_1 + (ulonglong)param_2 * 0xe + 0xdff) = (float)param_3[0x12] / fVar4;
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fbc) = param_3[0x13];
  fVar4 = (float)param_3[0x14];
  if ((float)param_3[0x14] == 0.0) {
    fVar4 = 1e-07;
  }
  *(float *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fcc) = fVar4;
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x7004) = param_3[0x15];
  *(undefined4 *)(param_1 + (ulonglong)param_2 * 0xe + 0xe01) = param_3[0x16];
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x700c) = param_3[0x17];
  uVar5 = FUN_1800011f0((float)param_3[0x19] * 0.5);
  *(undefined4 *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fec) = uVar5;
  fVar4 = (float)FUN_1800011f0((float)param_3[0x18] * 0.5);
  fVar6 = *(float *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fec);
  *(float *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6fdc) = fVar4;
  fVar4 = fVar4 - fVar6;
  *(float *)(param_1 + (ulonglong)param_2 * 0xe + 0xe00) = fVar4;
  if (fVar4 <= 0.0) {
    *(float *)(param_1 + (ulonglong)param_2 * 0xe + 0xe00) = 1.0;
  }
  iVar2 = (int)param_2 >> 3;
  *(uint *)(param_1 + (ulonglong)param_2 * 0xe + 0xe02) = (uint)(*(char *)(param_3 + 0x1a) != '\0');
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  lVar3 = (ulonglong)*(byte *)((longlong)param_1 + (ulonglong)param_2 + 0xfd8) * 4 + 0xfc8;
  *(byte *)((longlong)param_1 + iVar2 + lVar3) =
       *(byte *)((longlong)param_1 + iVar2 + lVar3) & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff)
  ;
  uVar1 = *(int *)((longlong)param_1 + (ulonglong)param_2 * 0x70 + 0x6ffc) - 1U & 3;
  *(char *)((longlong)param_1 + (ulonglong)param_2 + 0xfd8) = (char)uVar1;
  lVar3 = (ulonglong)uVar1 * 4 + 0xfc8;
  *(byte *)((longlong)param_1 + iVar2 + lVar3) =
       *(byte *)((longlong)param_1 + iVar2 + lVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
  *(undefined1 *)((longlong)param_1 + 0xf6c5) = 1;
  return;
}

