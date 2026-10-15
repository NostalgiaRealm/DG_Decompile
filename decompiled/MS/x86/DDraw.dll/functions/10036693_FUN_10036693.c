/*
 * FUN_10036693 at 10036693
 * undefined __stdcall FUN_10036693(uint * param_1)
 * Address ranges: 10036693-100366fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036693(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  uVar2 = FUN_1003684f(uVar1,(int)uVar1 >> 0x1f);
  if (((uVar2 != DAT_100707b8) && (*(uint *)(DAT_100707b4 + uVar2 * 0x10) == uVar1)) &&
     (*(uint *)(DAT_100707b4 + 4 + uVar2 * 0x10) == (int)uVar1 >> 0x1f)) {
    uVar2 = uVar2 + 1;
    if (uVar2 < DAT_100707b8) {
      do {
        puVar3 = (undefined4 *)(DAT_100707b4 + uVar2 * 0x10);
        uVar2 = uVar2 + 1;
        puVar3[-4] = *puVar3;
        puVar3[-3] = puVar3[1];
        puVar3[-2] = puVar3[2];
        puVar3[-1] = puVar3[3];
      } while (uVar2 < DAT_100707b8);
    }
    DAT_100707b8 = DAT_100707b8 - 1;
  }
  return;
}

