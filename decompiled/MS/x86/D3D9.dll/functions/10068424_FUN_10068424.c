/*
 * FUN_10068424 at 10068424
 * undefined __fastcall FUN_10068424(int param_1)
 * Address ranges: 10068424-100684f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10068424(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_1c;
  char acStack_15 [17];
  
  *(undefined4 *)(param_1 + 100) = 0;
  acStack_15[1] = '\0';
  acStack_15[2] = '\0';
  acStack_15[3] = '\0';
  acStack_15[4] = '\0';
  uVar3 = 0;
  acStack_15[5] = '\0';
  acStack_15[6] = '\0';
  acStack_15[7] = '\0';
  acStack_15[8] = '\0';
  acStack_15[9] = '\0';
  acStack_15[10] = '\0';
  acStack_15[0xb] = '\0';
  acStack_15[0xc] = '\0';
  do {
    *(undefined1 *)(param_1 + 0x14 + uVar3) = 0xfe;
    uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x4850 + uVar3 * 4);
    if (uVar1 != 0xffffffff) {
      local_1c = 0;
      do {
        if (uVar1 == ((&DAT_100d5b98)[local_1c] |
                     CONCAT13(-((char)(uVar1 >> 0x18) == -1),
                              CONCAT12(-((char)(uVar1 >> 0x10) == -1),
                                       CONCAT11(-((char)(uVar1 >> 8) == -1),-((char)uVar1 == -1)))))
           ) {
          *(char *)(param_1 + 0x14 + uVar3) = (char)local_1c + -1;
          if (0 < (int)local_1c) {
            *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1 << (local_1c - 1 & 0x1f);
            acStack_15[local_1c] = '\x01';
          }
          break;
        }
        local_1c = local_1c + 1;
      } while (local_1c < 0xc);
    }
    uVar3 = uVar3 + 1;
    if (0xb < uVar3) {
      iVar2 = 0;
      uVar3 = 0;
      *(uint *)(param_1 + 100) = ~*(uint *)(param_1 + 100) & 0x7ff;
      do {
        for (; (iVar2 < 0xc && (acStack_15[iVar2 + 1] != '\0')); iVar2 = iVar2 + 1) {
        }
        if ((*(int *)(*(int *)(param_1 + 4) + 0x4850 + uVar3 * 4) != -1) &&
           (*(char *)(param_1 + 0x14 + uVar3) == -2)) {
          *(char *)(param_1 + 0x14 + uVar3) = (char)iVar2;
          iVar2 = iVar2 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0xc);
      return;
    }
  } while( true );
}

