/*
 * FUN_18016c6f0 at 18016c6f0
 * undefined FUN_18016c6f0(void)
 * Address ranges: 18016c6f0-18016c937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c6f0(longlong param_1,uint param_2,int param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *extraout_x11;
  float fVar6;
  
  if (4 < param_2) {
    return;
  }
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar3,0);
  if (param_2 == 0) {
    return;
  }
  if (10 < param_3 - 1U) {
    return;
  }
  param_2 = param_2 - 1;
  uVar4 = (ulonglong)param_2;
  switch(param_3) {
  case 1:
    if (5 < (uint)param_4) {
      return;
    }
    *(undefined4 *)(param_1 + uVar4 * 0x34 + 0x844) =
         *(undefined4 *)(&DAT_18022bf08 + (ulonglong)(uint)param_4 * 4);
    break;
  case 2:
    if (5 < (uint)param_4) {
      return;
    }
    *(undefined4 *)(param_1 + uVar4 * 0x34 + 0x848) =
         *(undefined4 *)(&DAT_18022bf08 + (ulonglong)(uint)param_4 * 4);
    break;
  case 3:
    if (5 < (uint)param_4) {
      return;
    }
    *(undefined4 *)(param_1 + uVar4 * 0x34 + 0x84c) =
         *(undefined4 *)(&DAT_18022bf08 + (ulonglong)(uint)param_4 * 4);
    break;
  case 4:
    lVar5 = param_1 + uVar4 * 0x34;
    *(float *)(lVar5 + 0x85c) = (float)((uint)param_4 >> 0x10 & 0xff) / 255.0;
    *(float *)(lVar5 + 0x860) = (float)((uint)param_4 >> 8 & 0xff) / 255.0;
    *(float *)(lVar5 + 0x864) = (float)((uint)param_4 & 0xff) / 255.0;
    *(float *)(param_1 + (uVar4 + 0x26) * 0x34 + 0xb0) = (float)((uint)param_4 >> 0x18) / 255.0;
    break;
  case 5:
    *(bool *)(param_1 + uVar4 * 8 + 0x819) = param_4 == 2.8026e-45;
    break;
  case 6:
    *(bool *)(param_1 + uVar4 * 8 + 0x81a) = param_4 == 2.8026e-45;
    break;
  case 7:
    *(bool *)(param_1 + uVar4 * 8 + 0x818) = param_4 == 2.8026e-45;
    break;
  case 8:
    fVar6 = 15.99;
    if (((param_4 <= 15.99) && (fVar6 = -16.0, -16.0 <= param_4)) &&
       (fVar6 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
      fVar6 = param_4;
    }
    *(float *)(param_1 + uVar4 * 0x34 + 0x850) = fVar6;
    break;
  case 9:
    *(char *)(param_1 + uVar4 * 8 + 0x81b) = SUB41(param_4,0);
    break;
  case 10:
    if (0x10 < (uint)param_4) {
      param_4 = 1.4013e-45;
    }
    *(float *)(param_1 + uVar4 * 0x34 + 0x854) = param_4;
    break;
  case 0xb:
    uVar2 = 1 << (ulonglong)(param_2 & 0x1f);
    uVar1 = *(uint *)(param_1 + 0xe98) & (uVar2 ^ 0xffffffff);
    if (param_4 != 0.0) {
      uVar1 = *(uint *)(param_1 + 0xe98) | uVar2;
    }
    *(uint *)(param_1 + 0xe98) = uVar1;
    *(undefined1 *)(param_1 + 0xf6c0) = 1;
    param_1 = param_1 + 0xf6b8;
    goto LAB_18016c91c;
  }
  param_1 = param_1 + 0xf6bc;
LAB_18016c91c:
  *(byte *)(param_1 + ((int)param_2 >> 3)) =
       *(byte *)(param_1 + ((int)param_2 >> 3)) | (byte)(1 << (ulonglong)(param_2 & 7));
  return;
}

