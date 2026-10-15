/*
 * FUN_180009634 at 180009634
 * undefined __fastcall FUN_180009634(longlong param_1, uint param_2, char param_3)
 * Address ranges: 180009634-1800096ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009634(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  uint local_res18 [4];
  
  local_res18[0] = param_2;
  uVar4 = 0;
  bVar6 = param_2 == 0;
  if (!bVar6) {
    for (; (param_2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  while (!bVar6) {
    pbVar3 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar4 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
    plVar1 = *(longlong **)
              (*(longlong *)(&DAT_000066c8 + (ulonglong)(uVar4 & 0xff) * 8 + param_1) + 0x60);
    if ((plVar1 != (longlong *)0x0) &&
       ((*(uint *)(*(longlong *)(&DAT_000066c8 + (ulonglong)(uVar4 & 0xff) * 8 + param_1) + 0x50) &
        0x200) != 0)) {
      (**(code **)(*plVar1 + 0x20))();
    }
    uVar4 = 0;
    bVar6 = local_res18[0] == 0;
    if (!bVar6) {
      for (; (local_res18[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  if (param_3 != '\0') {
    lVar2 = *(longlong *)(&DAT_000066c0 + param_1);
    if ((*(longlong **)(lVar2 + 0x60) != (longlong *)0x0) &&
       ((*(uint *)(lVar2 + 0x50) & 0x200) != 0)) {
      pcVar5 = (char *)(*(longlong *)(lVar2 + 0x40) + -0x6818);
      if (*(longlong *)(lVar2 + 0x40) == 0) {
        pcVar5 = &DAT_00000020;
      }
      if (*pcVar5 != '\0') {
        (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x20))();
      }
    }
  }
  return;
}

