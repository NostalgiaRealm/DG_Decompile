/*
 * FUN_18013bc58 at 18013bc58
 * undefined FUN_18013bc58(void)
 * Address ranges: 18013bc58-18013bef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18013bc58(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar4 = local_50;
  uVar11 = *(undefined8 *)(param_1 + 0xf6d0);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  bVar5 = *(char *)(param_3 + 0x443) != '\0';
  if (*(char *)(param_3 + 0x4a6c) == '\x03') {
    bVar5 = false;
    uVar8 = 0;
    do {
      if (0xb < (uint)uVar8) break;
      uVar3 = *(uint *)(param_3 + 0x4850 + uVar8 * 4);
      if ((((uVar3 >> 0x18 == 0x40) || ((uVar3 & 0xff0000) == 0x400000)) ||
          ((uVar3 & 0xff00) == 0x4000)) || (bVar5 = false, (uVar3 & 0xff) == 0x40)) {
        bVar5 = true;
      }
      uVar8 = (ulonglong)((uint)uVar8 + 1);
    } while (!bVar5);
  }
  local_50._6_2_ = SUB82(uVar4,6);
  local_50._0_6_ =
       CONCAT15(*(undefined1 *)(param_1 + 0xae),CONCAT14(bVar5,*(undefined4 *)(param_1 + 0xa4)));
  puVar6 = (undefined8 *)FUN_1802229a8(0x108);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6[3] = 0;
    puVar6[4] = &PTR_FUN_18022c480;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
    puVar6[8] = param_2;
    puVar6[9] = local_50;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0;
    *puVar6 = &PTR_FUN_18022b0b8;
    puVar6[6] = &PTR_FUN_18022b0a0;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0;
    thunk_FUN_18022384c(puVar6 + 0x1c);
    puVar6[7] = param_3;
    puVar6[1] = uVar11;
    *(undefined4 *)(puVar6 + 2) = uVar2;
    if (*(char *)(param_3 + 0x4a6c) == '\x03') {
      local_50 = 0;
      local_48 = 0;
      lVar9 = 0;
      *(undefined4 *)(puVar6 + 0x14) = 0;
      do {
        *(undefined1 *)((longlong)puVar6 + lVar9 + 0x50) = 0xfe;
        uVar3 = *(uint *)(puVar6[7] + lVar9 * 4 + 0x4850);
        if (uVar3 != 0xffffffff) {
          uVar10 = 0;
          do {
            if (uVar3 == ((&DAT_18022c150)[(int)uVar10] |
                         CONCAT13(-(0xfe < (byte)(uVar3 >> 0x18)),
                                  CONCAT12(-(0xfe < (byte)(uVar3 >> 0x10)),
                                           CONCAT11(-(0xfe < (byte)(uVar3 >> 8)),
                                                    -(0xfe < (byte)uVar3)))))) {
              *(char *)((longlong)puVar6 + lVar9 + 0x50) = (char)(uVar10 - 1);
              if (0 < (int)uVar10) {
                *(uint *)(puVar6 + 0x14) =
                     1 << (ulonglong)(uVar10 - 1 & 0x1f) | *(uint *)(puVar6 + 0x14);
                (&stack0xffffffffffffffaf)[(int)uVar10] = 1;
              }
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0xc);
      lVar9 = 0;
      *(uint *)(puVar6 + 0x14) = ~*(uint *)(puVar6 + 0x14) & 0x7ff;
      iVar7 = 0;
      do {
        for (; (iVar7 < 0xc && (*(char *)((longlong)&local_50 + (longlong)iVar7) != '\0'));
            iVar7 = iVar7 + 1) {
        }
        if ((*(int *)(puVar6[7] + lVar9 * 4 + 0x4850) != -1) &&
           (*(char *)((longlong)puVar6 + lVar9 + 0x50) == -2)) {
          *(char *)((longlong)puVar6 + lVar9 + 0x50) = (char)iVar7;
          iVar7 = iVar7 + 1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0xc);
    }
    puVar6[0x1a] = puVar6[1];
    *(undefined4 *)(puVar6 + 0x1b) = *(undefined4 *)(puVar6 + 2);
  }
  puVar1 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar1 = puVar6 + 6;
  }
  return puVar1;
}

