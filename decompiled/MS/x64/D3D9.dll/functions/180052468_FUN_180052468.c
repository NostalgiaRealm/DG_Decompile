/*
 * FUN_180052468 at 180052468
 * undefined __fastcall FUN_180052468(longlong * param_1)
 * Address ranges: 180052468-180052531
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052468(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  uint local_res8 [8];
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar2 = *(uint *)(param_1 + 2);
  cVar1 = *(char *)((longlong)param_1 + 0x14);
  FUN_180049b30(lVar3,0,0,0);
  uVar8 = 0;
  local_res8[0] = uVar2;
  uVar7 = 0;
  bVar9 = uVar2 == 0;
  if (!bVar9) {
    for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  while (!bVar9) {
    pbVar6 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar7 >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar7 & 7));
    uVar7 = uVar7 & 0xff;
    uVar5 = *(undefined8 *)(lVar4 + uVar8 * 0x10);
    if (uVar7 == 0) {
      *(undefined8 *)(lVar3 + 0xff28) = uVar5;
      *(undefined4 *)(lVar3 + 0x106c) = *(undefined4 *)(lVar4 + 8 + uVar8 * 0x10);
      *(undefined4 *)(lVar3 + 0x1028) = *(undefined4 *)(lVar4 + 0xc + uVar8 * 0x10);
    }
    else {
      *(undefined8 *)(lVar3 + 0xff38 + (ulonglong)uVar7 * 8) = uVar5;
      *(undefined4 *)(lVar3 + 0x102c + (ulonglong)uVar7 * 4) =
           *(undefined4 *)(lVar4 + 8 + uVar8 * 0x10);
      *(undefined4 *)(lVar3 + 0xfe8 + (ulonglong)uVar7 * 4) =
           *(undefined4 *)(lVar4 + 0xc + uVar8 * 0x10);
    }
    uVar8 = (ulonglong)((int)uVar8 + 1);
    *(undefined1 *)(lVar3 + 0xf68f) = 1;
    uVar7 = 0;
    bVar9 = local_res8[0] == 0;
    if (!bVar9) {
      for (; (local_res8[0] >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
  }
  if (cVar1 != '\0') {
    *(undefined8 *)(lVar3 + 0xff30) = *(undefined8 *)(lVar4 + uVar8 * 0x10);
    *(undefined4 *)(lVar3 + 0xffc0) = *(undefined4 *)(lVar4 + 8 + uVar8 * 0x10);
    *(undefined1 *)(lVar3 + 0xf690) = 1;
  }
  return;
}

