/*
 * FUN_100313c8 at 100313c8
 * undefined FUN_100313c8(void)
 * Address ranges: 100313c8-10031473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100313c8(int param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(uint *)(param_1 + 8);
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar5 + uVar4 >> 1;
      uVar6 = *(ulonglong *)(*(int *)(param_1 + 4) + 8 + uVar3 * 0x40);
      uVar2 = uVar3;
      if ((uVar6 <= param_2[1]) &&
         ((puVar1 = (ulonglong *)(*(int *)(param_1 + 4) + uVar3 * 0x40), uVar6 != param_2[1] ||
          (*puVar1 <= *param_2)))) {
        if (param_2[1] <= uVar6) {
          if (uVar6 != param_2[1]) {
            return uVar3;
          }
          if (*param_2 <= *puVar1) {
            return uVar3;
          }
        }
        uVar4 = uVar3 + 1;
        uVar2 = uVar5;
        uVar3 = uVar4;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar4);
  }
  return uVar3;
}

