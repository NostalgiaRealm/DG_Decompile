/*
 * FUN_180012e78 at 180012e78
 * undefined __fastcall FUN_180012e78(longlong param_1, longlong param_2)
 * Address ranges: 180012e78-180012f8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012e78(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(longlong *)(param_1 + 0x67e8) == 0) {
    FUN_18001ea4c(param_1,param_2);
  }
  else {
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x67e8) + 8);
    if ((byte)pcVar1[0x126d] < 3) {
      uVar7 = -(uint)(*pcVar1 != '\0') & 2;
      if (pcVar1[1] != '\0') {
        uVar7 = (-(uint)(*pcVar1 != '\0') & 2) + 4;
      }
      uVar4 = 0;
      do {
        if (pcVar1[uVar4 + 0x2a] != '\0') {
          uVar7 = uVar7 | 8 << ((byte)uVar4 & 0x1f);
        }
        uVar8 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar8;
      } while (uVar8 < 8);
    }
    else if (pcVar1[0x147] == '\0') {
      uVar7 = 0;
      lVar5 = 0;
      do {
        if (pcVar1[lVar5] != 0) {
          uVar8 = 0;
          do {
            if (((byte)pcVar1[lVar5] >> (uVar8 & 0x1f) & 1) != 0) {
              uVar2 = *(uint *)(pcVar1 + lVar5 * 4 + 0x118) >> ((char)uVar8 * '\b' & 0x1fU);
              bVar6 = (byte)uVar2 >> 4;
              if (bVar6 == 5) {
                if ((uVar2 & 8) == 0) {
                  iVar3 = 8;
LAB_180012f17:
                  uVar7 = uVar7 | iVar3 << ((byte)uVar2 & 0xf);
                }
              }
              else if ((bVar6 == 10) && ((uVar2 & 0xe) == 0)) {
                iVar3 = 2;
                goto LAB_180012f17;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 4);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 10);
    }
    else {
      uVar7 = 0x7fe;
    }
    FUN_18001e950(param_1,param_2,uVar7);
  }
  return;
}

