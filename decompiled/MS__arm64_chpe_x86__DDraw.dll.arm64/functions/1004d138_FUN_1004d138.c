/*
 * FUN_1004d138 at 1004d138
 * undefined FUN_1004d138(void)
 * Address ranges: 1004d138-1004d40f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d138(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 auStack_30 [4];
  uint local_2c;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  piVar1 = (int *)(param_1 + 4);
  if (*(char *)(*piVar1 + 0x48) != '\0') {
    FUN_10038b50(*(undefined4 *)(param_1 + 0xfc),auStack_30,*(undefined4 *)(param_1 + 0x1cc));
    uVar5 = 1;
    uVar4 = 0;
    if ((*(uint *)(param_1 + 0x19c) >> 10 & 1) == 0) {
      do {
        if ((*(uint *)(param_1 + 0x1a8) & uVar5) != 0) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 << 1;
      } while (uVar4 < 0x18);
      uVar5 = 0;
      uVar6 = 1;
      do {
        if ((*(uint *)(param_1 + 0x1ac) & uVar6) != 0) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 << 1;
      } while (uVar5 < 0x18);
      uVar6 = 0;
      uVar7 = 1;
      do {
        if ((*(uint *)(param_1 + 0x1b0) & uVar7) != 0) break;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 << 1;
      } while (uVar6 < 0x18);
      uVar14 = 0;
      if ((*(uint *)(param_1 + 0x19c) & 1) != 0) {
        uVar7 = 0;
        uVar8 = 1;
        do {
          if ((*(uint *)(param_1 + 0x1b4) & uVar8) != 0) break;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 << 1;
        } while (uVar7 < 0x18);
        uVar14 = (undefined1)(uVar7 >> 3);
      }
      uVar8 = *(uint *)(param_1 + 0x1a4);
      uVar9 = 1;
      uVar7 = 0;
      do {
        if ((local_20 & uVar9) != 0) break;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 << 1;
      } while (uVar7 < 0x18);
      uVar9 = 0;
      uVar10 = 1;
      do {
        if ((uVar10 & local_1c) != 0) break;
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 << 1;
      } while (uVar9 < 0x18);
      uVar10 = 0;
      uVar11 = 1;
      do {
        if ((local_18 & uVar11) != 0) break;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 << 1;
      } while (uVar10 < 0x18);
      uVar13 = 0;
      if ((local_2c & 1) != 0) {
        uVar11 = 0;
        uVar12 = 1;
        do {
          if ((local_14 & uVar12) != 0) break;
          uVar11 = uVar11 + 1;
          uVar12 = uVar12 << 1;
        } while (uVar11 < 0x18);
        uVar13 = (undefined1)(uVar11 >> 3);
      }
      iVar2 = *piVar1;
      *(char *)(iVar2 + 0x38) = (char)(uVar4 >> 3);
      *(char *)(iVar2 + 0x39) = (char)(uVar5 >> 3);
      *(char *)(iVar2 + 0x3a) = (char)(uVar6 >> 3);
      *(undefined1 *)(iVar2 + 0x3b) = uVar14;
      *(uint *)(iVar2 + 0x3c) = uVar8 >> 3 & 0xff;
      *(char *)(iVar2 + 0x40) = (char)(uVar7 >> 3);
      *(char *)(iVar2 + 0x41) = (char)(uVar9 >> 3);
      *(char *)(iVar2 + 0x42) = (char)(uVar10 >> 3);
      *(undefined1 *)(iVar2 + 0x43) = uVar13;
      *(uint *)(iVar2 + 0x44) = local_24 >> 3 & 0xff;
    }
    else {
      do {
        if ((local_1c & uVar5) != 0) break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 << 1;
      } while (uVar4 < 0x18);
      iVar2 = *piVar1;
      cVar3 = (char)(uVar4 >> 3);
      *(undefined8 *)(iVar2 + 0x38) = 0x300020100;
      *(char *)(iVar2 + 0x40) = cVar3;
      *(char *)(iVar2 + 0x41) = cVar3 + '\x01';
      *(char *)(iVar2 + 0x42) = cVar3 + '\x02';
      *(undefined1 *)(iVar2 + 0x43) = 0;
      *(undefined4 *)(iVar2 + 0x44) = 4;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x19c);
  if ((uVar4 >> 5 & 1) == 0) {
    if (((uVar4 >> 6 & 1) != 0) || ((uVar4 >> 0x13 & 1) != 0)) {
      *(uint *)(param_1 + 0x1d0) =
           *(uint *)(param_1 + 0x1b0) | *(uint *)(param_1 + 0x1ac) | *(uint *)(param_1 + 0x1a8);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1d0) = 0xff;
  }
  return;
}

