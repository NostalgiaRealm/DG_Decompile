/*
 * FUN_180079f54 at 180079f54
 * undefined __fastcall FUN_180079f54(longlong param_1)
 * Address ranges: 180079f54-18007a037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180079f54(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char acStack_19 [17];
  
  lVar4 = 0;
  acStack_19[1] = '\0';
  acStack_19[2] = '\0';
  acStack_19[3] = '\0';
  acStack_19[4] = '\0';
  acStack_19[5] = '\0';
  acStack_19[6] = '\0';
  acStack_19[7] = '\0';
  acStack_19[8] = '\0';
  acStack_19[9] = '\0';
  acStack_19[10] = '\0';
  acStack_19[0xb] = '\0';
  acStack_19[0xc] = '\0';
  *(undefined4 *)(param_1 + 0x70) = 0;
  do {
    *(undefined1 *)(param_1 + 0x20 + lVar4) = 0xfe;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x4850 + lVar4 * 4);
    if (uVar1 != 0xffffffff) {
      uVar2 = 0;
      do {
        if (uVar1 == (CONCAT13(-((char)(uVar1 >> 0x18) == -1),
                               CONCAT12(-((char)(uVar1 >> 0x10) == -1),
                                        CONCAT11(-((char)(uVar1 >> 8) == -1),-((char)uVar1 == -1))))
                     | (&DAT_180102640)[(int)uVar2])) {
          *(char *)(param_1 + 0x20 + lVar4) = (char)uVar2 + -1;
          if (0 < (int)uVar2) {
            acStack_19[(int)uVar2] = '\x01';
            *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1 << ((char)uVar2 - 1U & 0x1f);
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0xc);
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0xc) {
      iVar3 = 0;
      *(uint *)(param_1 + 0x70) = ~*(uint *)(param_1 + 0x70) & 0x7ff;
      lVar4 = 0;
      do {
        while ((iVar3 < 0xc && (acStack_19[(longlong)iVar3 + 1] != '\0'))) {
          iVar3 = iVar3 + 1;
        }
        if ((*(int *)(*(longlong *)(param_1 + 8) + 0x4850 + lVar4 * 4) != -1) &&
           (*(char *)(param_1 + 0x20 + lVar4) == -2)) {
          *(char *)(param_1 + 0x20 + lVar4) = (char)iVar3;
          iVar3 = iVar3 + 1;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0xc);
      return;
    }
  } while( true );
}

