/*
 * FUN_100205e0 at 100205e0
 * undefined FUN_100205e0(void)
 * Address ranges: 100205e0-1002080b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100205e0(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  char cVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  FUN_10020560(param_1);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = 0;
  do {
    puVar1 = (uint *)(param_1 + 0xa0c + (int)(uVar9 >> 5) * 4);
    uVar7 = *puVar1;
    uVar7 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
    uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
    if ((1 - (uVar7 >> 5) & 0xff) != 0) {
      pbVar2 = (byte *)(((int)uVar7 >> 3) + (int)puVar1);
      iVar5 = (int)uVar9 + uVar7;
      *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
      if (iVar5 != -1) {
        do {
          auVar10 = (*pcVar3)(*(undefined4 *)(param_1 + 0x14),iVar5,
                              *(int *)(param_1 + 0xabc) + iVar5 * 0x40);
          (*extraout_w11_00)(auVar10._0_8_ & 0xffffffff,auVar10._8_8_ & 0xffffffff);
          while( true ) {
            puVar1 = (uint *)(param_1 + 0xa0c + (int)(uVar9 >> 5) * 4);
            uVar7 = *puVar1;
            uVar7 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
            uVar7 = (uVar7 & 0xcccccccc) >> 2 | (uVar7 & 0x33333333) << 2;
            uVar7 = (uVar7 & 0xf0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
            uVar7 = (uint)LZCOUNT(uVar7 >> 0x10 | uVar7 << 0x10);
            if ((1 - (uVar7 >> 5) & 0xff) != 0) break;
            uVar7 = (int)uVar9 + 0x20;
            uVar9 = (ulonglong)uVar7;
            if (0x109 < uVar7) goto LAB_1002064c;
          }
          pbVar2 = (byte *)(((int)uVar7 >> 3) + (int)puVar1);
          iVar5 = (int)uVar9 + uVar7;
          *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar7 & 7)) ^ 0xff);
        } while (iVar5 != -1);
      }
      break;
    }
    uVar7 = (int)uVar9 + 0x20;
    uVar9 = (ulonglong)uVar7;
  } while (uVar7 < 0x10a);
LAB_1002064c:
  if (*(char *)(param_1 + 0xa02) != '\0') {
    puVar6 = (undefined4 *)(param_1 + 0x20c);
    uVar4 = (*pcVar3)();
    (*extraout_w11)(uVar4,*puVar6);
    *(char *)(param_1 + 0xa02) = '\0';
  }
  if (((*(char *)(param_1 + 0x221) == '\0') && (*(char *)(param_1 + 0x224) == '\0')) ||
     (*(char *)(param_1 + 0x223) == '\0')) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  if (cVar8 != *(char *)(param_1 + 0x222)) {
    uVar4 = (*pcVar3)();
    (*extraout_w11_01)(uVar4,cVar8);
    *(char *)(param_1 + 0x222) = cVar8;
  }
  return;
}

