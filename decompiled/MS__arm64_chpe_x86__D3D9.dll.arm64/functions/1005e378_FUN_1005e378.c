/*
 * FUN_1005e378 at 1005e378
 * undefined FUN_1005e378(void)
 * Address ranges: 1005e378-1005e43b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e378(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  byte local_10 [16];
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  uVar6 = (uint)lVar7;
  if ((1 - (uVar6 >> 5) & 0xff) != 0) {
    local_10[(int)uVar6 >> 3] =
         local_10[(int)uVar6 >> 3] & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    while( true ) {
      iVar3 = *(int *)(param_1 + 0xfbd0 + (int)lVar7 * 4);
      if (iVar3 != 0) {
        piVar1 = (int *)(iVar3 + 0x30);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
      }
      uVar6 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar6 = (uint)lVar7;
      if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
      local_10[(int)uVar6 >> 3] =
           local_10[(int)uVar6 >> 3] & ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    }
  }
  return;
}

