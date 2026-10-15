/*
 * FUN_1004ef08 at 1004ef08
 * undefined __fastcall FUN_1004ef08(uint * param_1, undefined1 * param_2, uint param_3)
 * Address ranges: 1004ef08-1004ef93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004ef08(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_44 [16];
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 3 & 0x3f;
  uVar4 = uVar1 + param_3 * 8;
  if (uVar4 < uVar1) {
    param_1[1] = param_1[1] + 1;
  }
  *param_1 = uVar4;
  param_1[1] = param_1[1] + (param_3 >> 0x1d);
  while (param_3 != 0) {
    param_3 = param_3 - 1;
    *(undefined1 *)((int)param_1 + uVar2 + 0x18) = *param_2;
    uVar2 = uVar2 + 1;
    param_2 = param_2 + 1;
    if (uVar2 == 0x40) {
      uVar4 = 0;
      iVar3 = 0;
      do {
        local_44[uVar4] =
             CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x1b + (int)param_1),
                                        *(undefined1 *)(iVar3 + 0x1a + (int)param_1)),
                               *(undefined1 *)(iVar3 + 0x19 + (int)param_1)),
                      *(undefined1 *)(iVar3 + 0x18 + (int)param_1));
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar4 < 0x10);
      FUN_1004e7cf((int *)(param_1 + 2),local_44);
      uVar2 = 0;
    }
  }
  return;
}

