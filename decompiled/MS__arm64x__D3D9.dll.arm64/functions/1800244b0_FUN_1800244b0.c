/*
 * FUN_1800244b0 at 1800244b0
 * undefined FUN_1800244b0(void)
 * Address ranges: 1800244b0-18002467f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800244b0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((*(char *)(param_1 + 0xed) != '\0') && (*(longlong *)(param_1 + 0xd0) != 0)) {
    FUN_180023780();
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    if (puVar4 != (undefined4 *)0x0) {
      uVar7 = *(uint *)(param_1 + 0x40);
      uVar2 = uVar7 >> 3;
      if (uVar2 != 0) {
        func_0x000180222c50(puVar4,0xffffffffffffffff,(ulonglong)uVar2 * 8);
        puVar4 = puVar4 + (ulonglong)uVar2 * 2;
      }
      if ((uVar7 >> 2 & 1) != 0) {
        *puVar4 = 0xffffffff;
      }
      uVar7 = *(uint *)(param_1 + 0x40) & 3;
      if (uVar7 != 0) {
        func_0x000180222c50(*(longlong *)(param_1 + 0x30) +
                            (ulonglong)(*(uint *)(param_1 + 0x40) >> 2) * 4,0xff,uVar7);
      }
      uVar7 = *(uint *)(param_1 + 0x40);
      puVar4 = *(undefined4 **)(param_1 + 0x38);
      uVar2 = uVar7 >> 3;
      if (uVar2 != 0) {
        func_0x000180222c50(puVar4,0xffffffffffffffff,(ulonglong)uVar2 * 8);
        puVar4 = puVar4 + (ulonglong)uVar2 * 2;
      }
      if ((uVar7 >> 2 & 1) != 0) {
        *puVar4 = 0xffffffff;
      }
      uVar7 = *(uint *)(param_1 + 0x40) & 3;
      if (uVar7 != 0) {
        func_0x000180222c50(*(longlong *)(param_1 + 0x38) +
                            (ulonglong)(*(uint *)(param_1 + 0x40) >> 2) * 4,0xff,uVar7);
      }
      uVar7 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) + 0xfff;
      uVar3 = (ulonglong)(uVar7 >> 0xf);
      bVar1 = (&DAT_18022a8d0)[(ulonglong)(uVar7 >> 0xc) & 7];
      *(byte *)(*(longlong *)(param_1 + 0x30) + uVar3) =
           *(byte *)(*(longlong *)(param_1 + 0x30) + uVar3) & bVar1;
      *(byte *)(*(longlong *)(param_1 + 0x38) + uVar3) =
           *(byte *)(*(longlong *)(param_1 + 0x38) + uVar3) & bVar1;
    }
    if (((*(char *)(param_1 + 0xed) != '\0') && (lVar5 = *(longlong *)(param_1 + 0xd0), lVar5 != 0))
       && (*(char *)(param_1 + 0xec) == '\0')) {
      lVar6 = *(longlong *)(param_1 + 0xe0);
      if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
        thunk_FUN_180001218(lVar5,lVar6,
                            (*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                            *(int *)(param_1 + 0x8c));
      }
      else {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x90) != 0) {
          do {
            thunk_FUN_180001218(lVar5,lVar6,
                                (uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3);
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + (ulonglong)*(uint *)(param_1 + 0xe8);
            lVar5 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xd8);
          } while (uVar7 < *(uint *)(param_1 + 0x90));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xed) = 0;
  }
  return;
}

