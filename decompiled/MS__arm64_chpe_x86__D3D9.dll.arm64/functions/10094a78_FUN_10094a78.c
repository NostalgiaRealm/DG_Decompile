/*
 * FUN_10094a78 at 10094a78
 * undefined FUN_10094a78(void)
 * Address ranges: 10094a78-10094beb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10094a78(int param_1)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char acStack_11 [17];
  
  acStack_11[1] = '\0';
  acStack_11[2] = '\0';
  acStack_11[3] = '\0';
  acStack_11[4] = '\0';
  acStack_11[5] = '\0';
  acStack_11[6] = '\0';
  acStack_11[7] = '\0';
  acStack_11[8] = '\0';
  puVar1 = (uint *)(param_1 + 100);
  acStack_11[9] = '\0';
  acStack_11[10] = '\0';
  acStack_11[0xb] = '\0';
  acStack_11[0xc] = '\0';
  *puVar1 = 0;
  uVar5 = 0;
  do {
    *(undefined1 *)(param_1 + 0x14 + uVar5) = 0xfe;
    uVar3 = *(uint *)(*(int *)(param_1 + 4) + uVar5 * 4 + 0x4850);
    if (uVar3 != 0xffffffff) {
      uVar4 = 0;
      do {
        if (uVar3 == ((&DAT_10162090)[uVar4] |
                     CONCAT13(-(0xfe < (byte)(uVar3 >> 0x18)),
                              CONCAT12(-(0xfe < (byte)(uVar3 >> 0x10)),
                                       CONCAT11(-(0xfe < (byte)(uVar3 >> 8)),-(0xfe < (byte)uVar3)))
                             ))) {
          *(char *)(uVar5 + param_1 + 0x14) = (char)(uVar4 - 1);
          if (0 < (int)uVar4) {
            uVar3 = *puVar1;
            acStack_11[uVar4] = '\x01';
            *puVar1 = 1 << (ulonglong)(uVar4 - 1 & 0x1f) | uVar3;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xc);
    }
    uVar5 = uVar5 + 1;
    if (0xb < uVar5) {
      uVar5 = 0;
      *puVar1 = ~*puVar1 & 0x7ff;
      iVar6 = 0;
      do {
        for (; (iVar6 < 0xc && (acStack_11[iVar6 + 1] != '\0')); iVar6 = iVar6 + 1) {
        }
        if ((*(int *)(*(int *)(param_1 + 4) + uVar5 * 4 + 0x4850) != -1) &&
           (pcVar2 = (char *)(uVar5 + param_1 + 0x14), *pcVar2 == -2)) {
          *pcVar2 = (char)iVar6;
          iVar6 = iVar6 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xc);
      return;
    }
  } while( true );
}

