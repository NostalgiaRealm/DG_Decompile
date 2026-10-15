/*
 * FUN_1001ac00 at 1001ac00
 * undefined FUN_1001ac00(void)
 * Address ranges: 1001ac00-1001ad63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001ac00(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x6670) == 0) {
    uVar4 = FUN_1002a298(param_1,param_2);
  }
  else {
    pcVar1 = *(char **)(*(int *)(param_1 + 0x6670) + 4);
    if ((byte)pcVar1[0x126d] < 3) {
      uVar6 = 0;
      if (*pcVar1 != '\0') {
        uVar6 = 2;
      }
      if (pcVar1[1] != '\0') {
        uVar6 = uVar6 | 4;
      }
      uVar5 = 0;
      do {
        iVar3 = uVar5 + 0x2a;
        uVar8 = uVar5 & 0x1f;
        uVar5 = uVar5 + 1;
        if (pcVar1[iVar3] != '\0') {
          uVar6 = 8 << (ulonglong)uVar8 | uVar6;
        }
      } while (uVar5 < 8);
    }
    else if (pcVar1[0x147] == '\0') {
      uVar6 = 0;
      uVar5 = 0;
      do {
        if ((byte)pcVar1[uVar5] != 0) {
          uVar8 = 0;
          do {
            if ((1 << (ulonglong)(uVar8 & 0x1f) & (uint)(byte)pcVar1[uVar5]) != 0) {
              uVar7 = *(uint *)(pcVar1 + uVar5 * 4 + 0x118) >> (ulonglong)((uVar8 & 3) << 3);
              uVar2 = uVar7 >> 4 & 0xf;
              uVar7 = uVar7 & 0xf;
              if (uVar2 == 5) {
                if (uVar7 < 8) {
                  uVar7 = 8 << (ulonglong)uVar7;
LAB_1001acbc:
                  uVar6 = uVar7 | uVar6;
                }
              }
              else if (uVar2 == 10 && uVar7 < 2) {
                uVar7 = 2 << (ulonglong)uVar7;
                goto LAB_1001acbc;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 4);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 10);
    }
    else {
      uVar6 = 0x7fe;
    }
    uVar4 = FUN_1002a198(param_1,param_2,uVar6);
  }
  return uVar4;
}

