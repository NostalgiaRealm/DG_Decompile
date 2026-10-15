/*
 * FUN_180049190 at 180049190
 * undefined FUN_180049190(void)
 * Address ranges: 180049190-1800492d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049190(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_40 [4];
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  uVar8 = *(uint *)(param_1 + 2);
  cVar5 = *(char *)((longlong)param_1 + 0x14);
  FUN_18003feb0(lVar3,0,0,0);
  uVar6 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
  uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
  uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  lVar9 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
  local_40[0] = uVar8;
  uVar8 = (uint)lVar9;
  uVar10 = 0;
  if ((1 - (uVar8 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_40 + (longlong)((int)uVar8 >> 3)) =
         *(byte *)((longlong)local_40 + (longlong)((int)uVar8 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    while( true ) {
      lVar7 = uVar10 * 0x10;
      if ((int)lVar9 == 0) {
        *(undefined8 *)(lVar3 + 0xff28) = *(undefined8 *)(lVar2 + lVar7);
        *(undefined4 *)(lVar3 + 0x106c) = *(undefined4 *)(lVar2 + 8 + lVar7);
        *(undefined4 *)(lVar3 + 0x1028) = *(undefined4 *)(lVar2 + 0xc + lVar7);
      }
      else {
        *(undefined8 *)(lVar3 + 0xff38 + lVar9 * 8) = *(undefined8 *)(lVar2 + lVar7);
        *(undefined4 *)(lVar3 + 0x102c + lVar9 * 4) = *(undefined4 *)(lVar2 + 8 + lVar7);
        *(undefined4 *)(lVar3 + 0xfe8 + lVar9 * 4) = *(undefined4 *)(lVar2 + 0xc + lVar7);
      }
      *(undefined1 *)(lVar3 + 0xf68f) = 1;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar8 = (local_40[0] & 0xaaaaaaaa) >> 1 | (local_40[0] & 0x55555555) << 1;
      uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      lVar9 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
      uVar8 = (uint)lVar9;
      if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_40 + (longlong)((int)uVar8 >> 3)) =
           *(byte *)((longlong)local_40 + (longlong)((int)uVar8 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
    }
  }
  if (cVar5 != '\0') {
    puVar1 = (undefined8 *)(lVar2 + uVar10 * 0x10);
    *(undefined8 *)(lVar3 + 0xff30) = *puVar1;
    uVar4 = *(undefined4 *)(puVar1 + 1);
    *(undefined1 *)(lVar3 + 0xf690) = 1;
    *(undefined4 *)(lVar3 + 0xffc0) = uVar4;
  }
  return;
}

