/*
 * FUN_18005f2f0 at 18005f2f0
 * undefined __fastcall FUN_18005f2f0(longlong * param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 18005f2f0-18005f4ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f2f0(longlong *param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  
  uVar3 = (ulonglong)param_2;
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  lVar4 = uVar3 * 0x70;
  *(undefined4 *)(lVar4 + 0x6ffc + (longlong)param_1) = *param_3;
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdf6) = param_3[1];
  *(undefined4 *)(lVar4 + 0x6fb4 + (longlong)param_1) = param_3[2];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdf7) = param_3[3];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdf8) = param_3[5];
  *(undefined4 *)(lVar4 + 0x6fc4 + (longlong)param_1) = param_3[6];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdf9) = param_3[7];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdfa) = param_3[9];
  *(undefined4 *)(lVar4 + 0x6fd4 + (longlong)param_1) = param_3[10];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdfb) = param_3[0xb];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdfc) = param_3[0xd];
  *(undefined4 *)(lVar4 + 0x6fe4 + (longlong)param_1) = param_3[0xe];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xdfd) = param_3[0xf];
  fVar5 = FUN_1800fbc28((float)param_3[0x10] * (float)param_3[0x10] +
                        (float)param_3[0x11] * (float)param_3[0x11] +
                        (float)param_3[0x12] * (float)param_3[0x12]);
  *(float *)(param_1 + uVar3 * 0xe + 0xdfe) = (float)param_3[0x10] / fVar5;
  *(float *)(lVar4 + 0x6ff4 + (longlong)param_1) = (float)param_3[0x11] / fVar5;
  *(float *)(param_1 + uVar3 * 0xe + 0xdff) = (float)param_3[0x12] / fVar5;
  *(undefined4 *)(lVar4 + 0x6fbc + (longlong)param_1) = param_3[0x13];
  fVar5 = (float)param_3[0x14];
  if (fVar5 == 0.0) {
    fVar5 = 1e-07;
  }
  *(float *)(lVar4 + 0x6fcc + (longlong)param_1) = fVar5;
  *(undefined4 *)(lVar4 + 0x7004 + (longlong)param_1) = param_3[0x15];
  *(undefined4 *)(param_1 + uVar3 * 0xe + 0xe01) = param_3[0x16];
  *(undefined4 *)(lVar4 + 0x700c + (longlong)param_1) = param_3[0x17];
  fVar5 = FUN_1800fbc88((float)param_3[0x19] * 0.5);
  *(float *)(lVar4 + 0x6fec + (longlong)param_1) = fVar5;
  fVar5 = FUN_1800fbc88((float)param_3[0x18] * 0.5);
  *(float *)(lVar4 + 0x6fdc + (longlong)param_1) = fVar5;
  fVar5 = fVar5 - *(float *)(lVar4 + 0x6fec + (longlong)param_1);
  *(float *)(param_1 + uVar3 * 0xe + 0xe00) = fVar5;
  if (fVar5 <= 0.0) {
    *(undefined4 *)(param_1 + uVar3 * 0xe + 0xe00) = 0x3f800000;
  }
  *(uint *)(param_1 + uVar3 * 0xe + 0xe02) = (uint)(*(char *)(param_3 + 0x1a) != '\0');
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  pbVar1 = (byte *)((longlong)param_1 +
                   ((longlong)(int)param_2 >> 3) +
                   (ulonglong)*(byte *)(uVar3 + 0xfd8 + (longlong)param_1) * 4 + 0xfc8);
  *pbVar1 = *pbVar1 & ~('\x01' << (param_2 & 7));
  uVar2 = *(int *)(lVar4 + 0x6ffc + (longlong)param_1) - 1U & 3;
  *(char *)(uVar3 + 0xfd8 + (longlong)param_1) = (char)uVar2;
  pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)param_2 >> 3) + (ulonglong)uVar2 * 4 + 0xfc8
                   );
  *pbVar1 = *pbVar1 | '\x01' << (param_2 & 7);
  *(undefined1 *)((longlong)param_1 + 0xf6c5) = 1;
  return;
}

