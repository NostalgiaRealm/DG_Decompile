/*
 * FUN_100aeff0 at 100aeff0
 * undefined FUN_100aeff0(void)
 * Address ranges: 100aeff0-100af3c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aeff0(int param_1,undefined8 param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    do {
      uVar6 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        do {
          uVar2 = *(uint *)(param_1 + 0x14) >> (ulonglong)(uVar6 & 0x1f);
          if (uVar2 == 0) {
            uVar2 = 1;
          }
          uVar3 = *(uint *)(param_1 + 0x18) >> (ulonglong)(uVar6 & 0x1f);
          if (uVar3 == 0) {
            uVar3 = 1;
          }
          uVar4 = uVar6 + *(int *)(param_1 + 0x2c) * uVar7;
          if (*(int *)(param_1 + 0x34) - 3U < 3) {
            if (*(int *)(param_1 + 0xf4) != 0) {
              FUN_100aa8c0(*(float *)(param_1 + 0x148) * 0.0,*(float *)(param_1 + 0x14c) * 0.0,
                           (float)(int)uVar2 * *(float *)(param_1 + 0x148),
                           (float)(int)uVar3 * *(float *)(param_1 + 0x14c),0,0,
                           *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x1c),uVar6,uVar7,uVar6,uVar7,0,0);
            }
          }
          else {
            iVar5 = *(int *)(param_1 + 0x1c);
            if (iVar5 == 0) {
              FUN_100aa510(*(undefined4 *)(param_1 + 0xa8),1,*(undefined4 *)(param_1 + 8));
              iVar5 = *(int *)(param_1 + 0x1c);
            }
            FUN_100aa8c0(*(float *)(param_1 + 0x148) * 0.0,*(float *)(param_1 + 0x14c) * 0.0,
                         (float)(int)uVar2 * *(float *)(param_1 + 0x148),
                         (float)(int)uVar3 * *(float *)(param_1 + 0x14c),0,0,
                         *(undefined4 *)(param_1 + 0xa8),iVar5,iVar5,uVar6,uVar7,uVar6,uVar7,
                         *(undefined4 *)(param_3 + 0xc),
                         *(undefined4 *)(*(int *)(param_3 + 0x18) + uVar4 * 0x1c));
          }
          uVar2 = uVar4 >> 5;
          uVar6 = uVar6 + 1;
          pbVar1 = (byte *)((uVar4 >> 3 & 3) + param_1 + 0x154 + uVar2 * 4);
          *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          pbVar1 = (byte *)((uVar4 >> 3 & 3) + param_1 + 0x178 + uVar2 * 4);
          *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          pbVar1 = (byte *)((uVar4 >> 3 & 3) + param_1 + 0x90 + uVar2 * 4);
          *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
        } while (uVar6 < *(uint *)(param_1 + 0x20));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x24));
  }
  return;
}

