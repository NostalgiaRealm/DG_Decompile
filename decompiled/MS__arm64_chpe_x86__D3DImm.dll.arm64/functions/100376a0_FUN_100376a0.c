/*
 * FUN_100376a0 at 100376a0
 * undefined FUN_100376a0(void)
 * Address ranges: 100376a0-100377cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100376a0(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char local_10 [16];
  
  uVar4 = (*(uint *)(param_1 + 0x444) & 0xaaaaaaaa) >> 1 |
          (*(uint *)(param_1 + 0x444) & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar5 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = 0;
  uVar5 = (uint)LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  if (uVar5 != 0) {
    do {
      iVar2 = *(int *)(param_1 + (uVar4 + 0x12) * 0x120);
      if ((((&DAT_100a2300)[iVar2 * 2] == '\0') || (*(int *)(uVar4 * 0x120 + param_1 + 0x1444) != 2)
          ) && (((&DAT_100a2301)[iVar2 * 2] == '\0' ||
                (*(int *)(uVar4 * 0x120 + param_1 + 0x1448) != 2)))) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      pcVar1 = local_10 + uVar4;
      uVar4 = uVar4 + 1;
      *pcVar1 = cVar3;
    } while (uVar4 < uVar5);
  }
  if ((*(char *)(param_1 + 0x1919) != '\0') && (uVar4 = 1, 1 < uVar5)) {
    do {
      if ((local_10[uVar4] != '\0') && (*(char *)(uVar4 + param_1 + 0x1909) != '\0')) {
        return 0x88760819;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  *param_2 = 1;
  return 0;
}

