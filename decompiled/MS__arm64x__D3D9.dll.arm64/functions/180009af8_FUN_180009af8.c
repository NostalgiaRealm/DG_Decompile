/*
 * FUN_180009af8 at 180009af8
 * undefined FUN_180009af8(void)
 * Address ranges: 180009af8-180009c13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009af8(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(longlong *)(param_1 + 0x67e8) == 0) {
    FUN_180012680();
    return;
  }
  pcVar1 = *(char **)(*(longlong *)(param_1 + 0x67e8) + 8);
  if ((byte)pcVar1[0x126d] < 3) {
    uVar4 = 0;
    uVar5 = 4;
    if (*pcVar1 != '\0') {
      uVar5 = 6;
    }
    uVar6 = 0;
    if (*pcVar1 != '\0') {
      uVar6 = 2;
    }
    if (pcVar1[1] != '\0') {
      uVar6 = uVar5;
    }
    do {
      lVar3 = uVar4 + 0x2a;
      uVar2 = (uint)uVar4;
      uVar5 = uVar2 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar7 = 0;
      if (pcVar1[lVar3] != '\0') {
        uVar7 = 8 << (ulonglong)(uVar2 & 0x1f);
      }
      uVar6 = uVar6 | uVar7;
    } while (uVar5 < 8);
  }
  else if (pcVar1[0x147] == '\0') {
    uVar6 = 0;
    lVar3 = 0;
    do {
      if ((byte)pcVar1[lVar3] != 0) {
        uVar5 = 0;
        do {
          if ((1 << (ulonglong)(uVar5 & 0x1f) & (uint)(byte)pcVar1[lVar3]) != 0) {
            uVar7 = *(uint *)(pcVar1 + lVar3 * 4 + 0x118) >> (ulonglong)((uVar5 & 3) << 3);
            uVar2 = uVar7 >> 4 & 0xf;
            if (uVar2 == 5) {
              if ((uVar7 & 0xf) < 8) {
                uVar7 = 8 << (ulonglong)(uVar7 & 0xf);
LAB_180009b98:
                uVar6 = uVar7 | uVar6;
              }
            }
            else if ((uVar2 == 10) && ((uVar7 & 0xf) < 2)) {
              uVar7 = 2 << (ulonglong)(uVar7 & 0xf);
              goto LAB_180009b98;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 10);
  }
  else {
    uVar6 = 0x7fe;
  }
  FUN_180012580(param_1,param_2,uVar6);
  return;
}

