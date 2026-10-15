/*
 * FUN_180043348 at 180043348
 * undefined FUN_180043348(void)
 * Address ranges: 180043348-1800435f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180043348(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar5 = local_50;
  uVar12 = *(undefined8 *)(param_1 + 0xf6d8);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  bVar6 = *(char *)(param_3 + 0x443) != '\0';
  if (*(char *)(param_3 + 0x4a6c) == '\x03') {
    bVar6 = false;
    uVar9 = 0;
    do {
      if (0xb < (uint)uVar9) break;
      uVar3 = *(uint *)(param_3 + 0x4850 + uVar9 * 4);
      if ((((uVar3 >> 0x18 == 0x40) || ((uVar3 & 0xff0000) == 0x400000)) ||
          ((uVar3 & 0xff00) == 0x4000)) || (bVar6 = false, (uVar3 & 0xff) == 0x40)) {
        bVar6 = true;
      }
      uVar9 = (ulonglong)((uint)uVar9 + 1);
    } while (!bVar6);
  }
  local_50._6_2_ = SUB82(uVar5,6);
  local_50._0_6_ =
       CONCAT15(*(undefined1 *)(param_1 + 0xae),CONCAT14(bVar6,*(undefined4 *)(param_1 + 0xa4)));
  puVar7 = (undefined8 *)FUN_180102f80(0x118);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    puVar7[3] = 0;
    puVar7[4] = &PTR_FUN_1802349e8;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = 0;
    puVar7[8] = param_2;
    puVar7[9] = local_50;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *puVar7 = &PTR_FUN_180234630;
    puVar7[6] = &PTR_FUN_180234618;
    pcVar4 = __imp_KERNEL32_dll_InitializeCriticalSection;
    puVar7[0x15] = 0;
    puVar7[0x16] = 0;
    puVar7[0x17] = &PTR_FUN_1802349e8;
    puVar7[0x19] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1c] = 0;
    *(undefined4 *)(puVar7 + 0x1d) = 0;
    (*pcVar4)(puVar7 + 0x1e);
    puVar7[7] = param_3;
    puVar7[1] = uVar12;
    *(undefined4 *)(puVar7 + 2) = uVar2;
    if (*(char *)(param_3 + 0x4a6c) == '\x03') {
      local_50 = 0;
      local_48 = 0;
      lVar10 = 0;
      *(undefined4 *)(puVar7 + 0x14) = 0;
      do {
        *(undefined1 *)((longlong)puVar7 + lVar10 + 0x50) = 0xfe;
        uVar3 = *(uint *)(puVar7[7] + lVar10 * 4 + 0x4850);
        if (uVar3 != 0xffffffff) {
          uVar11 = 0;
          do {
            if (uVar3 == ((&DAT_18022c150)[(int)uVar11] |
                         CONCAT13(-(0xfe < (byte)(uVar3 >> 0x18)),
                                  CONCAT12(-(0xfe < (byte)(uVar3 >> 0x10)),
                                           CONCAT11(-(0xfe < (byte)(uVar3 >> 8)),
                                                    -(0xfe < (byte)uVar3)))))) {
              *(char *)((longlong)puVar7 + lVar10 + 0x50) = (char)(uVar11 - 1);
              if (0 < (int)uVar11) {
                *(uint *)(puVar7 + 0x14) =
                     1 << (ulonglong)(uVar11 - 1 & 0x1f) | *(uint *)(puVar7 + 0x14);
                (&stack0xffffffffffffffaf)[(int)uVar11] = 1;
              }
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < 0xc);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xc);
      lVar10 = 0;
      *(uint *)(puVar7 + 0x14) = ~*(uint *)(puVar7 + 0x14) & 0x7ff;
      iVar8 = 0;
      do {
        for (; (iVar8 < 0xc && (*(char *)((longlong)&local_50 + (longlong)iVar8) != '\0'));
            iVar8 = iVar8 + 1) {
        }
        if ((*(int *)(puVar7[7] + lVar10 * 4 + 0x4850) != -1) &&
           (*(char *)((longlong)puVar7 + lVar10 + 0x50) == -2)) {
          *(char *)((longlong)puVar7 + lVar10 + 0x50) = (char)iVar8;
          iVar8 = iVar8 + 1;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xc);
    }
    puVar7[0x1c] = puVar7[1];
    *(undefined4 *)(puVar7 + 0x1d) = *(undefined4 *)(puVar7 + 2);
  }
  puVar1 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar1 = puVar7 + 6;
  }
  return puVar1;
}

