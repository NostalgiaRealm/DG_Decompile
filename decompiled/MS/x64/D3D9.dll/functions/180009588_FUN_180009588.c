/*
 * FUN_180009588 at 180009588
 * undefined __fastcall FUN_180009588(longlong param_1, uint param_2, char param_3)
 * Address ranges: 180009588-180009632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009588(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
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
    lVar1 = *(longlong *)(&DAT_000066c8 + (ulonglong)(uVar4 & 0xff) * 8 + param_1);
    plVar2 = *(longlong **)(lVar1 + 0x60);
    if ((plVar2 != (longlong *)0x0) && ((*(uint *)(lVar1 + 0x50) & 0x200) != 0)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,0,1,lVar1 + 0x18);
    }
    uVar4 = 0;
    bVar6 = local_res18[0] == 0;
    if (!bVar6) {
      for (; (local_res18[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(&DAT_000066c0 + param_1);
    plVar2 = *(longlong **)(lVar1 + 0x60);
    if ((plVar2 != (longlong *)0x0) && ((*(uint *)(lVar1 + 0x50) & 0x200) != 0)) {
      pcVar5 = (char *)(*(longlong *)(lVar1 + 0x40) + -0x6818);
      if (*(longlong *)(lVar1 + 0x40) == 0) {
        pcVar5 = &DAT_00000020;
      }
      if (*pcVar5 != '\0') {
        (**(code **)(*plVar2 + 0x18))(plVar2,0,1,lVar1 + 0x18);
      }
    }
  }
  return;
}

